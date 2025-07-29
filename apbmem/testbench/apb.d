import uvm;
import esdl;

enum kind_e: bool {
  READ,
  WRITE
}

class apb_seq_item: uvm_sequence_item
{
  mixin uvm_object_utils;

  this(string name="apb_seq_item") {
    super(name);
  }

  @UVM_DEFAULT {
    @rand ubvec!12 addr;
    @rand ubvec!32 data;
    @rand kind_e   kind;
  }

  constraint! q{
    addr % 4 == 0;
    addr < 64;
  } cst_addr;

}

class apb_seq: uvm_sequence!apb_seq_item
{
  mixin uvm_object_utils;

  this(string name="apb_seq_item") {
    super(name);
  }

  @UVM_DEFAULT {
    @rand uint size;
  }
  
  constraint! q{
    size < 128;
  } cst_seq_size;

  override void body() {
    req = apb_seq_item.type_id.create("req");
    for (size_t i=0; i!=size; ++i) {
      wait_for_grant();
      req.randomize();
      apb_seq_item cloned = cast(apb_seq_item) req.clone();
      // uvm_info("avst_item", cloned.sprint, UVM_DEBUG);
      send_request(cloned);
    }
    // uvm_info("avst_item", "Finishing sequence", UVM_DEBUG);
  }
}

class apb_sequencer: uvm_sequencer!apb_seq_item
{
  mixin uvm_component_utils;

  this(string name, uvm_component parent=null) {
    super(name, parent);
  }
}

class apb_driver: uvm_driver!(apb_seq_item)
{

  mixin uvm_component_utils;
  
  ApbIf apb_if;

  this(string name, uvm_component parent = null) {
    super(name, parent);
    uvm_config_db!ApbIf.get(this, "", "apb_if", apb_if);
    assert (apb_if !is null);
  }


  override void run_phase(uvm_phase phase) {
    super.run_phase(phase);
    while (true) {
      // uvm_info("AVL TRANSACTION", req.sprint(), UVM_DEBUG);
      seq_item_port.get_next_item(req);
      uvm_info("DRIVER", req.sprint(), UVM_NONE);
      // if (req !is null) {

      // 	for (int i = 0; i != req.delay; ++i) {
      // 	  wait (apb_if.clock.negedge());

      // 	  apb_if.end = false;
      // 	  apb_if.valid = false;
      // 	}
	
      // 	while (apb_if.ready == 0 || apb_if.reset == 1) {
      // 	  wait (apb_if.clock.negedge());

      // 	  apb_if.end = false;
      // 	  apb_if.valid = false;
      // 	}
	  

      // 	wait (apb_if.clock.negedge());

      // 	apb_if.data = req.data;
      // 	apb_if.end = req.end;
      // 	apb_if.valid = true;

      // 	// req_analysis.write(req);
      // 	seq_item_port.item_done();
      // }
      // else {
      // 	wait (apb_if.clock.negedge());

      // 	apb_if.end = false;
      // 	apb_if.valid = false;
      // }

      seq_item_port.item_done();

    }
  }

  // protected void trans_received(apb_item tr) {}
  // protected void trans_executed(apb_item tr) {}

}

class apb_agent: uvm_agent
{

  @UVM_BUILD {
    apb_sequencer sequencer;
    apb_driver    driver;

    // apb_monitor   req_monitor;
    // apb_monitor   rsp_monitor;

    // apb_snooper   req_snooper;
    // apb_snooper   rsp_snooper;

    // apb_scoreboard   scoreboard;
  }
  
  mixin uvm_component_utils;
   
  this(string name, uvm_component parent = null) {
    super(name, parent);
  }

  override void connect_phase(uvm_phase phase) {
    driver.seq_item_port.connect(sequencer.seq_item_export);
    // req_snooper.egress.connect(req_monitor.ingress);
    // req_monitor.egress.connect(scoreboard.req_analysis);
    // rsp_snooper.egress.connect(rsp_monitor.ingress);
    // rsp_monitor.egress.connect(scoreboard.rsp_analysis);
  }

  override void end_of_elaboration_phase(uvm_phase phase) {
    // rsp_snooper.set_read_latency(1);
  }
}

class apb_env: uvm_env
{
  mixin uvm_component_utils;

  @UVM_BUILD private apb_agent agent;

  this(string name, uvm_component parent) {
    super(name, parent);
  }

}

class ApbIf: VlInterface
{
  Port!(Signal!(ubvec!1)) PCLK;
  Port!(Signal!(ubvec!1)) PRESETn;

  VlPort!(1) PSEL;
  VlPort!(1) PENABLE;
  VlPort!(1) PWRITE;
  VlPort!(1) PREADY;
  VlPort!(1) PSLVERR;
  VlPort!(12) PADDR;
  VlPort!(32) PWDATA;
  VlPort!(32) PRDATA;
}

class apb_tb_top: Entity
{
  import Vapb_design_euvm;
  import esdl.intf.verilator.verilated;
  import esdl.intf.verilator.trace;

  ApbIf apbSlave;
  
  VerilatedVcdD _trace;

  Signal!(ubvec!1) clk;
  Signal!(ubvec!1) rstn;

  DVapb_design dut;

  
  void opentrace(string vcdname) {
    if (_trace is null) {
      _trace = new VerilatedVcdD();
      dut.trace(_trace, 99);
      _trace.open(vcdname);
    }
  }

  void closetrace() {
    if (_trace !is null) {
      _trace.close();
      _trace = null;
    }
  }

  override void doConnect() {
    import std.stdio;

    apbSlave.PCLK(clk);
    apbSlave.PRESETn(rstn);

    apbSlave.PSEL(dut.PSEL);
    apbSlave.PENABLE(dut.PENABLE);
    apbSlave.PWRITE(dut.PWRITE);
    apbSlave.PREADY(dut.PREADY);
    apbSlave.PSLVERR(dut.PSLVERR);
    apbSlave.PADDR(dut.PADDR);
    apbSlave.PWDATA(dut.PWDATA);
    apbSlave.PRDATA(dut.PRDATA);
  }

  override void doBuild() {
    dut = new DVapb_design();
    traceEverOn(true);
    opentrace("apb_design.vcd");
  }
  
  Task!stimulateClk stimulateClkTask;
  Task!stimulateRst stimulateRstTask;

  void stimulateClk() {
    import std.stdio;
    clk = false;
    for (size_t i=0; i!=1000000; ++i)
      {
	// writeln("clk is: ", clk);
	clk = false;
	dut.PCLK = false;
	wait (2.nsec);
	dut.eval();
	if (_trace !is null)
	  _trace.dump(getSimTime().getVal());
	wait (8.nsec);
	clk = true;
	dut.PCLK = true;
	wait (2.nsec);
	dut.eval();
	if (_trace !is null) {
	  _trace.dump(getSimTime().getVal());
	  _trace.flush();
	}
	wait (8.nsec);
      }
  }

  void stimulateRst() {
    rstn = false;
    dut.PRESETn = false;
    wait (100.nsec);
    rstn = true;
    dut.PRESETn = true;
  }
  
}

class random_test: uvm_test
{
  mixin uvm_component_utils;

  this(string name="", uvm_component parent=null) {
    super(name, parent);
  }

  @UVM_BUILD {
    apb_env env;
  }

  override void run_phase(uvm_phase phase) {
    phase.get_objection().set_drain_time(this, 100.nsec);
    phase.raise_objection(this);
    apb_seq rand_sequence = apb_seq.type_id.create("apb_seq");

    for (size_t i=0; i!=1; ++i) {
      rand_sequence.randomize();
      auto sequence = cast(apb_seq) rand_sequence.clone();
      sequence.start(env.agent.sequencer, null);
    }
    phase.drop_objection(this);
  }
}

class apb_tb: uvm_context
{
  apb_tb_top top;
  override void initial() {
    uvm_config_db!(ApbIf).set(null, "uvm_test_top.env.agent.driver", "apb_if", top.apbSlave);
    // uvm_config_db!(ApbIf).set(null, "uvm_test_top.env.agent.snooper", "apb_if", top.apbSlave);
  }
}

void main(string[] args) {
  import std.stdio;
  uint random_seed;

  CommandLine cmdl = new CommandLine(args);

  if (cmdl.plusArgs("random_seed=" ~ "%d", random_seed))
    writeln("Using random_seed: ", random_seed);
  else random_seed = 1;

  auto tb = new apb_tb;
  tb.multicore(0, 1);
  tb.elaborate("tb", args);
  tb.set_seed(random_seed);
  tb.start();
  
}

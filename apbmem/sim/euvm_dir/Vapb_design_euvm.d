import esdl.base.core: Entity;
import esdl.data.bvec: ubvec;
import esdl.intf.verilator.verilated: VerilatedContext, VerilatedModel, VlExport;
import esdl.intf.verilator.trace: VerilatedVcdC, VerilatedTraceBaseC,VerilatedVcdD;

//DESCRIPTION: Dlang code to link D classes and functions with the C++ classes


extern(C++) {
    align(8) class Vapb_design: VerilatedModel {
        //Symbol table, currently unimplemented, using void pointer
        void* vlSymsp;

        //PORTS 
        ubvec!(1)* PCLK;
        ubvec!(1)* PRESETn;
        ubvec!(1)* PSEL;
        ubvec!(1)* PENABLE;
        ubvec!(1)* PWRITE;
        ubvec!(1)* PREADY;
        ubvec!(1)* PSLVERR;
        ubvec!(12)* PADDR;
        ubvec!(32)* PWDATA;
        ubvec!(32)* PRDATA;

        // CELLS
        //Currently unimplemented, using void pointers 

        // Root instance pointer, currently unimplemented, using void pointers 
        void* rootp;
        this(VerilatedContext* contextp, const char* name = "TOP".ptr);
        ~this();
        final void eval();
        final void eval_step();
        final void eval_end_step();
        final void trace(VerilatedTraceBaseC tfp, int levels, int options = 0) {
              contextp().trace(tfp, levels, options);
        }
        final const(char*) name();
        final override char* hierName() const;
        final override char* modelName() const;
        final override uint threads() const;
    }
    Vapb_design create_Vapb_design();
    void finalize(Vapb_design obj);
    
}
class DVapb_design: Entity
 {
    Vapb_design _dut;
    
    this () {
        _dut = create_Vapb_design();
    }
    override void doConnect() {
        PCLK(_dut.PCLK);
        PRESETn(_dut.PRESETn);
        PSEL(_dut.PSEL);
        PENABLE(_dut.PENABLE);
        PWRITE(_dut.PWRITE);
        PREADY(_dut.PREADY);
        PSLVERR(_dut.PSLVERR);
        PADDR(_dut.PADDR);
        PWDATA(_dut.PWDATA);
        PRDATA(_dut.PRDATA);
    }

    //Functions for Ports 
    VlExport!(1) PCLK;
    VlExport!(1) PRESETn;
    VlExport!(1) PSEL;
    VlExport!(1) PENABLE;
    VlExport!(1) PWRITE;
    VlExport!(1) PREADY;
    VlExport!(1) PSLVERR;
    VlExport!(12) PADDR;
    VlExport!(32) PWDATA;
    VlExport!(32) PRDATA;
    final void eval() {
        _dut.eval();
    }
    final void finish() {
        finalize(_dut);
    }
    final void trace(VerilatedVcdD tfp, int levels, int options = 0) {
        _dut.trace(tfp.getTraceBase(), levels, options);
    }
    final void trace(VerilatedTraceBaseC tfp, int levels, int options = 0) {
        _dut.trace(tfp, levels, options);
    }
}

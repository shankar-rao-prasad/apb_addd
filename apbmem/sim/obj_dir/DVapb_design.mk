EUVMBINDIR = $(dir $(shell which ldc2))

DVapb_design.a: verilated_d.o verilated_vcd_d.o euvm_trace.o \
	verilated.o verilated_vcd_c.o verilated_threads.o \
	Vapb_design_euvm_funcs.o Vapb_design_euvm.o Vapb_design__ALL.a

Vapb_design_euvm.o: ../euvm_dir/Vapb_design_euvm.d
	ldc2 -c -O3 -w $^ -of$@

euvm_trace.o: $(EUVMBINDIR)/../import/esdl/intf/verilator/trace.d
	ldc2 -c -O3 -w $^ -of$@

Vapb_design_euvm_funcs.o: ../euvm_dir/Vapb_design_euvm_funcs.cpp
	g++ $(CPPFLAGS) -c -I . -I $(VERILATOR_ROOT)/include $^

verilated_vcd_d.o: $(EUVMBINDIR)/../import/esdl/intf/verilator/cpp/verilated_vcd_d.cpp
	g++ $(CPPFLAGS) -c -I . -I $(VERILATOR_ROOT)/include $^

verilated_d.o: $(EUVMBINDIR)/../import/esdl/intf/verilator/cpp/verilated_d.cpp
	g++ $(CPPFLAGS) -c -I . -I $(VERILATOR_ROOT)/include $^

include Vapb_design.mk

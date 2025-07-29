CC              = gcc
CFLAGS		= -Wall -O3 -fPIC
SEED            = 1

DFLAGS = -relocation-model=pic -w -O0 -g

LDC2BINDIR = $(dir $(shell which ldc2))
VLBINDIR = $(dir $(shell which verilator))
VERBOSITY = NONE

VLATOR_SRC = euvm_dir/Vapb_design_euvm.d euvm_dir/Vapb_design_euvm_funcs.cpp obj_dir/Vapb_design.cpp obj_dir/Vapb_design.h

.PHONY: all clean

all: apb_design

clean:
	rm -rf apb_design* euvm_dir obj_dir link_verilator

run: apb_design
	./apb_design +UVM_TESTNAME=apb.random_test +UVM_VERBOSITY=$(VERBOSITY) +random_seed=$(SEED) # +UVM_OBJECTION_TRACE

obj_dir/DVapb_design.a: ../rtl/apb_design.v
	verilator --no-timing --threads 1 --trace --cc --euvm $^
	make -C obj_dir -f DVapb_design.mk

# euvm_dir/Vapb_design_euvm.d euvm_dir/Vapb_design_euvm_funcs.o euvm_dir/verilated_vcd_d.o obj_dir/Vapb_design__ALL.a obj_dir/verilated.o: link_verilator


apb_design: ../testbench/apb.d obj_dir/DVapb_design.a
	ldc2 $(DFLAGS) -Ieuvm_dir -link-defaultlib-shared -of$@ -L-luvm-ldc-debug-shared -L-lesdl-ldc-shared \
		-L-lphobos2-ldc-shared -L-ldl $^ -L-lstdc++

# run_overide: apb_design
# 	./apb_design +UVM_TESTNAME=apb_design.random_test +UVM_VERBOSITY=$(VERBOSITY) +random_seed=$(SEED) +UVM_SET_TYPE_OVERRIDE=apb_design.avst_item,apb_design_ext.avst_ext_item # +UVM_OBJECTION_TRACE

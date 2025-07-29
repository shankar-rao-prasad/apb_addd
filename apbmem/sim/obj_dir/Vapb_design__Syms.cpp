// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vapb_design__pch.h"
#include "Vapb_design.h"
#include "Vapb_design___024root.h"

// FUNCTIONS
Vapb_design__Syms::~Vapb_design__Syms()
{
}

Vapb_design__Syms::Vapb_design__Syms(VerilatedContext* contextp, const char* namep, Vapb_design* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(23);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

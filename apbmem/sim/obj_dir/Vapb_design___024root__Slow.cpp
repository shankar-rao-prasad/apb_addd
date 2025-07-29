// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_design.h for the primary calling header

#include "Vapb_design__pch.h"
#include "Vapb_design__Syms.h"
#include "Vapb_design___024root.h"

void Vapb_design___024root___ctor_var_reset(Vapb_design___024root* vlSelf);

Vapb_design___024root::Vapb_design___024root(Vapb_design__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_design___024root___ctor_var_reset(this);
}

void Vapb_design___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vapb_design___024root::~Vapb_design___024root() {
}

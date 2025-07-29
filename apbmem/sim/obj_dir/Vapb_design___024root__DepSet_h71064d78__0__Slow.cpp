// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_design.h for the primary calling header

#include "Vapb_design__pch.h"
#include "Vapb_design___024root.h"

VL_ATTR_COLD void Vapb_design___024root___eval_static(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_static\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__PCLK__0 = vlSelfRef.PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__PRESETn__0 = vlSelfRef.PRESETn;
}

VL_ATTR_COLD void Vapb_design___024root___eval_initial__TOP(Vapb_design___024root* vlSelf);

VL_ATTR_COLD void Vapb_design___024root___eval_initial(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_initial\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vapb_design___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vapb_design___024root___eval_initial__TOP(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_initial__TOP\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PREADY = 1U;
    vlSelfRef.PSLVERR = 0U;
}

VL_ATTR_COLD void Vapb_design___024root___eval_final(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_final\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vapb_design___024root___eval_settle(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_settle\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_design___024root___dump_triggers__act(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___dump_triggers__act\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge PRESETn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_design___024root___dump_triggers__nba(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___dump_triggers__nba\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge PRESETn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_design___024root___ctor_var_reset(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___ctor_var_reset\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->PCLK = VL_RAND_RESET_I(1);
    vlSelf->PRESETn = VL_RAND_RESET_I(1);
    vlSelf->PADDR = VL_RAND_RESET_I(12);
    vlSelf->PSEL = VL_RAND_RESET_I(1);
    vlSelf->PENABLE = VL_RAND_RESET_I(1);
    vlSelf->PWRITE = VL_RAND_RESET_I(1);
    vlSelf->PWDATA = VL_RAND_RESET_I(32);
    vlSelf->PRDATA = VL_RAND_RESET_I(32);
    vlSelf->PREADY = VL_RAND_RESET_I(1);
    vlSelf->PSLVERR = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->apb_design__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__PCLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__PRESETn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

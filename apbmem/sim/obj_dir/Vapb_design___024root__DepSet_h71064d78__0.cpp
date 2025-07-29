// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_design.h for the primary calling header

#include "Vapb_design__pch.h"
#include "Vapb_design___024root.h"

void Vapb_design___024root___eval_act(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_act\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vapb_design___024root___nba_sequent__TOP__0(Vapb_design___024root* vlSelf);

void Vapb_design___024root___eval_nba(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_nba\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vapb_design___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vapb_design___024root___nba_sequent__TOP__0(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___nba_sequent__TOP__0\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__apb_design__DOT__mem__v0;
    __VdlyVal__apb_design__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__apb_design__DOT__mem__v0;
    __VdlyDim0__apb_design__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__apb_design__DOT__mem__v0;
    __VdlySet__apb_design__DOT__mem__v0 = 0;
    // Body
    __VdlySet__apb_design__DOT__mem__v0 = 0U;
    if (vlSelfRef.PRESETn) {
        if ((1U & (~ (((IData)(vlSelfRef.PSEL) & (IData)(vlSelfRef.PENABLE)) 
                      & (~ (IData)(vlSelfRef.PWRITE)))))) {
            if ((((IData)(vlSelfRef.PSEL) & (IData)(vlSelfRef.PENABLE)) 
                 & (IData)(vlSelfRef.PWRITE))) {
                __VdlyVal__apb_design__DOT__mem__v0 
                    = vlSelfRef.PWDATA;
                __VdlyDim0__apb_design__DOT__mem__v0 
                    = (0xfU & ((IData)(vlSelfRef.PADDR) 
                               >> 2U));
                __VdlySet__apb_design__DOT__mem__v0 = 1U;
            }
        }
        if ((((IData)(vlSelfRef.PSEL) & (IData)(vlSelfRef.PENABLE)) 
             & (~ (IData)(vlSelfRef.PWRITE)))) {
            vlSelfRef.PRDATA = vlSelfRef.apb_design__DOT__mem
                [(0xfU & ((IData)(vlSelfRef.PADDR) 
                          >> 2U))];
        }
    } else {
        vlSelfRef.PRDATA = 0U;
    }
    if (__VdlySet__apb_design__DOT__mem__v0) {
        vlSelfRef.apb_design__DOT__mem[__VdlyDim0__apb_design__DOT__mem__v0] 
            = __VdlyVal__apb_design__DOT__mem__v0;
    }
}

void Vapb_design___024root___eval_triggers__act(Vapb_design___024root* vlSelf);

bool Vapb_design___024root___eval_phase__act(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_phase__act\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vapb_design___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vapb_design___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vapb_design___024root___eval_phase__nba(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_phase__nba\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vapb_design___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_design___024root___dump_triggers__nba(Vapb_design___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_design___024root___dump_triggers__act(Vapb_design___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_design___024root___eval(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vapb_design___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/apb_design.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vapb_design___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/apb_design.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vapb_design___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vapb_design___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vapb_design___024root___eval_debug_assertions(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_debug_assertions\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.PCLK & 0xfeU)))) {
        Verilated::overWidthError("PCLK");}
    if (VL_UNLIKELY(((vlSelfRef.PRESETn & 0xfeU)))) {
        Verilated::overWidthError("PRESETn");}
    if (VL_UNLIKELY(((vlSelfRef.PADDR & 0xf000U)))) {
        Verilated::overWidthError("PADDR");}
    if (VL_UNLIKELY(((vlSelfRef.PSEL & 0xfeU)))) {
        Verilated::overWidthError("PSEL");}
    if (VL_UNLIKELY(((vlSelfRef.PENABLE & 0xfeU)))) {
        Verilated::overWidthError("PENABLE");}
    if (VL_UNLIKELY(((vlSelfRef.PWRITE & 0xfeU)))) {
        Verilated::overWidthError("PWRITE");}
}
#endif  // VL_DEBUG

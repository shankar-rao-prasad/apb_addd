// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_design.h for the primary calling header

#include "Vapb_design__pch.h"
#include "Vapb_design__Syms.h"
#include "Vapb_design___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_design___024root___dump_triggers__act(Vapb_design___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_design___024root___eval_triggers__act(Vapb_design___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root___eval_triggers__act\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.PCLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PCLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.PRESETn)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PRESETn__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__PCLK__0 = vlSelfRef.PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__PRESETn__0 = vlSelfRef.PRESETn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vapb_design___024root___dump_triggers__act(vlSelf);
    }
#endif
}

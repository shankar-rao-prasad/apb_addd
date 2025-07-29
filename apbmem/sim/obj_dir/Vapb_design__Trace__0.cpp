// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_design__Syms.h"


void Vapb_design___024root__trace_chg_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_design___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_chg_0\n"); );
    // Init
    Vapb_design___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_design___024root*>(voidSelf);
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_design___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_design___024root__trace_chg_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_chg_0_sub_0\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.apb_design__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.apb_design__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.apb_design__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.apb_design__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.apb_design__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.apb_design__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.apb_design__DOT__mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.apb_design__DOT__mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.apb_design__DOT__mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.apb_design__DOT__mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.apb_design__DOT__mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.apb_design__DOT__mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.apb_design__DOT__mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.apb_design__DOT__mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.apb_design__DOT__mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.apb_design__DOT__mem[15]),32);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.PCLK));
    bufp->chgBit(oldp+17,(vlSelfRef.PRESETn));
    bufp->chgSData(oldp+18,(vlSelfRef.PADDR),12);
    bufp->chgBit(oldp+19,(vlSelfRef.PSEL));
    bufp->chgBit(oldp+20,(vlSelfRef.PENABLE));
    bufp->chgBit(oldp+21,(vlSelfRef.PWRITE));
    bufp->chgIData(oldp+22,(vlSelfRef.PWDATA),32);
    bufp->chgIData(oldp+23,(vlSelfRef.PRDATA),32);
    bufp->chgBit(oldp+24,(vlSelfRef.PREADY));
    bufp->chgBit(oldp+25,(vlSelfRef.PSLVERR));
    bufp->chgCData(oldp+26,((0xfU & ((IData)(vlSelfRef.PADDR) 
                                     >> 2U))),4);
}

void Vapb_design___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_cleanup\n"); );
    // Init
    Vapb_design___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_design___024root*>(voidSelf);
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

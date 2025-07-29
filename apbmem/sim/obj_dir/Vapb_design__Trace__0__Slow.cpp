// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_design__Syms.h"


VL_ATTR_COLD void Vapb_design___024root__trace_init_sub__TOP__0(Vapb_design___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_init_sub__TOP__0\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+20,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("apb_design", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+20,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vapb_design___024root__trace_init_top(Vapb_design___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_init_top\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vapb_design___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vapb_design___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vapb_design___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_design___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_design___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vapb_design___024root__trace_register(Vapb_design___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_register\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vapb_design___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vapb_design___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vapb_design___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vapb_design___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vapb_design___024root__trace_const_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapb_design___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_const_0\n"); );
    // Init
    Vapb_design___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_design___024root*>(voidSelf);
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapb_design___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapb_design___024root__trace_const_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_const_0_sub_0\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+28,(0x20U),32);
    bufp->fullIData(oldp+29,(0xcU),32);
}

VL_ATTR_COLD void Vapb_design___024root__trace_full_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapb_design___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_full_0\n"); );
    // Init
    Vapb_design___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_design___024root*>(voidSelf);
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapb_design___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapb_design___024root__trace_full_0_sub_0(Vapb_design___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_design___024root__trace_full_0_sub_0\n"); );
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.apb_design__DOT__mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.apb_design__DOT__mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.apb_design__DOT__mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.apb_design__DOT__mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.apb_design__DOT__mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.apb_design__DOT__mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.apb_design__DOT__mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.apb_design__DOT__mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.apb_design__DOT__mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.apb_design__DOT__mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.apb_design__DOT__mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.apb_design__DOT__mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.apb_design__DOT__mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.apb_design__DOT__mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.apb_design__DOT__mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.apb_design__DOT__mem[15]),32);
    bufp->fullBit(oldp+17,(vlSelfRef.PCLK));
    bufp->fullBit(oldp+18,(vlSelfRef.PRESETn));
    bufp->fullSData(oldp+19,(vlSelfRef.PADDR),12);
    bufp->fullBit(oldp+20,(vlSelfRef.PSEL));
    bufp->fullBit(oldp+21,(vlSelfRef.PENABLE));
    bufp->fullBit(oldp+22,(vlSelfRef.PWRITE));
    bufp->fullIData(oldp+23,(vlSelfRef.PWDATA),32);
    bufp->fullIData(oldp+24,(vlSelfRef.PRDATA),32);
    bufp->fullBit(oldp+25,(vlSelfRef.PREADY));
    bufp->fullBit(oldp+26,(vlSelfRef.PSLVERR));
    bufp->fullCData(oldp+27,((0xfU & ((IData)(vlSelfRef.PADDR) 
                                      >> 2U))),4);
}

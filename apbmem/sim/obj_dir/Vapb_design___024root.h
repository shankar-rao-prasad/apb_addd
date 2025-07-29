// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_design.h for the primary calling header

#ifndef VERILATED_VAPB_DESIGN___024ROOT_H_
#define VERILATED_VAPB_DESIGN___024ROOT_H_  // guard

#include "verilated.h"


class Vapb_design__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_design___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(PCLK,0,0);
    VL_IN8(PRESETn,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_IN8(PWRITE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__PCLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PRESETn__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> apb_design__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_design__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_design___024root(Vapb_design__Syms* symsp, const char* v__name);
    ~Vapb_design___024root();
    VL_UNCOPYABLE(Vapb_design___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

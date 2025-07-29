// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vapb_design__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vapb_design::Vapb_design(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vapb_design__Syms(contextp(), _vcname__, this)}
    , PCLK{vlSymsp->TOP.PCLK}
    , PRESETn{vlSymsp->TOP.PRESETn}
    , PSEL{vlSymsp->TOP.PSEL}
    , PENABLE{vlSymsp->TOP.PENABLE}
    , PWRITE{vlSymsp->TOP.PWRITE}
    , PREADY{vlSymsp->TOP.PREADY}
    , PSLVERR{vlSymsp->TOP.PSLVERR}
    , PADDR{vlSymsp->TOP.PADDR}
    , PWDATA{vlSymsp->TOP.PWDATA}
    , PRDATA{vlSymsp->TOP.PRDATA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vapb_design::Vapb_design(const char* _vcname__)
    : Vapb_design(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vapb_design::~Vapb_design() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vapb_design___024root___eval_debug_assertions(Vapb_design___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_design___024root___eval_static(Vapb_design___024root* vlSelf);
void Vapb_design___024root___eval_initial(Vapb_design___024root* vlSelf);
void Vapb_design___024root___eval_settle(Vapb_design___024root* vlSelf);
void Vapb_design___024root___eval(Vapb_design___024root* vlSelf);

void Vapb_design::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_design::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vapb_design___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vapb_design___024root___eval_static(&(vlSymsp->TOP));
        Vapb_design___024root___eval_initial(&(vlSymsp->TOP));
        Vapb_design___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vapb_design___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vapb_design::eventsPending() { return false; }

uint64_t Vapb_design::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vapb_design::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vapb_design___024root___eval_final(Vapb_design___024root* vlSelf);

VL_ATTR_COLD void Vapb_design::final() {
    Vapb_design___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vapb_design::hierName() const { return vlSymsp->name(); }
const char* Vapb_design::modelName() const { return "Vapb_design"; }
unsigned Vapb_design::threads() const { return 1; }
void Vapb_design::prepareClone() const { contextp()->prepareClone(); }
void Vapb_design::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vapb_design::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vapb_design___024root__trace_decl_types(VerilatedVcd* tracep);

void Vapb_design___024root__trace_init_top(Vapb_design___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vapb_design___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_design___024root*>(voidSelf);
    Vapb_design__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vapb_design___024root__trace_decl_types(tracep);
    Vapb_design___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vapb_design___024root__trace_register(Vapb_design___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vapb_design::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vapb_design::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vapb_design___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

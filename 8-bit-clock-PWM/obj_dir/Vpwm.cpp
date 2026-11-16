// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpwm__pch.h"

//============================================================
// Constructors

Vpwm::Vpwm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpwm__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , dty{vlSymsp->TOP.dty}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpwm::Vpwm(const char* _vcname__)
    : Vpwm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpwm::~Vpwm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpwm___024root___eval_debug_assertions(Vpwm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vpwm___024root___eval_static(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_initial(Vpwm___024root* vlSelf);
VL_ATTR_COLD bool Vpwm___024root___eval_stl(Vpwm___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vpwm___024root___eval_sample(Vpwm___024root* vlSelf);
bool Vpwm___024root___eval_ico(Vpwm___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vpwm___024root___eval_act(Vpwm___024root* vlSelf);
bool Vpwm___024root___eval_inact(Vpwm___024root* vlSelf);
bool Vpwm___024root___eval_nba(Vpwm___024root* vlSelf);
bool Vpwm___024root___eval_obs(Vpwm___024root* vlSelf);
bool Vpwm___024root___eval_react(Vpwm___024root* vlSelf);
void Vpwm___024root___eval_postponed(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_final(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__stl(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__ico(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__act(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__nba(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__obs(Vpwm___024root* vlSelf);
VL_ATTR_COLD void Vpwm___024root___eval_dump_triggers__react(Vpwm___024root* vlSelf);

void Vpwm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpwm::eval_step\n"); );
    m_evalLoop.eval();
}

void Vpwm::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vpwm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vpwm::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpwm::evalStatic() {
    Vpwm___024root___eval_static(&(vlSymsp->TOP));
}

void Vpwm::evalInitial() {
    Vpwm___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vpwm::evalStl(bool firstIteration) {
    return Vpwm___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vpwm::evalSample() {
    Vpwm___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vpwm::evalIco(bool firstIteration) {
    return Vpwm___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vpwm::evalAct() {
    return Vpwm___024root___eval_act(&(vlSymsp->TOP));
}

bool Vpwm::evalInact() {
    return Vpwm___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vpwm::evalNba() {
    return Vpwm___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vpwm::evalObs() {
    return Vpwm___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vpwm::evalReact() {
    return Vpwm___024root___eval_react(&(vlSymsp->TOP));
}

void Vpwm::evalPostponed() {
    Vpwm___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vpwm::evalFinal() {
    Vpwm___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersStl() {
    Vpwm___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersIco() {
    Vpwm___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersAct() {
    Vpwm___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersNba() {
    Vpwm___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersObs() {
    Vpwm___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpwm::dumpTriggersReact() {
    Vpwm___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vpwm::eventsPending() { return false; }

uint64_t Vpwm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpwm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpwm::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpwm::hierName() const { return vlSymsp->name(); }
const char* Vpwm::modelName() const { return "Vpwm"; }
unsigned Vpwm::threads() const { return 1; }
void Vpwm::prepareClone() const { contextp()->prepareClone(); }
void Vpwm::atClone() const {
    contextp()->threadPoolpOnClone();
}

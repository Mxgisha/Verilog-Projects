// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmain__pch.h"

//============================================================
// Constructors

Vmain::Vmain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmain__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmain::Vmain(const char* _vcname__)
    : Vmain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmain::~Vmain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf);
VL_ATTR_COLD bool Vmain___024root___eval_stl(Vmain___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vmain___024root___eval_sample(Vmain___024root* vlSelf);
bool Vmain___024root___eval_ico(Vmain___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vmain___024root___eval_act(Vmain___024root* vlSelf);
bool Vmain___024root___eval_inact(Vmain___024root* vlSelf);
bool Vmain___024root___eval_nba(Vmain___024root* vlSelf);
bool Vmain___024root___eval_obs(Vmain___024root* vlSelf);
bool Vmain___024root___eval_react(Vmain___024root* vlSelf);
void Vmain___024root___eval_postponed(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__stl(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__ico(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__act(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__nba(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__obs(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___eval_dump_triggers__react(Vmain___024root* vlSelf);

void Vmain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain::eval_step\n"); );
    m_evalLoop.eval();
}

void Vmain::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vmain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vmain::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmain::evalStatic() {
    Vmain___024root___eval_static(&(vlSymsp->TOP));
}

void Vmain::evalInitial() {
    Vmain___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vmain::evalStl(bool firstIteration) {
    return Vmain___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vmain::evalSample() {
    Vmain___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vmain::evalIco(bool firstIteration) {
    return Vmain___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vmain::evalAct() {
    return Vmain___024root___eval_act(&(vlSymsp->TOP));
}

bool Vmain::evalInact() {
    return Vmain___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vmain::evalNba() {
    return Vmain___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vmain::evalObs() {
    return Vmain___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vmain::evalReact() {
    return Vmain___024root___eval_react(&(vlSymsp->TOP));
}

void Vmain::evalPostponed() {
    Vmain___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vmain::evalFinal() {
    Vmain___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersStl() {
    Vmain___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersIco() {
    Vmain___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersAct() {
    Vmain___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersNba() {
    Vmain___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersObs() {
    Vmain___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmain::dumpTriggersReact() {
    Vmain___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vmain::eventsPending() { return false; }

uint64_t Vmain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmain::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmain::hierName() const { return vlSymsp->name(); }
const char* Vmain::modelName() const { return "Vmain"; }
unsigned Vmain::threads() const { return 1; }
void Vmain::prepareClone() const { contextp()->prepareClone(); }
void Vmain::atClone() const {
    contextp()->threadPoolpOnClone();
}

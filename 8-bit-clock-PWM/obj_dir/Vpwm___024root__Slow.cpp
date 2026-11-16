// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm__pch.h"

void Vpwm___024root___ctor_var_reset(Vpwm___024root* vlSelf);

Vpwm___024root::Vpwm___024root(Vpwm__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vpwm___024root___ctor_var_reset(this);
}

void Vpwm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpwm___024root::~Vpwm___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

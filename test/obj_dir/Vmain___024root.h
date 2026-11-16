// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* namep);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

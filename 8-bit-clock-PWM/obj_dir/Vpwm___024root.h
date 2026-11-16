// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef VERILATED_VPWM___024ROOT_H_
#define VERILATED_VPWM___024ROOT_H_  // guard

#include "verilated.h"


class Vpwm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpwm___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(dty,7,0);
    VL_OUT8(out,0,0);
    CData/*7:0*/ pwm__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__dty__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpwm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpwm___024root(Vpwm__Syms* symsp, const char* namep);
    ~Vpwm___024root();
    VL_UNCOPYABLE(Vpwm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom.h for the primary calling header

#ifndef VERILATED_VROM___024ROOT_H_
#define VERILATED_VROM___024ROOT_H_  // guard

#include "verilated.h"

class Vrom__Syms;

class Vrom___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(addr1,7,0);
    VL_IN8(addr2,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> rom__DOT__rom_array;

    // INTERNAL VARIABLES
    Vrom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrom___024root(Vrom__Syms* symsp, const char* name);
    ~Vrom___024root();
    VL_UNCOPYABLE(Vrom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

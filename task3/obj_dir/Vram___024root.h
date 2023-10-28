// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram.h for the primary calling header

#ifndef VERILATED_VRAM___024ROOT_H_
#define VERILATED_VRAM___024ROOT_H_  // guard

#include "verilated.h"

class Vram__Syms;

class Vram___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(we1,0,0);
    VL_IN8(we2,0,0);
    VL_IN8(re1,0,0);
    VL_IN8(re2,0,0);
    VL_IN8(din1,7,0);
    VL_IN8(din2,7,0);
    VL_OUT8(dout2,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(addr1,8,0);
    VL_IN16(addr2,8,0);
    VlUnpacked<CData/*7:0*/, 512> ram__DOT__ram_array;

    // INTERNAL VARIABLES
    Vram__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vram___024root(Vram__Syms* symsp, const char* name);
    ~Vram___024root();
    VL_UNCOPYABLE(Vram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

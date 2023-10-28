// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "verilated.h"

#include "Vram___024root.h"

VL_ATTR_COLD void Vram___024root___eval_initial(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vram___024root___eval_settle(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vram___024root___final(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___final\n"); );
}

VL_ATTR_COLD void Vram___024root___ctor_var_reset(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->we1 = VL_RAND_RESET_I(1);
    vlSelf->we2 = VL_RAND_RESET_I(1);
    vlSelf->re1 = VL_RAND_RESET_I(1);
    vlSelf->re2 = VL_RAND_RESET_I(1);
    vlSelf->din1 = VL_RAND_RESET_I(8);
    vlSelf->din2 = VL_RAND_RESET_I(8);
    vlSelf->addr1 = VL_RAND_RESET_I(9);
    vlSelf->addr2 = VL_RAND_RESET_I(9);
    vlSelf->dout2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}

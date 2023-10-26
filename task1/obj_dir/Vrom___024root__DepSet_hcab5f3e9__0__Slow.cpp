// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom.h for the primary calling header

#include "verilated.h"

#include "Vrom___024root.h"

VL_ATTR_COLD void Vrom___024root___initial__TOP__0(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha00c3b92__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_ha00c3b92__0[0U] = 0x2e6d656dU;
    __Vtemp_ha00c3b92__0[1U] = 0x65726f6dU;
    __Vtemp_ha00c3b92__0[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_ha00c3b92__0)
                 ,  &(vlSelf->rom__DOT__rom_array), 0
                 , ~0ULL);
}

VL_ATTR_COLD void Vrom___024root___eval_initial(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vrom___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vrom___024root___eval_settle(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vrom___024root___final(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___final\n"); );
}

VL_ATTR_COLD void Vrom___024root___ctor_var_reset(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}

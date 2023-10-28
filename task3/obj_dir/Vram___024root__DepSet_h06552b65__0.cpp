// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "verilated.h"

#include "Vram___024root.h"

VL_INLINE_OPT void Vram___024root___sequent__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_array__v0;
    SData/*8:0*/ __Vdlyvdim0__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_array__v1;
    // Body
    __Vdlyvset__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__ram__DOT__ram_array__v1 = 0U;
    if (vlSelf->re2) {
        vlSelf->dout2 = vlSelf->ram__DOT__ram_array
            [vlSelf->addr2];
    }
    if (vlSelf->we1) {
        __Vdlyvval__ram__DOT__ram_array__v0 = vlSelf->din1;
        __Vdlyvset__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__ram__DOT__ram_array__v0 = vlSelf->addr1;
    }
    if (vlSelf->we2) {
        __Vdlyvval__ram__DOT__ram_array__v1 = vlSelf->din2;
        __Vdlyvset__ram__DOT__ram_array__v1 = 1U;
        __Vdlyvdim0__ram__DOT__ram_array__v1 = vlSelf->addr2;
    }
    if (__Vdlyvset__ram__DOT__ram_array__v0) {
        vlSelf->ram__DOT__ram_array[__Vdlyvdim0__ram__DOT__ram_array__v0] 
            = __Vdlyvval__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__ram__DOT__ram_array__v1) {
        vlSelf->ram__DOT__ram_array[__Vdlyvdim0__ram__DOT__ram_array__v1] 
            = __Vdlyvval__ram__DOT__ram_array__v1;
    }
}

void Vram___024root___eval(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vram___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vram___024root___eval_debug_assertions(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->we1 & 0xfeU))) {
        Verilated::overWidthError("we1");}
    if (VL_UNLIKELY((vlSelf->we2 & 0xfeU))) {
        Verilated::overWidthError("we2");}
    if (VL_UNLIKELY((vlSelf->re1 & 0xfeU))) {
        Verilated::overWidthError("re1");}
    if (VL_UNLIKELY((vlSelf->re2 & 0xfeU))) {
        Verilated::overWidthError("re2");}
    if (VL_UNLIKELY((vlSelf->addr1 & 0xfe00U))) {
        Verilated::overWidthError("addr1");}
    if (VL_UNLIKELY((vlSelf->addr2 & 0xfe00U))) {
        Verilated::overWidthError("addr2");}
}
#endif  // VL_DEBUG

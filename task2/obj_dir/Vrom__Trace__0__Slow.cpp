// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom__Syms.h"


VL_ATTR_COLD void Vrom___024root__trace_init_sub__TOP__0(Vrom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"addr1", false,-1, 7,0);
    tracep->declBus(c+3,"addr2", false,-1, 7,0);
    tracep->declBus(c+4,"dout1", false,-1, 7,0);
    tracep->declBus(c+5,"dout2", false,-1, 7,0);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+6,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"addr1", false,-1, 7,0);
    tracep->declBus(c+3,"addr2", false,-1, 7,0);
    tracep->declBus(c+4,"dout1", false,-1, 7,0);
    tracep->declBus(c+5,"dout2", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vrom___024root__trace_init_top(Vrom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root__trace_init_top\n"); );
    // Body
    Vrom___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrom___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrom___024root__trace_register(Vrom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrom___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrom___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrom___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrom___024root__trace_full_sub_0(Vrom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root__trace_full_top_0\n"); );
    // Init
    Vrom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom___024root*>(voidSelf);
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrom___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrom___024root__trace_full_sub_0(Vrom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullCData(oldp+2,(vlSelf->addr1),8);
    bufp->fullCData(oldp+3,(vlSelf->addr2),8);
    bufp->fullCData(oldp+4,(vlSelf->dout1),8);
    bufp->fullCData(oldp+5,(vlSelf->dout2),8);
    bufp->fullIData(oldp+6,(8U),32);
}

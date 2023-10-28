// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


VL_ATTR_COLD void Vram___024root__trace_init_sub__TOP__0(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"we1", false,-1);
    tracep->declBit(c+3,"we2", false,-1);
    tracep->declBit(c+4,"re1", false,-1);
    tracep->declBit(c+5,"re2", false,-1);
    tracep->declBus(c+6,"din1", false,-1, 7,0);
    tracep->declBus(c+7,"din2", false,-1, 7,0);
    tracep->declBus(c+8,"addr1", false,-1, 8,0);
    tracep->declBus(c+9,"addr2", false,-1, 8,0);
    tracep->declBus(c+10,"dout2", false,-1, 7,0);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+11,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"we1", false,-1);
    tracep->declBit(c+3,"we2", false,-1);
    tracep->declBit(c+4,"re1", false,-1);
    tracep->declBit(c+5,"re2", false,-1);
    tracep->declBus(c+6,"din1", false,-1, 7,0);
    tracep->declBus(c+7,"din2", false,-1, 7,0);
    tracep->declBus(c+8,"addr1", false,-1, 8,0);
    tracep->declBus(c+9,"addr2", false,-1, 8,0);
    tracep->declBus(c+10,"dout2", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vram___024root__trace_init_top(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_top\n"); );
    // Body
    Vram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vram___024root__trace_register(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_top_0\n"); );
    // Init
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->we1));
    bufp->fullBit(oldp+3,(vlSelf->we2));
    bufp->fullBit(oldp+4,(vlSelf->re1));
    bufp->fullBit(oldp+5,(vlSelf->re2));
    bufp->fullCData(oldp+6,(vlSelf->din1),8);
    bufp->fullCData(oldp+7,(vlSelf->din2),8);
    bufp->fullSData(oldp+8,(vlSelf->addr1),9);
    bufp->fullSData(oldp+9,(vlSelf->addr2),9);
    bufp->fullCData(oldp+10,(vlSelf->dout2),8);
    bufp->fullIData(oldp+11,(9U),32);
    bufp->fullIData(oldp+12,(8U),32);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_dpram64__S1000.h"

VL_INLINE_OPT void Vveerwolf_core_tb_dpram64__S1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__ram__0(Vveerwolf_core_tb_dpram64__S1000* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vveerwolf_core_tb_dpram64__S1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__ram__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__mem__v1;
    __VdlyVal__mem__v1 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v1;
    __VdlyDim0__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem__v1;
    __VdlySet__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__mem__v2;
    __VdlyVal__mem__v2 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v2;
    __VdlyDim0__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem__v2;
    __VdlySet__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__mem__v3;
    __VdlyVal__mem__v3 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v3;
    __VdlyDim0__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem__v3;
    __VdlySet__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__mem__v4;
    __VdlyVal__mem__v4 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v4;
    __VdlyDim0__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__mem__v4;
    __VdlySet__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__mem__v5;
    __VdlyVal__mem__v5 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v5;
    __VdlyDim0__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__mem__v5;
    __VdlySet__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__mem__v6;
    __VdlyVal__mem__v6 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v6;
    __VdlyDim0__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__mem__v6;
    __VdlySet__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__mem__v7;
    __VdlyVal__mem__v7 = 0;
    SData/*8:0*/ __VdlyDim0__mem__v7;
    __VdlyDim0__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__mem__v7;
    __VdlySet__mem__v7 = 0;
    // Body
    __VdlySet__mem__v0 = 0U;
    __VdlySet__mem__v1 = 0U;
    __VdlySet__mem__v2 = 0U;
    __VdlySet__mem__v3 = 0U;
    __VdlySet__mem__v4 = 0U;
    __VdlySet__mem__v5 = 0U;
    __VdlySet__mem__v6 = 0U;
    __VdlySet__mem__v7 = 0U;
    if ((((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1))
          ? (1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v0 = (0xffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat);
        __VdlyDim0__mem__v0 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v0 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1))
          ? (2U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v1 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                                       >> 8U));
        __VdlyDim0__mem__v1 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v1 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1))
          ? (4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v2 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                                       >> 0x10U));
        __VdlyDim0__mem__v2 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v2 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1))
          ? (8U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v3 = (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                              >> 0x18U);
        __VdlyDim0__mem__v3 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v3 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
          ? (1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v4 = (0xffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat);
        __VdlyDim0__mem__v4 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v4 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
          ? (2U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v5 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                                       >> 8U));
        __VdlyDim0__mem__v5 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v5 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
          ? (4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v6 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                                       >> 0x10U));
        __VdlyDim0__mem__v6 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v6 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__VdfgRegularize_hadc82f20_0_1) 
          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
          ? (8U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_sel))
          : 0U)) {
        __VdlyVal__mem__v7 = (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_dat 
                              >> 0x18U);
        __VdlyDim0__mem__v7 = (0x1ffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                         >> 1U));
        __VdlySet__mem__v7 = 1U;
    }
    vlSelfRef.__PVT__dout = vlSelfRef.mem[(0x1ffU & 
                                           ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr) 
                                            >> 1U))];
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0] = ((0xffffffffffffff00ULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v0]) 
                                              | (IData)((IData)(__VdlyVal__mem__v0)));
    }
    if (__VdlySet__mem__v1) {
        vlSelfRef.mem[__VdlyDim0__mem__v1] = ((0xffffffffffff00ffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v1]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v1)) 
                                                 << 8U));
    }
    if (__VdlySet__mem__v2) {
        vlSelfRef.mem[__VdlyDim0__mem__v2] = ((0xffffffffff00ffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v2]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v2)) 
                                                 << 0x10U));
    }
    if (__VdlySet__mem__v3) {
        vlSelfRef.mem[__VdlyDim0__mem__v3] = ((0xffffffff00ffffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v3]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v3)) 
                                                 << 0x18U));
    }
    if (__VdlySet__mem__v4) {
        vlSelfRef.mem[__VdlyDim0__mem__v4] = ((0xffffff00ffffffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v4]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v4)) 
                                                 << 0x20U));
    }
    if (__VdlySet__mem__v5) {
        vlSelfRef.mem[__VdlyDim0__mem__v5] = ((0xffff00ffffffffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v5]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v5)) 
                                                 << 0x28U));
    }
    if (__VdlySet__mem__v6) {
        vlSelfRef.mem[__VdlyDim0__mem__v6] = ((0xff00ffffffffffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v6]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v6)) 
                                                 << 0x30U));
    }
    if (__VdlySet__mem__v7) {
        vlSelfRef.mem[__VdlyDim0__mem__v7] = ((0xffffffffffffffULL 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v7]) 
                                              | ((QData)((IData)(__VdlyVal__mem__v7)) 
                                                 << 0x38U));
    }
}

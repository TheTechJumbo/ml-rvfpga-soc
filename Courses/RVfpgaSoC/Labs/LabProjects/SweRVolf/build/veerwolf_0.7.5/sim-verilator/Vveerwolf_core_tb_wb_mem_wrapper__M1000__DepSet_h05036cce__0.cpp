// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_wb_mem_wrapper__M1000.h"

VL_INLINE_OPT void Vveerwolf_core_tb_wb_mem_wrapper__M1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__0(Vveerwolf_core_tb_wb_mem_wrapper__M1000* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vveerwolf_core_tb_wb_mem_wrapper__M1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_wb_ack = ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                   >> 3U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_stb)) 
                                 & (~ (IData)(vlSelfRef.__PVT__o_wb_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        vlSelfRef.__PVT__o_wb_ack = 0U;
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_wb_mem_wrapper__M1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__1(Vveerwolf_core_tb_wb_mem_wrapper__M1000* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vveerwolf_core_tb_wb_mem_wrapper__M1000___nba_sequent__TOP__veerwolf_core_tb__veerwolf__bootrom__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hadc82f20_0_1 = (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                 >> 3U) 
                                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_stb) 
                                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_we)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__1(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden 
            = ((6U & ((IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                      << 1U)) | (1U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren 
            = ((6U & ((IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                      << 1U)) | (1U & (IData)((vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 1U))));
    } else {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = 0U;
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = 0U;
    }
    vlSelfRef.__PVT__dmi_reg_wr_en = (IData)((2U == 
                                              (6U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__3(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_jtag_tdo = (1U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__5(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dmi_reg_en = ((IData)(vlSelfRef.__PVT__dmi_reg_wr_en) 
                                   | (2U == (6U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden))));
}

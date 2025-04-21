// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_mux__pi4.h"

VL_ATTR_COLD void Vveerwolf_core_tb_axi_mux__pi4___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__ar_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                      | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data = ((0xbU 
                                                   >= 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
                                                   : 0U);
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x17U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x16U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x17U)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x16U)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__Vlvbound_ha7f417f7__0 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x15U));
        if ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))) {
            vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))) 
                    & (IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelfRef.__Vlvbound_ha7f417f7__0) 
                            << (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
        }
    }
}

VL_ATTR_COLD void Vveerwolf_core_tb_axi_mux__pi4___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__ar_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                      | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data = ((0xbU 
                                                   >= 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
                                                   : 0U);
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xfU));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xeU));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xfU)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xeU)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__Vlvbound_ha7f417f7__0 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                   >> 0xdU));
        if ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))) {
            vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))) 
                    & (IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelfRef.__Vlvbound_ha7f417f7__0) 
                            << (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
        }
    }
}

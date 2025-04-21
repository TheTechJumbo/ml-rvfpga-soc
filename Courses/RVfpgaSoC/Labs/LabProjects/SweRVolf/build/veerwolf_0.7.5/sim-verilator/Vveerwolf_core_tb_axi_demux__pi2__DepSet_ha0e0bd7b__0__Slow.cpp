// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"

VL_ATTR_COLD void Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__w_select = ((0x13U 
                                                  >= 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
                                                  ? 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
                                                  : 0U);
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_ATTR_COLD void Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__w_select = ((0x13U 
                                                  >= 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
                                                  ? 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
                                                  : 0U);
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_ATTR_COLD void Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__w_select = ((0x13U 
                                                  >= 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
                                                  ? 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
                                                  : 0U);
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
            = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

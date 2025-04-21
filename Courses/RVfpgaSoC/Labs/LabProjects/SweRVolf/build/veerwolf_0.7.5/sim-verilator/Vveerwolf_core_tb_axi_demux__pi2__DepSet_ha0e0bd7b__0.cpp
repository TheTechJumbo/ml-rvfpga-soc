// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                              >> 4U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U])));
}

extern const VlWide<21>/*671:0*/ Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0;

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                  >> 4U) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                        & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((0xfffffffcU & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar)));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
                   | (0xfffffffcU & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[1U]));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
                   | (0xcU & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U]));
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                     << 0x11U) | (0x1fffcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                              >> 0xfU))) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw)));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                          >> 0xfU)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                        << 0x11U) | 
                                       (0x1fffcU & 
                                        (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                         >> 0xfU))));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                          >> 0xfU)) | (0x3fcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                                 >> 0xfU)));
        }
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                         >> 4U)) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                     & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
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
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 5U));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1dU))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__3(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                              >> 0x19U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__7(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                  >> 0x1dU) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                     << 7U) | (0x7cU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                        >> 0x19U))) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar)));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                          >> 0x19U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                                      >> 0x19U))));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                          >> 0x19U)) | (0xcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                >> 0x19U)));
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                     << 0x18U) | (0xfffffcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                               >> 8U))) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw)));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                          >> 8U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                                      >> 8U))));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                          >> 8U)) | (0x3fcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                               >> 8U)));
        }
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                         >> 0x1dU)) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U)) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
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
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1eU));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x16U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                              >> 0x12U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__7(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                  >> 0x16U) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__20(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__20\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                     << 0xeU) | (0x3ffcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                            >> 0x12U))) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar)));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                          >> 0x12U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                         << 0xeU) | 
                                        (0x3ffcU & 
                                         (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                          >> 0x12U))));
            vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                          >> 0x12U)) | (0xcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                >> 0x12U)));
        }
        if (vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                     << 0x1fU) | (0x7ffffffcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                                 >> 1U))) 
                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw)));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                          >> 1U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                      << 0x1fU) | (0x7ffffffcU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                                      >> 1U))));
            vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          >> 1U)) | (0x3fcU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                               >> 1U)));
        }
    } else {
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                         >> 0x16U)) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U)) & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
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
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_ar_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_demux__DOT__slv_aw_valid = 
        ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
         | (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h13689e47__0;
    VL_ZERO_W(72, __Vlvbound_h13689e47__0);
    VlWide<3>/*73:0*/ __Vlvbound_h774da197__0;
    VL_ZERO_W(74, __Vlvbound_h774da197__0);
    CData/*0:0*/ __Vlvbound_h4dceefd3__0;
    __Vlvbound_h4dceefd3__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h1dc390ef__0;
    VL_ZERO_W(66, __Vlvbound_h1dc390ef__0);
    CData/*0:0*/ __Vlvbound_hdd3a1701__0;
    __Vlvbound_hdd3a1701__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelfRef.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelfRef.__PVT__mst_reqs_o[0U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0U];
    vlSelfRef.__PVT__mst_reqs_o[1U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[1U];
    vlSelfRef.__PVT__mst_reqs_o[2U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[2U];
    vlSelfRef.__PVT__mst_reqs_o[3U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[3U];
    vlSelfRef.__PVT__mst_reqs_o[4U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[4U];
    vlSelfRef.__PVT__mst_reqs_o[5U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[5U];
    vlSelfRef.__PVT__mst_reqs_o[6U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[6U];
    vlSelfRef.__PVT__mst_reqs_o[7U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[7U];
    vlSelfRef.__PVT__mst_reqs_o[8U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[8U];
    vlSelfRef.__PVT__mst_reqs_o[9U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[9U];
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = Vveerwolf_core_tb__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | (__Vlvbound_h13689e47__0[0U] 
                                          << 0x11U));
    vlSelfRef.__PVT__mst_reqs_o[5U] = ((0xffffU & (
                                                   __Vlvbound_h13689e47__0[0U] 
                                                   >> 0xfU)) 
                                       | ((0x10000U 
                                           & (__Vlvbound_h13689e47__0[0U] 
                                              >> 0xfU)) 
                                          | (__Vlvbound_h13689e47__0[1U] 
                                             << 0x11U)));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfe000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((0xffffU 
                                           & (__Vlvbound_h13689e47__0[1U] 
                                              >> 0xfU)) 
                                          | ((0x10000U 
                                              & (__Vlvbound_h13689e47__0[1U] 
                                                 >> 0xfU)) 
                                             | (__Vlvbound_h13689e47__0[2U] 
                                                << 0x11U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[4U] = (0x10000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 6U));
    vlSelfRef.__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h774da197__0[0U] 
                                                 >> 0x1aU)) 
                                       | ((0x20U & 
                                           (__Vlvbound_h774da197__0[0U] 
                                            >> 0x1aU)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 6U)));
    vlSelfRef.__PVT__mst_reqs_o[4U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[4U]) 
                                       | ((0x1fU & 
                                           (__Vlvbound_h774da197__0[1U] 
                                            >> 0x1aU)) 
                                          | ((0x20U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 0x1aU)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 6U))));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                            & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 5U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xffffffefU 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 4U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((1U & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 2U));
    vlSelfRef.__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 0x1eU)) 
                                       | ((2U & (__Vlvbound_h1dc390ef__0[0U] 
                                                 >> 0x1eU)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 2U)));
    vlSelfRef.__PVT__mst_reqs_o[2U] = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__mst_reqs_o[2U]) 
                                       | ((1U & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 0x1eU)) 
                                          | ((2U & 
                                              (__Vlvbound_h1dc390ef__0[1U] 
                                               >> 0x1eU)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0U] = (2U | vlSelfRef.__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies));
    vlSelfRef.__PVT__mst_reqs_o[0U] = ((0xfffffffeU 
                                        & vlSelfRef.__PVT__mst_reqs_o[0U]) 
                                       | (IData)(__Vlvbound_hdd3a1701__0));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0x1ffU & 
                                          vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (__Vlvbound_h13689e47__0[0U] 
                                            << 0xaU));
    vlSelfRef.__PVT__mst_reqs_o[0xcU] = ((0x1ffU & 
                                          (__Vlvbound_h13689e47__0[0U] 
                                           >> 0x16U)) 
                                         | ((0x200U 
                                             & (__Vlvbound_h13689e47__0[0U] 
                                                >> 0x16U)) 
                                            | (__Vlvbound_h13689e47__0[1U] 
                                               << 0xaU)));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((0x1ffU 
                                             & (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & (__Vlvbound_h13689e47__0[1U] 
                                                   >> 0x16U)) 
                                               | (__Vlvbound_h13689e47__0[2U] 
                                                  << 0xaU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xbU] = (0x200U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0x3fffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | (__Vlvbound_h774da197__0[0U] 
                                          << 0x1fU));
    vlSelfRef.__PVT__mst_reqs_o[9U] = ((0x3fffffffU 
                                        & (__Vlvbound_h774da197__0[0U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h774da197__0[1U] 
                                             << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                          & (__Vlvbound_h774da197__0[1U] 
                                             >> 1U)) 
                                         | ((0x40000000U 
                                             & (__Vlvbound_h774da197__0[1U] 
                                                >> 1U)) 
                                            | (__Vlvbound_h774da197__0[2U] 
                                               << 0x1fU)));
    vlSelfRef.__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xbU]) 
                                         | (0x3fffffffU 
                                            & (__Vlvbound_h774da197__0[2U] 
                                               >> 1U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                            & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                           | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                              << 0x1eU));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xdfffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((IData)(__Vlvbound_h4dceefd3__0) 
                                          << 0x1dU));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | (__Vlvbound_h1dc390ef__0[0U] 
                                          << 0x1bU));
    vlSelfRef.__PVT__mst_reqs_o[7U] = ((0x3ffffffU 
                                        & (__Vlvbound_h1dc390ef__0[0U] 
                                           >> 5U)) 
                                       | ((0x4000000U 
                                           & (__Vlvbound_h1dc390ef__0[0U] 
                                              >> 5U)) 
                                          | (__Vlvbound_h1dc390ef__0[1U] 
                                             << 0x1bU)));
    vlSelfRef.__PVT__mst_reqs_o[8U] = ((0xe0000000U 
                                        & vlSelfRef.__PVT__mst_reqs_o[8U]) 
                                       | ((0x3ffffffU 
                                           & (__Vlvbound_h1dc390ef__0[1U] 
                                              >> 5U)) 
                                          | ((0x4000000U 
                                              & (__Vlvbound_h1dc390ef__0[1U] 
                                                 >> 5U)) 
                                             | (__Vlvbound_h1dc390ef__0[2U] 
                                                << 0x1bU))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[6U] = (0x4000000U 
                                           | vlSelfRef.__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelfRef.__PVT__mst_reqs_o[6U] = ((0xfdffffffU 
                                        & vlSelfRef.__PVT__mst_reqs_o[6U]) 
                                       | ((IData)(__Vlvbound_hdd3a1701__0) 
                                          << 0x19U));
    __Vlvbound_h13689e47__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h13689e47__0[2U] = (0xffU & (vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                            >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((3U & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (__Vlvbound_h13689e47__0[0U] 
                                             << 3U));
    vlSelfRef.__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h13689e47__0[0U] 
                                                 >> 0x1dU)) 
                                          | ((4U & 
                                              (__Vlvbound_h13689e47__0[0U] 
                                               >> 0x1dU)) 
                                             | (__Vlvbound_h13689e47__0[1U] 
                                                << 3U)));
    vlSelfRef.__PVT__mst_reqs_o[0x14U] = (0x7ffU & 
                                          ((3U & (__Vlvbound_h13689e47__0[1U] 
                                                  >> 0x1dU)) 
                                           | ((4U & 
                                               (__Vlvbound_h13689e47__0[1U] 
                                                >> 0x1dU)) 
                                              | (__Vlvbound_h13689e47__0[2U] 
                                                 << 3U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_aw_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0x12U] = (4U | 
                                              vlSelfRef.__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h774da197__0[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h774da197__0[2U] = (0x3ffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0x7fffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | (__Vlvbound_h774da197__0[0U] 
                                            << 0x18U));
    vlSelfRef.__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[0U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[0U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[1U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                           & (__Vlvbound_h774da197__0[1U] 
                                              >> 8U)) 
                                          | ((0x800000U 
                                              & (__Vlvbound_h774da197__0[1U] 
                                                 >> 8U)) 
                                             | (__Vlvbound_h774da197__0[2U] 
                                                << 0x18U)));
    vlSelfRef.__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                           & vlSelfRef.__PVT__mst_reqs_o[0x12U]) 
                                          | (0x7fffffU 
                                             & (__Vlvbound_h774da197__0[2U] 
                                                >> 8U)));
    if (((0U != (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelfRef.__PVT__gen_demux__DOT__w_select)))) {
        vlSelfRef.__Vlvbound_h4dca579d__1 = (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x17U));
        vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                              & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                             | ((IData)(vlSelfRef.__Vlvbound_h4dca579d__1) 
                                                << 0x17U));
    }
    __Vlvbound_h4dceefd3__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((IData)(__Vlvbound_h4dceefd3__0) 
                                            << 0x16U));
    __Vlvbound_h1dc390ef__0[0U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[1U] = ((vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                    << 0x1eU) | (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[1U] 
                                                 >> 2U));
    __Vlvbound_h1dc390ef__0[2U] = (3U & (vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[2U] 
                                         >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0x7ffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | (__Vlvbound_h1dc390ef__0[0U] 
                                            << 0x14U));
    vlSelfRef.__PVT__mst_reqs_o[0xeU] = ((0x7ffffU 
                                          & (__Vlvbound_h1dc390ef__0[0U] 
                                             >> 0xcU)) 
                                         | ((0x80000U 
                                             & (__Vlvbound_h1dc390ef__0[0U] 
                                                >> 0xcU)) 
                                            | (__Vlvbound_h1dc390ef__0[1U] 
                                               << 0x14U)));
    vlSelfRef.__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xfU]) 
                                         | ((0x7ffffU 
                                             & (__Vlvbound_h1dc390ef__0[1U] 
                                                >> 0xcU)) 
                                            | ((0x80000U 
                                                & (__Vlvbound_h1dc390ef__0[1U] 
                                                   >> 0xcU)) 
                                               | (__Vlvbound_h1dc390ef__0[2U] 
                                                  << 0x14U))));
    if (((IData)(vlSelfRef.__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelfRef.__PVT__gen_demux__DOT__slv_ar_chan_select[0U])))) {
        vlSelfRef.__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                             | vlSelfRef.__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_hdd3a1701__0 = (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelfRef.__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                          & vlSelfRef.__PVT__mst_reqs_o[0xdU]) 
                                         | ((IData)(__Vlvbound_hdd3a1701__0) 
                                            << 0x12U));
}

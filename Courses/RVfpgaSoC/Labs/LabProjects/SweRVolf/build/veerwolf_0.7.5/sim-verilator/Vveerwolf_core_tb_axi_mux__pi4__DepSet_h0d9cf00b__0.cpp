// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_mux__pi4.h"

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__2(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))));
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                       >> 0x15U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                            >> 5U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 
            ((((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                 >> 0x15U)) & (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                               >> 1U));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid 
            = ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelfRef.__PVT__mst_req_o[0U] = ((0xfffffffcU 
                                       & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                           | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                          << 1U) | 
                                         ((2U >= (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 8U))) 
                                          && (1U & 
                                              (((4U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                    >> 0x10U)) 
                                                | ((2U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                               >> (3U 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                      >> 8U)))))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((3U & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         << 2U));
    vlSelfRef.__PVT__mst_req_o[1U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0x1eU) | 
                                      (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       << 2U));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffffc0U 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                            : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                          >> 0x1eU) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                            << 2U)));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffff3fU 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (0xffffffc0U 
                                         & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid) 
                                             << 7U) 
                                            | (((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 0x12U))) 
                                                && (1U 
                                                    & (((4U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                            >> 0x14U)) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                               >> 0x1cU)) 
                                                           | (1U 
                                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                 >> 4U)))) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                           >> 0x12U))))) 
                                               << 6U))));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffU & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                         << 8U));
    vlSelfRef.__PVT__mst_req_o[3U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                       >> 0x18U) | 
                                      (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       << 8U));
    vlSelfRef.__PVT__mst_req_o[4U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       >> 0x18U) | 
                                      ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                          : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                        << 0x13U) | 
                                       ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                          | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                         << 0x12U) 
                                        | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                           << 8U))));
    vlSelfRef.__PVT__mst_req_o[5U] = (((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                 >> 0xdU)) 
                                       | ((0xffU & 
                                           (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                            >> 0xeU)) 
                                          | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                             >> 0x18U))) 
                                      | ((0x7ff00U 
                                          & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                             >> 0xdU)) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                            << 0x13U)));
    vlSelfRef.__PVT__mst_req_o[6U] = (0x1fffffffU & 
                                      ((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 >> 0xdU)) 
                                       | ((0x7ff00U 
                                           & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                              >> 0xdU)) 
                                          | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             << 0x13U))));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__slv_resps_o[0U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
    vlSelfRef.__PVT__slv_resps_o[1U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xffffff00U 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (0xffU & 
                                           vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xffff00ffU 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (0xffffff00U 
                                           & ((0xfe00U 
                                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  >> 2U)) 
                                              | (0x100U 
                                                 & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 2U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                            >> 8U))) 
                                                       << 8U))))));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xfff0ffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (0xffff0000U 
                                           & (((0x80000U 
                                                & (((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 0x13U) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 0x12U))) 
                                               | (0x40000U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        << 0x11U)))) 
                                              | ((0x20000U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                     << 0x11U)) 
                                                 | (0x10000U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        >> 4U) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 0x12U))) 
                                                          << 0x10U)))))));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xfffffU & 
                                         vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                           << 0x14U));
    vlSelfRef.__PVT__slv_resps_o[3U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                         >> 0xcU) | 
                                        (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                         << 0x14U));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0xf0000000U 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                            >> 0xcU) 
                                           | (0xff00000U 
                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 << 0x14U))));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0xefffffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | (0x10000000U 
                                           & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                               << 0x12U) 
                                              & (((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                      >> 8U))) 
                                                 << 0x1bU))));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0x1fffffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | (0xe0000000U 
                                           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                              << 0x12U)));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xfffffff0U 
                                         & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | (0xfU & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0xeU)));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xffffff0fU 
                                         & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | (0xfffffff0U 
                                           & (((0xffffff80U 
                                                & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    << 6U) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                      << 7U))) 
                                               | (0xffffffc0U 
                                                  & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                        << 6U)))) 
                                              | ((0x20U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                     << 4U)) 
                                                 | (0x10U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        >> 0x10U) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 0x12U))) 
                                                          << 3U)))))));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xffU & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                           << 8U));
    vlSelfRef.__PVT__slv_resps_o[6U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                         >> 0x18U) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                           << 8U));
    vlSelfRef.__PVT__slv_resps_o[7U] = ((0xfff0000U 
                                         & vlSelfRef.__PVT__slv_resps_o[7U]) 
                                        | (0xfffffffU 
                                           & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                               >> 0x18U) 
                                              | (0xff00U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    << 8U)))));
    vlSelfRef.__PVT__slv_resps_o[7U] = ((0xffffU & 
                                         vlSelfRef.__PVT__slv_resps_o[7U]) 
                                        | (0xfff0000U 
                                           & ((((0x8000000U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    << 0x19U)) 
                                                | (0x4000000U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 0x18U))) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                      << 0x17U)) 
                                                  | (0x1000000U 
                                                     & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         << 4U) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (3U 
                                                             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                                >> 0x12U))) 
                                                           << 0x16U))))) 
                                              | ((0xfe0000U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     << 6U)) 
                                                 | (0x10000U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        << 6U) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 8U))) 
                                                          << 0xeU)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_mux__DOT__load_aw_lock)
                ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__ar_ready)) 
                     & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__aw_ready)) 
                     & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__ar_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
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
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x17U)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x17U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x16U)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x16U));
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

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))));
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                       >> 0x15U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                            >> 5U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid = 0U;
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid 
            = ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
        vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 
            ((((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                 >> 0x15U)) & (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                               >> 1U));
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((0xfffffffcU 
                                       & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                           | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                          << 1U) | 
                                         ((2U >= (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 8U))) 
                                          && (1U & 
                                              (((4U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                    >> 0x10U)) 
                                                | ((2U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                               >> (3U 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                      >> 8U)))))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((3U & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         << 2U));
    vlSelfRef.__PVT__mst_req_o[1U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0x1eU) | 
                                      (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       << 2U));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffffc0U 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                            : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                          >> 0x1eU) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                            << 2U)));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffff3fU 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (0xffffffc0U 
                                         & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid) 
                                             << 7U) 
                                            | (((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 0x12U))) 
                                                && (1U 
                                                    & (((4U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                            >> 0x14U)) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                               >> 0x1cU)) 
                                                           | (1U 
                                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                 >> 4U)))) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                           >> 0x12U))))) 
                                               << 6U))));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffU & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                         << 8U));
    vlSelfRef.__PVT__mst_req_o[3U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                       >> 0x18U) | 
                                      (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       << 8U));
    vlSelfRef.__PVT__mst_req_o[4U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       >> 0x18U) | 
                                      ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                          : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                        << 0x13U) | 
                                       ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                          | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                         << 0x12U) 
                                        | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                           << 8U))));
    vlSelfRef.__PVT__mst_req_o[5U] = (((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                 >> 0xdU)) 
                                       | ((0xffU & 
                                           (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                            >> 0xeU)) 
                                          | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                             >> 0x18U))) 
                                      | ((0x7ff00U 
                                          & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                             >> 0xdU)) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                            << 0x13U)));
    vlSelfRef.__PVT__mst_req_o[6U] = (0x1fffffffU & 
                                      ((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 >> 0xdU)) 
                                       | ((0x7ff00U 
                                           & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                              >> 0xdU)) 
                                          | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             << 0x13U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__2(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))));
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                       >> 0x15U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                            >> 5U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 
            ((((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                 >> 0xdU)) & (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                              >> 1U));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid 
            = ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelfRef.__PVT__mst_req_o[0U] = ((0xfffffffcU 
                                       & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                           | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                          << 1U) | 
                                         ((2U >= (3U 
                                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                          && (1U & 
                                              (((4U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                    >> 0x10U)) 
                                                | ((2U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                               >> (3U 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((3U & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         << 2U));
    vlSelfRef.__PVT__mst_req_o[1U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0x1eU) | 
                                      (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       << 2U));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffffc0U 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                            : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                          >> 0x1eU) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                            << 2U)));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffff3fU 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (0xffffffc0U 
                                         & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid) 
                                             << 7U) 
                                            | (((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                     >> 0xaU))) 
                                                && (1U 
                                                    & (((4U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                            >> 0x14U)) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                               >> 0x1cU)) 
                                                           | (1U 
                                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                 >> 4U)))) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                           >> 0xaU))))) 
                                               << 6U))));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffU & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                         << 8U));
    vlSelfRef.__PVT__mst_req_o[3U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                       >> 0x18U) | 
                                      (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       << 8U));
    vlSelfRef.__PVT__mst_req_o[4U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       >> 0x18U) | 
                                      ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                          : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                        << 0x13U) | 
                                       ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                          | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                         << 0x12U) 
                                        | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                           << 8U))));
    vlSelfRef.__PVT__mst_req_o[5U] = (((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                 >> 0xdU)) 
                                       | ((0xffU & 
                                           (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                            >> 0xeU)) 
                                          | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                             >> 0x18U))) 
                                      | ((0x7ff00U 
                                          & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                             >> 0xdU)) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                            << 0x13U)));
    vlSelfRef.__PVT__mst_req_o[6U] = (0x1fffffffU & 
                                      ((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 >> 0xdU)) 
                                       | ((0x7ff00U 
                                           & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                              >> 0xdU)) 
                                          | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             << 0x13U))));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__9(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__slv_resps_o[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x18U));
    vlSelfRef.__PVT__slv_resps_o[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                   >> 0x18U));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xffffff00U 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                           >> 0x18U));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xffff00ffU 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (0xffffff00U 
                                           & ((0xfe00U 
                                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                  << 6U)) 
                                              | (0x100U 
                                                 & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                     << 6U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                       << 8U))))));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xfff0ffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | (0xffff0000U 
                                           & (((0x80000U 
                                                & (((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 0x13U) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 0x12U))) 
                                               | (0x40000U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        << 0x11U)))) 
                                              | ((0x20000U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                     << 0x11U)) 
                                                 | (0x10000U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        << 4U) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                               >> 0xaU))) 
                                                          << 0x10U)))))));
    vlSelfRef.__PVT__slv_resps_o[2U] = ((0xfffffU & 
                                         vlSelfRef.__PVT__slv_resps_o[2U]) 
                                        | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                            << 0x1cU) 
                                           | (0xff00000U 
                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 4U))));
    vlSelfRef.__PVT__slv_resps_o[3U] = ((0xfffffU & 
                                         (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                          >> 4U)) | 
                                        ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                          << 0x1cU) 
                                         | (0xff00000U 
                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               >> 4U))));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0xf0000000U 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | ((0xfffffU 
                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                               >> 4U)) 
                                           | (0xff00000U 
                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                 >> 4U))));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0xefffffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | (0x10000000U 
                                           & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                               << 0x1aU) 
                                              & (((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                 << 0x1bU))));
    vlSelfRef.__PVT__slv_resps_o[4U] = ((0x1fffffffU 
                                         & vlSelfRef.__PVT__slv_resps_o[4U]) 
                                        | (0xe0000000U 
                                           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                              << 0x1aU)));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xfffffff0U 
                                         & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | (0xfU & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                   >> 6U)));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xffffff0fU 
                                         & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | (0xfffffff0U 
                                           & (((0xffffff80U 
                                                & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    << 6U) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                      << 7U))) 
                                               | (0xffffffc0U 
                                                  & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                        << 6U)))) 
                                              | ((0x20U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                     << 4U)) 
                                                 | (0x10U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        >> 8U) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                               >> 0xaU))) 
                                                          << 3U)))))));
    vlSelfRef.__PVT__slv_resps_o[5U] = ((0xffU & vlSelfRef.__PVT__slv_resps_o[5U]) 
                                        | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                            << 0x10U) 
                                           | (0xff00U 
                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x10U))));
    vlSelfRef.__PVT__slv_resps_o[6U] = ((0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                  >> 0x10U)) 
                                        | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                            << 0x10U) 
                                           | (0xff00U 
                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 >> 0x10U))));
    vlSelfRef.__PVT__slv_resps_o[7U] = ((0xfff0000U 
                                         & vlSelfRef.__PVT__slv_resps_o[7U]) 
                                        | (0xfffffffU 
                                           & ((0xffU 
                                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                  >> 0x10U)) 
                                              | (0xff00U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                    >> 0x10U)))));
    vlSelfRef.__PVT__slv_resps_o[7U] = ((0xffffU & 
                                         vlSelfRef.__PVT__slv_resps_o[7U]) 
                                        | (0xfff0000U 
                                           & ((((0x8000000U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    << 0x19U)) 
                                                | (0x4000000U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      << 0x18U))) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_readies) 
                                                      << 0x17U)) 
                                                  | (0x1000000U 
                                                     & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                         << 0xcU) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (3U 
                                                             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                                >> 0xaU))) 
                                                           << 0x16U))))) 
                                              | ((0xfe0000U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                     << 0xeU)) 
                                                 | (0x10000U 
                                                    & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))) 
                                                       << 0xeU))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelfRef.__PVT__gen_mux__DOT__load_aw_lock)
                ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_d)
                : (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
        if (vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__ar_ready)) 
                     & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__aw_ready)) 
                     & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__PVT__gen_mux__DOT__ar_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                | (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
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
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xfU)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xfU));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xeU)) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xeU));
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

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__5(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___nba_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))));
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))))));
    } else {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids = (
                                                   (4U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                       >> 0x15U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                            >> 5U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (vlSelfRef.__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid = 0U;
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid 
            = ((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data))));
        vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop = 
            ((((2U >= (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)) 
               && (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__slv_w_valids) 
                         >> (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_data)))) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                 >> 0xdU)) & (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                              >> 1U));
    }
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((0xfffffffcU 
                                       & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                           | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                          << 1U) | 
                                         ((2U >= (3U 
                                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                          && (1U & 
                                              (((4U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                    >> 0x10U)) 
                                                | ((2U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                               >> (3U 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    vlSelfRef.__PVT__mst_req_o[0U] = ((3U & vlSelfRef.__PVT__mst_req_o[0U]) 
                                      | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         << 2U));
    vlSelfRef.__PVT__mst_req_o[1U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0x1eU) | 
                                      (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       << 2U));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffffc0U 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                            : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                          >> 0x1eU) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                            << 2U)));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffffff3fU 
                                       & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (0xffffffc0U 
                                         & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_w_valid) 
                                             << 7U) 
                                            | (((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                     >> 0xaU))) 
                                                && (1U 
                                                    & (((4U 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                            >> 0x14U)) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                               >> 0x1cU)) 
                                                           | (1U 
                                                              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                 >> 4U)))) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                           >> 0xaU))))) 
                                               << 6U))));
    vlSelfRef.__PVT__mst_req_o[2U] = ((0xffU & vlSelfRef.__PVT__mst_req_o[2U]) 
                                      | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                         << 8U));
    vlSelfRef.__PVT__mst_req_o[3U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                       >> 0x18U) | 
                                      (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       << 8U));
    vlSelfRef.__PVT__mst_req_o[4U] = ((vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                       >> 0x18U) | 
                                      ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                          : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                        << 0x13U) | 
                                       ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                          | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                         << 0x12U) 
                                        | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                           << 8U))));
    vlSelfRef.__PVT__mst_req_o[5U] = (((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                 >> 0xdU)) 
                                       | ((0xffU & 
                                           (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                             | (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                            >> 0xeU)) 
                                          | (vlSelfRef.__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                             >> 0x18U))) 
                                      | ((0x7ff00U 
                                          & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                             >> 0xdU)) 
                                         | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                              : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                            << 0x13U)));
    vlSelfRef.__PVT__mst_req_o[6U] = (0x1fffffffU & 
                                      ((0xffU & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 >> 0xdU)) 
                                       | ((0x7ff00U 
                                           & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                              >> 0xdU)) 
                                          | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             << 0x13U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_hcb0e3ff4__0) 
              << 2U));
}

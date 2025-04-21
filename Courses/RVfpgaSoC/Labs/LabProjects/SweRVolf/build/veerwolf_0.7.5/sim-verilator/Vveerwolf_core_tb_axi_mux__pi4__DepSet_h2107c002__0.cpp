// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_axi_mux__pi4.h"

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vveerwolf_core_tb__ConstPool__TABLE_h8fb1f9b0_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vveerwolf_core_tb__ConstPool__TABLE_hd4bb79a7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vveerwolf_core_tb__ConstPool__TABLE_h430a55af_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vveerwolf_core_tb__ConstPool__TABLE_h32a597f4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vveerwolf_core_tb__ConstPool__TABLE_h7cbc69ad_0;

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx1 = (((8U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                            << 3U)) | ((6U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U)) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q)));
    vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_d 
        = Vveerwolf_core_tb__ConstPool__TABLE_h8fb1f9b0_0
        [__Vtableidx1];
    vlSelfRef.__PVT__gen_mux__DOT__load_aw_lock = Vveerwolf_core_tb__ConstPool__TABLE_hd4bb79a7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push = Vveerwolf_core_tb__ConstPool__TABLE_h430a55af_0
        [__Vtableidx1];
    vlSelfRef.__PVT__gen_mux__DOT__mst_aw_valid = Vveerwolf_core_tb__ConstPool__TABLE_h32a597f4_0
        [__Vtableidx1];
    vlSelfRef.__PVT__gen_mux__DOT__aw_ready = Vveerwolf_core_tb__ConstPool__TABLE_h7cbc69ad_0
        [__Vtableidx1];
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelfRef.__PVT__gen_mux__DOT__ar_ready)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelfRef.__PVT__gen_mux__DOT__aw_ready)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x18U) | (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 8U)) : ((
                                                   vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                     >> 4U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                            << 0x1cU) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                                         >> 4U)) : 
                       vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
                      << 4U) | (0xfU & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 8U) : 
                                        ((vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                          << 0x1cU) 
                                         | (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 4U)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x18U) | (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 8U)) : ((vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0x1cU) 
                                        | (vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 4U)));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                  << 0x1cU) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                               >> 4U)) : vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
            >> 0x1cU) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                               << 0x1cU) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                                            >> 4U))
                           : vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
                         << 4U));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffff00U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U]) 
           | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                     << 0x1cU) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                                  >> 4U)) : vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
               >> 0x1cU) | (0xf0U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                       ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
                                           << 0x1cU) 
                                          | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                                             >> 4U))
                                       : vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U]) 
                                     << 4U))));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffU & vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U]) 
           | (0xffffff00U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U]));
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffU & vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]) 
           | (0xf00U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0xcU) | (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                      >> 0x14U)) : 
                     ((vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x16U) | (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 0xaU)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                            << 0x16U) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                                         >> 0xaU)) : 
                       vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
                      << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                >> 0x14U)
                                             : ((vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                 << 0x16U) 
                                                | (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   >> 0xaU)))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0xcU) | (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                            >> 0x14U)) : ((vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x16U) 
                                          | (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 0xaU)));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                  << 0x16U) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                               >> 0xaU)) : vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                               << 0x16U) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                                            >> 0xaU))
                           : vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
                         << 0xaU));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfff00000U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U]) 
           | ((((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                     << 0x16U) | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                                  >> 0xaU)) : vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
               >> 0x16U) | (0xffc00U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? ((vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
                                              << 0x16U) 
                                             | (vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                                                >> 0xaU))
                                          : vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U]) 
                                        << 0xaU))));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xfffffU & vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U]) 
           | (0xfff00000U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U]));
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xfffffU & vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]) 
           | (0x3ff00000U & vlSelfRef.__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.gen_mux__DOT__i_w_fifo__DOT____Vlvbound_h916100ef__0 
            = (3U & (vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                     >> 8U));
        if ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) {
            vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                    & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
                   | (0xfffU & ((IData)(vlSelfRef.gen_mux__DOT__i_w_fifo__DOT____Vlvbound_h916100ef__0) 
                                << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        }
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1(Vveerwolf_core_tb_axi_mux__pi4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_mux__pi4___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx2 = (((8U & ((IData)(vlSelfRef.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                            << 3U)) | ((6U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U)) | (((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_q)));
    vlSelfRef.__PVT__gen_mux__DOT__lock_aw_valid_d 
        = Vveerwolf_core_tb__ConstPool__TABLE_h8fb1f9b0_0
        [__Vtableidx2];
    vlSelfRef.__PVT__gen_mux__DOT__load_aw_lock = Vveerwolf_core_tb__ConstPool__TABLE_hd4bb79a7_0
        [__Vtableidx2];
    vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push = Vveerwolf_core_tb__ConstPool__TABLE_h430a55af_0
        [__Vtableidx2];
    vlSelfRef.__PVT__gen_mux__DOT__mst_aw_valid = Vveerwolf_core_tb__ConstPool__TABLE_h32a597f4_0
        [__Vtableidx2];
    vlSelfRef.__PVT__gen_mux__DOT__aw_ready = Vveerwolf_core_tb__ConstPool__TABLE_h7cbc69ad_0
        [__Vtableidx2];
    vlSelfRef.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelfRef.__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelfRef.__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
}

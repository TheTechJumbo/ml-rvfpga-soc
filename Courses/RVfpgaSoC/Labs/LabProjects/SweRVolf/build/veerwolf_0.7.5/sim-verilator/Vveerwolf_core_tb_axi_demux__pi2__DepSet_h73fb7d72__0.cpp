// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__mst_b_readies 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                 << 1U))) | (1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      >> 1U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__mst_r_readies 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                 << 1U))) | (1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                   & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      >> 1U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fc000U & vlSelfRef.__Vcellinp__gen_demux__DOT__i_b_mux__data_i) 
           | ((0x3f80U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                            ? (vlSelfRef.__Vcellinp__gen_demux__DOT__i_b_mux__data_i 
                               >> 7U) : vlSelfRef.__Vcellinp__gen_demux__DOT__i_b_mux__data_i) 
                          << 7U)) | (0x7fU & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                               ? (vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                  >> 0xeU)
                                               : (vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                  >> 7U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x10U) | (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x18U) | (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 8U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                            << 0x18U) | (vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
                                         >> 8U)) : 
                       vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U]) 
                      << 8U) | (0xffU & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0x10U)
                                          : ((vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x18U) 
                                             | (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 8U)))));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x10U) | (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0x10U)) : ((vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                              >> 8U)));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                  << 0x18U) | (vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
                               >> 8U)) : vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U]) 
            >> 0x18U) | (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                               << 0x18U) | (vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                                            >> 8U))
                           : vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U]) 
                         << 8U));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffff0000U & vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U]) 
           | ((((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                     << 0x18U) | (vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                                  >> 8U)) : vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U]) 
               >> 0x18U) | (0xff00U & (((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U] 
                                             << 0x18U) 
                                            | (vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                                               >> 8U))
                                         : vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U]) 
                                       << 8U))));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffU & vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U]) 
           | (0xffff0000U & vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U]));
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffffU & vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U]) 
           | (0xff0000U & vlSelfRef.__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U]));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__slv_resp_o[0U] = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U];
    vlSelfRef.__PVT__slv_resp_o[1U] = vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U];
    vlSelfRef.__PVT__slv_resp_o[2U] = ((0xfff00U & 
                                        vlSelfRef.__PVT__slv_resp_o[2U]) 
                                       | (0xffU & vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U]));
    vlSelfRef.__PVT__slv_resp_o[2U] = ((0xffU & vlSelfRef.__PVT__slv_resp_o[2U]) 
                                       | (0xfff00U 
                                          & (((((IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                                << 0x13U) 
                                               | ((IData)(vlSelfRef.__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                                  << 0x12U)) 
                                              | (((IData)(vlSelfRef.__PVT__gen_demux__DOT__slv_w_ready) 
                                                  << 0x11U) 
                                                 | (0x10000U 
                                                    & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                       << 0x10U)))) 
                                             | ((0xfe00U 
                                                 & (vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                    << 9U)) 
                                                | (0x100U 
                                                   & ((IData)(vlSelfRef.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                      << 8U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((IData)(vlSelfRef.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                  ? ((1U & (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

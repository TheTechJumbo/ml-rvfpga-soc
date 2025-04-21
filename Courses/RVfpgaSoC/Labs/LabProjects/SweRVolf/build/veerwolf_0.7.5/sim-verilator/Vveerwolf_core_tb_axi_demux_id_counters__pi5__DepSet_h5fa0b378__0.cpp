// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_demux_id_counters__pi5.h"

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                     >> 3U))))
                                : 0U);
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ (IData)(vlSelfRef.__PVT__pop_en))
                : (IData)(vlSelfRef.__PVT__pop_en)))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
                         && (1U & (IData)(vlSelfRef.__PVT__pop_en)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 1U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 1U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 2U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 2U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 3U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 3U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 4U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 4U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 5U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 5U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 6U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 6U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 7U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 7U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 8U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 8U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 9U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 9U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xaU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xaU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xbU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xbU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xcU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xcU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xdU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xdU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xeU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xeU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xfU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xfU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                                       >> 6U)), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                           >> 6U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                      >> 6U))))
                                 : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])))
                                 : 0U);
    vlSelfRef.__PVT__inject_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                   ? (0xffffU & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                     >> 6U))))
                                   : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                      & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U))))
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                     >> 4U))))
                                : 0U);
    if ((1U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelfRef.__PVT__inject_en)) 
                     || (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)))));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__pop_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
           && ((1U & (~ (IData)(vlSelfRef.__PVT__inject_en))) 
               && (1U & (IData)(vlSelfRef.__PVT__pop_en))));
    if ((2U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 1U)))));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 1U)));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 1U));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 2U)))));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 2U)));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 2U));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 3U)))));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 3U)));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 3U));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 3U))));
    if ((0x10U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 4U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 4U)))));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 4U)));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 4U));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 4U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 4U))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 5U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 5U)))));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 5U)));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 5U));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 5U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 5U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 5U))));
    if ((0x40U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 6U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 6U)))));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 6U)));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 6U));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 6U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 6U))));
    if ((0x80U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 7U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 7U)))));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 7U)));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 7U));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 7U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 7U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 7U))));
    if ((0x100U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 8U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 8U)))));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 8U)));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 8U));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 8U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 8U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 8U))));
    if ((0x200U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 9U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 9U)))));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 9U)));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 9U));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 9U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 9U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 9U))));
    if ((0x400U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xaU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xaU)))));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xaU)));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xaU));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xaU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xaU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xaU))));
    if ((0x800U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xbU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xbU)))));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xbU)));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xbU));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xbU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xbU))));
    if ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xcU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xcU)))));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xcU)));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xcU));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xcU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xcU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xcU))));
    if ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xdU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xdU)))));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xdU)));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xdU));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xdU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xdU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xdU))));
    if ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xeU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xeU)))));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xeU)));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xeU));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xeU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xeU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xeU))));
    if ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xfU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xfU)))));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xfU)));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xfU));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xfU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xfU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xfU))));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U]), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                     >> 3U))))
                                : 0U);
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ (IData)(vlSelfRef.__PVT__pop_en))
                : (IData)(vlSelfRef.__PVT__pop_en)))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
                         && (1U & (IData)(vlSelfRef.__PVT__pop_en)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 1U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 1U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 2U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 2U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 3U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 3U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 4U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 4U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 5U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 5U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 6U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 6U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 7U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 7U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 8U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 8U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 9U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 9U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xaU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xaU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xbU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xbU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xcU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xcU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xdU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xdU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xeU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xeU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xfU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xfU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                                       >> 6U)), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                           >> 6U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                      >> 6U))))
                                 : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])))
                                 : 0U);
    vlSelfRef.__PVT__inject_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                   ? (0xffffU & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                     >> 6U))))
                                   : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                      & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                          >> 0x19U) 
                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U))))
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                     >> 4U))))
                                : 0U);
    if ((1U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelfRef.__PVT__inject_en)) 
                     || (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)))));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__pop_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
           && ((1U & (~ (IData)(vlSelfRef.__PVT__inject_en))) 
               && (1U & (IData)(vlSelfRef.__PVT__pop_en))));
    if ((2U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 1U)))));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 1U)));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 1U));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 2U)))));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 2U)));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 2U));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 3U)))));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 3U)));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 3U));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 3U))));
    if ((0x10U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 4U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 4U)))));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 4U)));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 4U));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 4U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 4U))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 5U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 5U)))));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 5U)));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 5U));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 5U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 5U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 5U))));
    if ((0x40U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 6U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 6U)))));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 6U)));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 6U));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 6U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 6U))));
    if ((0x80U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 7U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 7U)))));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 7U)));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 7U));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 7U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 7U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 7U))));
    if ((0x100U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 8U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 8U)))));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 8U)));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 8U));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 8U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 8U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 8U))));
    if ((0x200U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 9U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 9U)))));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 9U)));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 9U));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 9U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 9U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 9U))));
    if ((0x400U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xaU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xaU)))));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xaU)));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xaU));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xaU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xaU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xaU))));
    if ((0x800U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xbU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xbU)))));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xbU)));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xbU));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xbU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xbU))));
    if ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xcU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xcU)))));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xcU)));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xcU));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xcU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xcU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xcU))));
    if ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xdU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xdU)))));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xdU)));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xdU));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xdU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xdU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xdU))));
    if ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xeU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xeU)))));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xeU)));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xeU));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xeU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xeU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xeU))));
    if ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xfU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xfU)))));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xfU)));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xfU));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xfU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xfU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xfU))));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U]), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                     >> 3U))))
                                : 0U);
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                               ? 1U : 0U));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ (IData)(vlSelfRef.__PVT__pop_en))
                : (IData)(vlSelfRef.__PVT__pop_en)))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
                         && (1U & (IData)(vlSelfRef.__PVT__pop_en)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 1U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 1U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 2U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 2U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 3U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 3U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 4U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 4U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 5U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 5U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 6U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 6U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 7U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 7U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 8U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 8U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 9U))) && (1U 
                                                & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 9U)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xaU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xaU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xbU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xbU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xcU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xcU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xdU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xdU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xeU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xeU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))
                ? (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelfRef.__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & (((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                                   >> 0xfU))) && (1U 
                                                  & ((IData)(vlSelfRef.__PVT__pop_en) 
                                                     >> 0xfU)))
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                                       >> 6U)), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                           >> 6U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                      >> 6U))))
                                 : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])))
                                 : 0U);
    vlSelfRef.__PVT__inject_en = ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                                   ? (0xffffU & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select[2U] 
                                                     >> 6U))))
                                   : 0U);
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___act_comb__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                      & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                          >> 0x12U) 
                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U))))
                                ? (0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                     >> 4U))))
                                : 0U);
    if ((1U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelfRef.__PVT__inject_en)) 
                     || (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)))));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelfRef.__PVT__pop_en)));
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__pop_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__push_en))) 
           && ((1U & (~ (IData)(vlSelfRef.__PVT__inject_en))) 
               && (1U & (IData)(vlSelfRef.__PVT__pop_en))));
    if ((2U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 1U)))));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 1U)));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 1U));
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 2U)))));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 2U)));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 2U));
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 3U)))));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 3U)));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 3U));
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 3U))));
    if ((0x10U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 4U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 4U)))));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 4U)));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 4U));
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 4U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 4U))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 5U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 5U)))));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 5U)));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 5U));
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 5U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 5U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 5U))));
    if ((0x40U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 6U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 6U)))));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x40U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 6U)));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 6U));
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 6U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 6U))));
    if ((0x80U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 7U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 7U)))));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x80U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 7U)));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 7U));
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 7U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 7U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 7U))));
    if ((0x100U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 8U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 8U)))));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x100U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 8U)));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 8U));
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 8U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 8U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 8U))));
    if ((0x200U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 9U)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                 >> 9U)))));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x200U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 9U)));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 9U));
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 9U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                            >> 9U))) 
                                  && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                            >> 9U))));
    if ((0x400U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xaU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xaU)))));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x400U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xaU)));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xaU));
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xaU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xaU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xaU))));
    if ((0x800U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xbU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xbU)))));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x800U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xbU)));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xbU));
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xbU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xbU))));
    if ((0x1000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xcU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xcU)))));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x1000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xcU)));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xcU));
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xcU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xcU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xcU))));
    if ((0x2000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xdU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xdU)))));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x2000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xdU)));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xdU));
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xdU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xdU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xdU))));
    if ((0x4000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xeU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xeU)))));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x4000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xeU)));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xeU));
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xeU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xeU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xeU))));
    if ((0x8000U & (IData)(vlSelfRef.__PVT__push_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__inject_en) 
                            >> 0xfU)) || (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                                                   >> 0xfU)))));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x8000U & (IData)(vlSelfRef.__PVT__inject_en))) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__pop_en) 
                        >> 0xfU)));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                     >> 0xfU));
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelfRef.__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__push_en) 
                     >> 0xfU))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__inject_en) 
                                              >> 0xfU))) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__pop_en) 
                                              >> 0xfU))));
    vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__mst_select_q;
    __Vdly__mst_select_q = 0;
    // Body
    __Vdly__mst_select_q = vlSelfRef.__PVT__mst_select_q;
    __Vdly__mst_select_q = ((0xfffffffcU & __Vdly__mst_select_q) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                ? (3U & ((1U & (IData)(vlSelfRef.__PVT__push_en))
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                          : vlSelfRef.__PVT__mst_select_q))
                                : 0U));
    __Vdly__mst_select_q = ((0xfffffff3U & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((2U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 2U)))
                                 : 0U) << 2U));
    __Vdly__mst_select_q = ((0xffffffcfU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((4U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 4U)))
                                 : 0U) << 4U));
    __Vdly__mst_select_q = ((0xffffff3fU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((8U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 6U)))
                                 : 0U) << 6U));
    __Vdly__mst_select_q = ((0xfffffcffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x10U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 8U)))
                                 : 0U) << 8U));
    __Vdly__mst_select_q = ((0xfffff3ffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x20U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xaU)))
                                 : 0U) << 0xaU));
    __Vdly__mst_select_q = ((0xffffcfffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x40U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xcU)))
                                 : 0U) << 0xcU));
    __Vdly__mst_select_q = ((0xffff3fffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x80U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0xeU)))
                                 : 0U) << 0xeU));
    __Vdly__mst_select_q = ((0xfffcffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x100U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x10U)))
                                 : 0U) << 0x10U));
    __Vdly__mst_select_q = ((0xfff3ffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x200U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x12U)))
                                 : 0U) << 0x12U));
    __Vdly__mst_select_q = ((0xffcfffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x400U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x14U)))
                                 : 0U) << 0x14U));
    __Vdly__mst_select_q = ((0xff3fffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x800U & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x16U)))
                                 : 0U) << 0x16U));
    __Vdly__mst_select_q = ((0xfcffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x1000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x18U)))
                                 : 0U) << 0x18U));
    __Vdly__mst_select_q = ((0xf3ffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x2000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1aU)))
                                 : 0U) << 0x1aU));
    __Vdly__mst_select_q = ((0xcfffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x4000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1cU)))
                                 : 0U) << 0x1cU));
    __Vdly__mst_select_q = ((0x3fffffffU & __Vdly__mst_select_q) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)
                                 ? (3U & ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__push_en))
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[0U]
                                           : (vlSelfRef.__PVT__mst_select_q 
                                              >> 0x1eU)))
                                 : 0U) << 0x1eU));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    vlSelfRef.__PVT__mst_select_q = __Vdly__mst_select_q;
    vlSelfRef.__PVT__cnt_full = ((((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                               >> 4U) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                     << 0xfU) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 0xeU)) 
                                   | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xdU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU))) 
                                  | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 0xbU) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xaU)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 9U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 8U)))) 
                                 | (((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                 >> 4U) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                       << 7U) | ((IData)(
                                                         (((IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                           >> 4U) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                 << 6U)) 
                                     | (((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 5U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 4U))) 
                                    | ((((IData)((((IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                   >> 4U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                         << 3U) | ((IData)(
                                                           (((IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 4U) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 2U)) 
                                       | (((IData)(
                                                   (((IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 4U) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                           << 1U) | (IData)(
                                                            (((IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                              >> 4U) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1(Vveerwolf_core_tb_axi_demux_id_counters__pi5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vveerwolf_core_tb_axi_demux_id_counters__pi5___nba_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lookup_mst_select_o = (3U & (vlSelfRef.__PVT__mst_select_q 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (0xfU 
                                                                    & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U]), 1U))));
    vlSelfRef.__PVT__lookup_mst_select_occupied_o = 
        (1U & ((((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 0xeU) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 0xcU)) | (((((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 0xaU) 
                                            | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                               << 8U))) 
                | ((((((IData)((0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                       << 1U) | (0U != (0xfU & (IData)(vlSelfRef.__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                     << 6U) | ((((IData)((0U != (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                 << 1U) | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                               << 4U)) | (((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                             << 1U) 
                                            | (0U != 
                                               (0xfU 
                                                & (IData)(vlSelfRef.__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                            << 1U) 
                                           | (0U != 
                                              (0xfU 
                                               & (IData)(vlSelfRef.__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))) 
               >> (0xfU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select[2U])));
}

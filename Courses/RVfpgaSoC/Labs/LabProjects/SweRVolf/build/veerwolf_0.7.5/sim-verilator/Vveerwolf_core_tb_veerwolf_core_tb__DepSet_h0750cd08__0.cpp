// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"

extern const VlUnpacked<CData/*3:0*/, 32> Vveerwolf_core_tb__ConstPool__TABLE_ha282529b_0;

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___ico_sequent__TOP__veerwolf_core_tb__0(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___ico_sequent__TOP__veerwolf_core_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vveerwolf_core_tb__ConstPool__TABLE_ha282529b_0
        [__Vtableidx1];
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : (((1U 
                                                & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                               || (1U 
                                                   == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
    vlSelfRef.__Vcellinp__dmi_wrapper__core_rst_n = 
        (1U & (~ (IData)(vlSymsp->TOP.rst)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___act_comb__TOP__veerwolf_core_tb__0(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___act_comb__TOP__veerwolf_core_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__mem_wr_en = 0U;
    vlSelfRef.__PVT__ram__DOT__mem_rd_en = 0U;
    vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_next = 
        ((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg) 
         & (~ vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U]));
    vlSelfRef.__PVT__ram__DOT__write_burst_next = vlSelfRef.__PVT__ram__DOT__write_burst_reg;
    vlSelfRef.__PVT__ram__DOT__write_id_next = vlSelfRef.__PVT__ram__DOT__write_id_reg;
    vlSelfRef.__PVT__ram__DOT__write_size_next = vlSelfRef.__PVT__ram__DOT__write_size_reg;
    vlSelfRef.__PVT__ram__DOT__read_id_next = vlSelfRef.__PVT__ram__DOT__read_id_reg;
    vlSelfRef.__PVT__ram__DOT__read_size_next = vlSelfRef.__PVT__ram__DOT__read_size_reg;
    vlSelfRef.__PVT__ram__DOT__read_burst_next = vlSelfRef.__PVT__ram__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                >> 1U))) {
            vlSelfRef.__PVT__ram__DOT__read_id_next 
                = (0x3fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U]);
            vlSelfRef.__PVT__ram__DOT__read_size_next 
                = ((3U > (7U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                                >> 0x15U))) ? (7U & 
                                               (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                                                >> 0x15U))
                    : 3U);
            vlSelfRef.__PVT__ram__DOT__read_burst_next 
                = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                         >> 0x13U));
        }
    }
    vlSelfRef.__PVT__ram__DOT__s_axi_wready_next = 0U;
    vlSelfRef.__PVT__ram__DOT__write_count_next = vlSelfRef.__PVT__ram__DOT__write_count_reg;
    vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_next = 
        ((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg) 
         & (~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
               >> 6U)));
    vlSelfRef.__PVT__ram__DOT__s_axi_arready_next = 0U;
    vlSelfRef.__PVT__ram__DOT__read_state_next = 0U;
    vlSelfRef.__PVT__ram__DOT__s_axi_rid_next = vlSelfRef.__PVT__ram__DOT__s_axi_rid_reg;
    vlSelfRef.__PVT__ram__DOT__read_count_next = vlSelfRef.__PVT__ram__DOT__read_count_reg;
    vlSelfRef.__PVT__ram__DOT__s_axi_rlast_next = vlSelfRef.__PVT__ram__DOT__s_axi_rlast_reg;
    vlSelfRef.__PVT__ram__DOT__s_axi_awready_next = 0U;
    vlSelfRef.__PVT__ram__DOT__write_state_next = 0U;
    vlSelfRef.__PVT__ram__DOT__s_axi_bid_next = vlSelfRef.__PVT__ram__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                    >> 7U))) {
                vlSelfRef.__PVT__ram__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelfRef.__PVT__ram__DOT__write_count_reg))) {
                    if ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                >> 6U) | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                        vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                        vlSelfRef.__PVT__ram__DOT__s_axi_bid_next 
                            = vlSelfRef.__PVT__ram__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
            if ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                        >> 6U) | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                vlSelfRef.__PVT__ram__DOT__s_axi_bid_next 
                    = vlSelfRef.__PVT__ram__DOT__write_id_reg;
            }
        }
    }
    vlSelfRef.__PVT__ram__DOT__write_addr_next = vlSelfRef.__PVT__ram__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
        vlSelfRef.__PVT__ram__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                >> 0x12U))) {
            vlSelfRef.__PVT__ram__DOT__write_burst_next 
                = (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                         >> 0xaU));
            vlSelfRef.__PVT__ram__DOT__write_id_next 
                = (0x3fU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                            >> 0x17U));
            vlSelfRef.__PVT__ram__DOT__write_size_next 
                = ((3U > (7U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                >> 0xcU))) ? (7U & 
                                              (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                               >> 0xcU))
                    : 3U);
            vlSelfRef.__PVT__ram__DOT__s_axi_wready_next = 1U;
            vlSelfRef.__PVT__ram__DOT__write_count_next 
                = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                            >> 0xfU));
            vlSelfRef.__PVT__ram__DOT__s_axi_awready_next = 0U;
            vlSelfRef.__PVT__ram__DOT__write_state_next = 1U;
            vlSelfRef.__PVT__ram__DOT__write_addr_next 
                = (0xfffffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                << 9U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                          >> 0x17U)));
        } else {
            vlSelfRef.__PVT__ram__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
        vlSelfRef.__PVT__ram__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_wready_reg) 
             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                >> 7U))) {
            if ((0U >= (IData)(vlSelfRef.__PVT__ram__DOT__write_count_reg))) {
                vlSelfRef.__PVT__ram__DOT__s_axi_wready_next = 0U;
                if ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                            >> 6U) | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                    vlSelfRef.__PVT__ram__DOT__s_axi_awready_next = 1U;
                }
            }
            vlSelfRef.__PVT__ram__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelfRef.__PVT__ram__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelfRef.__PVT__ram__DOT__write_state_next 
                = ((0U < (IData)(vlSelfRef.__PVT__ram__DOT__write_count_reg))
                    ? 1U : ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                    >> 6U) | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelfRef.__PVT__ram__DOT__write_burst_reg))) {
                vlSelfRef.__PVT__ram__DOT__write_addr_next 
                    = (0xfffffU & (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                   + ((IData)(1U) << (IData)(vlSelfRef.__PVT__ram__DOT__write_size_reg))));
            }
        } else {
            vlSelfRef.__PVT__ram__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__ram__DOT__write_state_reg))) {
        if ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                    >> 6U) | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
            vlSelfRef.__PVT__ram__DOT__s_axi_awready_next = 1U;
            vlSelfRef.__PVT__ram__DOT__write_state_next = 0U;
        } else {
            vlSelfRef.__PVT__ram__DOT__write_state_next = 2U;
        }
    }
    vlSelfRef.__PVT__ram__DOT__read_addr_next = vlSelfRef.__PVT__ram__DOT__read_addr_reg;
    if (vlSelfRef.__PVT__ram__DOT__read_state_reg) {
        if (vlSelfRef.__PVT__ram__DOT__read_state_reg) {
            if ((1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                       | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSelfRef.__PVT__ram__DOT__mem_rd_en = 1U;
                vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_next = 1U;
                if ((0U >= (IData)(vlSelfRef.__PVT__ram__DOT__read_count_reg))) {
                    vlSelfRef.__PVT__ram__DOT__s_axi_arready_next = 1U;
                }
                vlSelfRef.__PVT__ram__DOT__s_axi_rid_next 
                    = vlSelfRef.__PVT__ram__DOT__read_id_reg;
                vlSelfRef.__PVT__ram__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__ram__DOT__read_count_reg) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__ram__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.__PVT__ram__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.__PVT__ram__DOT__read_burst_reg))) {
                    vlSelfRef.__PVT__ram__DOT__read_addr_next 
                        = (0xfffffU & (vlSelfRef.__PVT__ram__DOT__read_addr_reg 
                                       + ((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__ram__DOT__read_size_reg))));
                }
            }
            vlSelfRef.__PVT__ram__DOT__read_state_next 
                = ((1U & (~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                             | (~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg))))) 
                   || (0U < (IData)(vlSelfRef.__PVT__ram__DOT__read_count_reg)));
        }
    } else {
        vlSelfRef.__PVT__ram__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                >> 1U))) {
            vlSelfRef.__PVT__ram__DOT__s_axi_arready_next = 0U;
            vlSelfRef.__PVT__ram__DOT__read_count_next 
                = (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                   >> 0x18U);
            vlSelfRef.__PVT__ram__DOT__read_addr_next 
                = (0xfffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U]);
            vlSelfRef.__PVT__ram__DOT__read_state_next = 1U;
        } else {
            vlSelfRef.__PVT__ram__DOT__read_state_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__0(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v0;
    __VdlyVal__ram__DOT__mem__v0 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v0;
    __VdlyDim0__ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v0;
    __VdlySet__ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v1;
    __VdlyVal__ram__DOT__mem__v1 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v1;
    __VdlyDim0__ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v1;
    __VdlySet__ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v2;
    __VdlyVal__ram__DOT__mem__v2 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v2;
    __VdlyDim0__ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v2;
    __VdlySet__ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v3;
    __VdlyVal__ram__DOT__mem__v3 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v3;
    __VdlyDim0__ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v3;
    __VdlySet__ram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v4;
    __VdlyVal__ram__DOT__mem__v4 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v4;
    __VdlyDim0__ram__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v4;
    __VdlySet__ram__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v5;
    __VdlyVal__ram__DOT__mem__v5 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v5;
    __VdlyDim0__ram__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v5;
    __VdlySet__ram__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v6;
    __VdlyVal__ram__DOT__mem__v6 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v6;
    __VdlyDim0__ram__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v6;
    __VdlySet__ram__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__ram__DOT__mem__v7;
    __VdlyVal__ram__DOT__mem__v7 = 0;
    IData/*16:0*/ __VdlyDim0__ram__DOT__mem__v7;
    __VdlyDim0__ram__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__ram__DOT__mem__v7;
    __VdlySet__ram__DOT__mem__v7 = 0;
    // Body
    __VdlySet__ram__DOT__mem__v0 = 0U;
    __VdlySet__ram__DOT__mem__v1 = 0U;
    __VdlySet__ram__DOT__mem__v2 = 0U;
    __VdlySet__ram__DOT__mem__v3 = 0U;
    __VdlySet__ram__DOT__mem__v4 = 0U;
    __VdlySet__ram__DOT__mem__v5 = 0U;
    __VdlySet__ram__DOT__mem__v6 = 0U;
    __VdlySet__ram__DOT__mem__v7 = 0U;
    vlSelfRef.__PVT__ram__DOT__i = 8U;
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xaU))) {
        __VdlyVal__ram__DOT__mem__v0 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                 >> 0x12U));
        __VdlyDim0__ram__DOT__mem__v0 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xbU))) {
        __VdlyVal__ram__DOT__mem__v1 = (0xffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                  << 6U) 
                                                 | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                    >> 0x1aU)));
        __VdlyDim0__ram__DOT__mem__v1 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xcU))) {
        __VdlyVal__ram__DOT__mem__v2 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                 >> 2U));
        __VdlyDim0__ram__DOT__mem__v2 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xdU))) {
        __VdlyVal__ram__DOT__mem__v3 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                 >> 0xaU));
        __VdlyDim0__ram__DOT__mem__v3 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xeU))) {
        __VdlyVal__ram__DOT__mem__v4 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                 >> 0x12U));
        __VdlyDim0__ram__DOT__mem__v4 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xfU))) {
        __VdlyVal__ram__DOT__mem__v5 = (0xffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                  << 6U) 
                                                 | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                    >> 0x1aU)));
        __VdlyDim0__ram__DOT__mem__v5 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0x10U))) {
        __VdlyVal__ram__DOT__mem__v6 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                 >> 2U));
        __VdlyDim0__ram__DOT__mem__v6 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0x11U))) {
        __VdlyVal__ram__DOT__mem__v7 = (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                 >> 0xaU));
        __VdlyDim0__ram__DOT__mem__v7 = (0x1ffffU & 
                                         (vlSelfRef.__PVT__ram__DOT__write_addr_reg 
                                          >> 3U));
        __VdlySet__ram__DOT__mem__v7 = 1U;
    }
    vlSelfRef.__PVT__ram__DOT__read_id_reg = vlSelfRef.__PVT__ram__DOT__read_id_next;
    vlSelfRef.__PVT__ram__DOT__write_burst_reg = vlSelfRef.__PVT__ram__DOT__write_burst_next;
    vlSelfRef.__PVT__ram__DOT__write_size_reg = vlSelfRef.__PVT__ram__DOT__write_size_next;
    vlSelfRef.__PVT__ram__DOT__write_id_reg = vlSelfRef.__PVT__ram__DOT__write_id_next;
    vlSelfRef.__PVT__ram__DOT__read_burst_reg = vlSelfRef.__PVT__ram__DOT__read_burst_next;
    vlSelfRef.__PVT__ram__DOT__read_size_reg = vlSelfRef.__PVT__ram__DOT__read_size_next;
    vlSelfRef.__PVT__ram__DOT__read_count_reg = vlSelfRef.__PVT__ram__DOT__read_count_next;
    vlSelfRef.__PVT__ram__DOT__write_count_reg = vlSelfRef.__PVT__ram__DOT__write_count_next;
    vlSelfRef.__PVT__ram__DOT__read_state_reg = vlSelfRef.__PVT__ram__DOT__read_state_next;
    vlSelfRef.__PVT__ram__DOT__write_state_reg = vlSelfRef.__PVT__ram__DOT__write_state_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_bid_reg = vlSelfRef.__PVT__ram__DOT__s_axi_bid_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg = vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_arready_reg = vlSelfRef.__PVT__ram__DOT__s_axi_arready_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_awready_reg = vlSelfRef.__PVT__ram__DOT__s_axi_awready_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_wready_reg = vlSelfRef.__PVT__ram__DOT__s_axi_wready_next;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_pipe_reg)) 
               | vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U]))) {
        vlSelfRef.__PVT__ram__DOT__s_axi_rid_pipe_reg 
            = vlSelfRef.__PVT__ram__DOT__s_axi_rid_reg;
        vlSelfRef.__PVT__ram__DOT__s_axi_rdata_pipe_reg 
            = vlSelfRef.__PVT__ram__DOT__s_axi_rdata_reg;
        vlSelfRef.__PVT__ram__DOT__s_axi_rlast_pipe_reg 
            = vlSelfRef.__PVT__ram__DOT__s_axi_rlast_reg;
        vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_pipe_reg 
            = vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg;
    }
    vlSelfRef.__PVT__ram__DOT__write_addr_reg = vlSelfRef.__PVT__ram__DOT__write_addr_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_rid_reg = vlSelfRef.__PVT__ram__DOT__s_axi_rid_next;
    vlSelfRef.__PVT__ram__DOT__s_axi_rlast_reg = vlSelfRef.__PVT__ram__DOT__s_axi_rlast_next;
    if (vlSelfRef.__PVT__ram__DOT__mem_rd_en) {
        vlSelfRef.__PVT__ram__DOT__s_axi_rdata_reg 
            = vlSelfRef.__PVT__ram__DOT__mem[(0x1ffffU 
                                              & (vlSelfRef.__PVT__ram__DOT__read_addr_reg 
                                                 >> 3U))];
    }
    vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg = vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_next;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__ram__DOT__read_state_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__write_state_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_bvalid_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_arready_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_awready_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_wready_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelfRef.__PVT__ram__DOT__s_axi_rvalid_reg = 0U;
    }
    if (__VdlySet__ram__DOT__mem__v0) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v0]) | (IData)((IData)(__VdlyVal__ram__DOT__mem__v0)));
    }
    if (__VdlySet__ram__DOT__mem__v1) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v1]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v1)) 
                << 8U));
    }
    if (__VdlySet__ram__DOT__mem__v2) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v2]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v2)) 
                << 0x10U));
    }
    if (__VdlySet__ram__DOT__mem__v3) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v3]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v3)) 
                << 0x18U));
    }
    if (__VdlySet__ram__DOT__mem__v4) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v4]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v4)) 
                << 0x20U));
    }
    if (__VdlySet__ram__DOT__mem__v5) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v5]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v5)) 
                << 0x28U));
    }
    if (__VdlySet__ram__DOT__mem__v6) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v6]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v6)) 
                << 0x30U));
    }
    if (__VdlySet__ram__DOT__mem__v7) {
        vlSelfRef.__PVT__ram__DOT__mem[__VdlyDim0__ram__DOT__mem__v7] 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__ram__DOT__mem
                [__VdlyDim0__ram__DOT__mem__v7]) | 
               ((QData)((IData)(__VdlyVal__ram__DOT__mem__v7)) 
                << 0x38U));
    }
    vlSelfRef.__PVT__ram__DOT__read_addr_reg = vlSelfRef.__PVT__ram__DOT__read_addr_next;
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__2(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    vlSelfRef.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = ((IData)(vlSymsp->TOP.i_jtag_trst_n) ? ((
                                                   (8U 
                                                    == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                                   & ((IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                      >> 1U))
                                                   ? vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                                                   : 
                                                  (0x1fffffffffcULL 
                                                   & vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))
            : 0ULL);
    vlSelfRef.__PVT__dmi_hard_reset = ((IData)(vlSymsp->TOP.i_jtag_trst_n) 
                                       && (((8U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                            & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                           && (1U & (IData)(
                                                            (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 0x11U)))));
    vlSelfRef.__PVT__dmi_wrapper__DOT__dmireset = ((IData)(vlSymsp->TOP.i_jtag_trst_n) 
                                                   && (((8U 
                                                         == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                                        & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                      >> 0x10U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__4(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        if ((0U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else if ((0xfU == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                = ((0U == (0x1fU & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                    ? 0x1fU : (0x1fU & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
        }
    } else {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__6(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_sequent__TOP__veerwolf_core_tb__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelfRef.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vveerwolf_core_tb__ConstPool__TABLE_ha282529b_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core_tb___nba_comb__TOP__veerwolf_core_tb__0(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___nba_comb__TOP__veerwolf_core_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : (((1U 
                                                & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                               || (1U 
                                                   == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__10(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bready_q = 1U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rready_q = 1U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_awready_q 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x13U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wready_q 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x11U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_arready_q 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x12U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bvalid_q 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x10U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rvalid_q 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 8U));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
               | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                  & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & ((IData)(((0x1000000000ULL == 
                                  (0x1fc00000000ULL 
                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg))) 
                        | (IData)(((0x1400000000ULL 
                                    == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                   & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg) 
                                      >> 1U)))))));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bresp_q 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rresp_q 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__dmi_reg_rdata = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_error_din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wvalid_q 
            = vlSelfRef.__PVT__sb_wvalid;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_awvalid_q 
            = vlSelfRef.__PVT__sb_awvalid;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_arvalid_q 
            = vlSelfRef.__PVT__sb_arvalid;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted 
            = (1U & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                     & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0x11U)));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din;
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bready_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rready_q = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_awready_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wready_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_arready_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bvalid_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rvalid_q = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bresp_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rresp_q = 0U;
        vlSelfRef.__PVT__dmi_reg_rdata = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wvalid_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_awvalid_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_arvalid_q = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done = 0U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout = 0U;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq 
        = (IData)(((4U == (0xcU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
        = (0x2000040fU | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout) 
                             << 0x16U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout) 
                                             << 0x14U))) 
                           | ((0x80000U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                           << 0xfU)) 
                              | (0x40000U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                                 >> 3U)) 
                                             << 0x12U)))) 
                          | ((0x38000U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                          << 0xfU)) 
                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout) 
                                << 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size 
        = ((4U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                  >> 2U)) | ((2U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                        >> 3U)) << 1U)) 
                             | (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                      >> 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                             >> 8U))) ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg
             : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)) 
           + ((2U == (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                               >> 8U))) ? (0xfU & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                       >> 4U))))
               : 1U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    if ((2U == (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                         >> 8U)))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type = 2U;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg;
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type 
            = (0U == (0xfU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                              >> 0xcU)));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
            = (0xfffU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg)));
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)))) {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 1U;
            }
        }
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned 
        = (((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg) 
           | (((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)) 
               & (0U != (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg))) 
              | ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)) 
                 & (0U != (7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
        = (2U | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                  << 0xcU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
                              << 8U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_h7f0e510a__0 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
              >> 4U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__12(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__syscon__DOT__mtime;
    __Vdly__syscon__DOT__mtime = 0;
    // Body
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSelfRef.__Vdly__spi__DOT__state = 0U;
        vlSelfRef.__Vdly__spi__DOT__bcnt = 0U;
        vlSelfRef.__Vdly__spi__DOT__treg = 0U;
        vlSelfRef.__Vdly__spi__DOT__wfre = 0U;
        vlSelfRef.__PVT__spi__DOT__rfwe = 0U;
        vlSelfRef.__Vdly__o_flash_sclk = 0U;
    } else {
        vlSelfRef.__Vdly__spi__DOT__wfre = 0U;
        vlSelfRef.__PVT__spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__spi__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.__PVT__spi__DOT__clkcnt)))))) {
                    vlSelfRef.__Vdly__spi__DOT__treg 
                        = (0xfeU & ((IData)(vlSelfRef.__PVT__spi__DOT__treg) 
                                    << 1U));
                    vlSelfRef.__Vdly__spi__DOT__bcnt 
                        = (7U & ((IData)(vlSelfRef.__PVT__spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelfRef.__PVT__spi__DOT__bcnt))) {
                        vlSelfRef.__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__o_flash_sclk)));
                        vlSelfRef.__Vdly__spi__DOT__state = 1U;
                    } else {
                        vlSelfRef.__Vdly__spi__DOT__state = 0U;
                        vlSelfRef.__Vdly__o_flash_sclk 
                            = (1U & ((IData)(vlSelfRef.__PVT__spi__DOT__spcr) 
                                     >> 3U));
                        vlSelfRef.__PVT__spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__spi__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__spi__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.__PVT__spi__DOT__clkcnt)))))) {
                vlSelfRef.__Vdly__o_flash_sclk = (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__o_flash_sclk)));
                vlSelfRef.__Vdly__spi__DOT__state = 3U;
            }
        } else {
            vlSelfRef.__Vdly__o_flash_sclk = (1U & 
                                              ((IData)(vlSelfRef.__PVT__spi__DOT__spcr) 
                                               >> 3U));
            vlSelfRef.__Vdly__spi__DOT__bcnt = 7U;
            vlSelfRef.__Vdly__spi__DOT__treg = vlSelfRef.__PVT__spi__DOT__wfifo__DOT__mem
                [vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelfRef.__PVT__spi__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__spi__DOT__spcr))) {
                    vlSelfRef.__Vdly__o_flash_sclk 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__o_flash_sclk)));
                }
                vlSelfRef.__Vdly__spi__DOT__wfre = 1U;
                vlSelfRef.__Vdly__spi__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.__PVT__spi0_irq = ((IData)(vlSelfRef.__PVT__spi__DOT__spif) 
                                 & ((IData)(vlSelfRef.__PVT__spi__DOT__spcr) 
                                    >> 7U));
    vlSelfRef.__PVT__syscon__DOT__nmi_int_r = vlSelfRef.__PVT__syscon__DOT__nmi_int;
    vlSelfRef.__PVT__spi__DOT__bcnt = vlSelfRef.__Vdly__spi__DOT__bcnt;
    vlSelfRef.__PVT__o_flash_sclk = vlSelfRef.__Vdly__o_flash_sclk;
    vlSelfRef.__PVT__spi__DOT__state = vlSelfRef.__Vdly__spi__DOT__state;
    vlSelfRef.__PVT__spi__DOT__clkcnt = vlSelfRef.__Vdly__spi__DOT__clkcnt;
    vlSelfRef.__PVT__spi__DOT__treg = vlSelfRef.__Vdly__spi__DOT__treg;
    if (vlSelfRef.__VdlySet__spi__DOT__wfifo__DOT__mem__v0) {
        vlSelfRef.__PVT__spi__DOT__wfifo__DOT__mem[vlSelfRef.__VdlyDim0__spi__DOT__wfifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__spi__DOT__wfifo__DOT__mem__v0;
    }
    vlSelfRef.__PVT__spi__DOT__spif = vlSelfRef.__Vdly__spi__DOT__spif;
    if (vlSelfRef.__PVT__syscon__DOT__sw_irq3_edge) {
        vlSelfRef.__Vdly__syscon__DOT__sw_irq3 = 0U;
    }
    if (vlSelfRef.__PVT__syscon__DOT__sw_irq4_edge) {
        vlSelfRef.__Vdly__syscon__DOT__sw_irq4 = 0U;
    }
    if (vlSelfRef.__PVT__syscon__DOT__irq_timer_en) {
        vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt 
            = (vlSelfRef.__PVT__syscon__DOT__irq_timer_cnt 
               - (IData)(1U));
    }
    vlSelfRef.__PVT__syscon__DOT__nmi_int = 0U;
    if ((1U == vlSelfRef.__PVT__syscon__DOT__irq_timer_cnt)) {
        vlSelfRef.__Vdly__syscon__DOT__irq_timer_en = 0U;
        if (vlSelfRef.__PVT__syscon__DOT__sw_irq3_timer) {
            vlSelfRef.__Vdly__syscon__DOT__sw_irq3 = 1U;
        }
        if (vlSelfRef.__PVT__syscon__DOT__sw_irq4_timer) {
            vlSelfRef.__Vdly__syscon__DOT__sw_irq4 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq3_timer) 
                      | (IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq4_timer))))) {
            vlSelfRef.__PVT__syscon__DOT__nmi_int = 1U;
        }
    }
    if ((((IData)(vlSelfRef.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
          >> 2U) & ((IData)(vlSelfRef.__PVT__wb_io_stb) 
                    & ((~ (IData)(vlSelfRef.__PVT__wb_sys_ack)) 
                       & (IData)(vlSelfRef.__PVT__wb_io_we))))) {
        if (((((((((2U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr))) 
                   | (3U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
                  | (4U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
                 | (6U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
                | (0xaU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
               | (0xbU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
              | (0xcU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
             | (0xdU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr))))) {
            if ((2U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelfRef.__PVT__wb_io_sel)))) {
                    if (VL_UNLIKELY((0U != vlSelfRef.__PVT__syscon__DOT__f))) {
                        VL_FWRITEF_NX(vlSelfRef.__PVT__syscon__DOT__f,"%c",0,
                                      8,(0xffU & vlSelfRef.__PVT__wb_io_dat));
                    }
                    VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.__PVT__wb_io_dat));
                }
                if (VL_UNLIKELY((2U & (IData)(vlSelfRef.__PVT__wb_io_sel)))) {
                    VL_WRITEF_NX("\nFinito\n",0);
                    VL_FINISH_MT("src/veerwolf_0.7.5/rtl/veerwolf_syscon.v", 154, "");
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq4 
                        = (vlSelfRef.__PVT__wb_io_dat 
                           >> 0x1fU);
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq4_edge 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x1eU));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq4_pol 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x1dU));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq4_timer 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x1cU));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq3 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x1bU));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq3_edge 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x1aU));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq3_pol 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x19U));
                    vlSelfRef.__Vdly__syscon__DOT__sw_irq3_timer 
                        = (1U & (vlSelfRef.__PVT__wb_io_dat 
                                 >> 0x18U));
                }
            } else if ((3U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__nmi_vec = ((0xffffff00U 
                                                  & vlSelfRef.__Vdly__nmi_vec) 
                                                 | (0xffU 
                                                    & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__nmi_vec = ((0xffff00ffU 
                                                  & vlSelfRef.__Vdly__nmi_vec) 
                                                 | (0xff00U 
                                                    & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__nmi_vec = ((0xff00ffffU 
                                                  & vlSelfRef.__Vdly__nmi_vec) 
                                                 | (0xff0000U 
                                                    & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__nmi_vec = ((0xffffffU 
                                                  & vlSelfRef.__Vdly__nmi_vec) 
                                                 | (0xff000000U 
                                                    & vlSelfRef.__PVT__wb_io_dat));
                }
            } else if ((4U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffffffffffff00ULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | (IData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelfRef.__PVT__wb_io_dat))));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffffffffff00ffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.__PVT__wb_io_dat 
                                                                      >> 8U)))) 
                                                  << 8U));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffffffff00ffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.__PVT__wb_io_dat 
                                                                      >> 0x10U)))) 
                                                  << 0x10U));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffffff00ffffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (vlSelfRef.__PVT__wb_io_dat 
                                                                   >> 0x18U))) 
                                                  << 0x18U));
                }
            } else if ((6U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffff00ffffffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelfRef.__PVT__wb_io_dat))) 
                                                  << 0x20U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffff00ffffffffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.__PVT__wb_io_dat 
                                                                      >> 8U)))) 
                                                  << 0x28U));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xff00ffffffffffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.__PVT__wb_io_dat 
                                                                      >> 0x10U)))) 
                                                  << 0x30U));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__PVT__o_gpio = ((0xffffffffffffffULL 
                                                & vlSelfRef.__PVT__o_gpio) 
                                               | ((QData)((IData)(
                                                                  (vlSelfRef.__PVT__wb_io_dat 
                                                                   >> 0x18U))) 
                                                  << 0x38U));
                }
            } else if ((0xaU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffff00ULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | (IData)((IData)((0xffU 
                                              & vlSelfRef.__PVT__wb_io_dat))));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffff00ffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelfRef.__PVT__wb_io_dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffff00ffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelfRef.__PVT__wb_io_dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffff00ffffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelfRef.__PVT__wb_io_dat 
                                               >> 0x18U))) 
                              << 0x18U));
                }
            } else if ((0xbU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffff00ffffffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & vlSelfRef.__PVT__wb_io_dat))) 
                              << 0x20U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffff00ffffffffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelfRef.__PVT__wb_io_dat 
                                                  >> 8U)))) 
                              << 0x28U));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xff00ffffffffffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelfRef.__PVT__wb_io_dat 
                                                  >> 0x10U)))) 
                              << 0x30U));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffffULL & vlSelfRef.__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelfRef.__PVT__wb_io_dat 
                                               >> 0x18U))) 
                              << 0x38U));
                }
            } else if ((0xcU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffff00U & vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xffU & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffff00ffU & vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff00U & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((4U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xff00ffffU & vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff0000U & vlSelfRef.__PVT__wb_io_dat));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                    vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffffU & vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff000000U & vlSelfRef.__PVT__wb_io_dat));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wb_io_sel))) {
                vlSelfRef.__Vdly__syscon__DOT__irq_timer_en 
                    = (1U & vlSelfRef.__PVT__wb_io_dat);
            }
        }
    }
    if (((((((((0U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr))) 
               | (1U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
              | (2U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
             | (3U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
            | (4U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
           | (6U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
          | (8U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) 
         | (9U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr))))) {
        if ((0U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
            vlSelfRef.__PVT__wb_sys_rdt = 0xd000705U;
        } else if ((1U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
            vlSelfRef.__PVT__wb_sys_rdt = 0x9a919805U;
        } else if ((2U == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
            vlSelfRef.__PVT__wb_sys_rdt = ((0xffffffU 
                                            & vlSelfRef.__PVT__wb_sys_rdt) 
                                           | (((((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq4) 
                                                 << 0x1fU) 
                                                | ((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq4_edge) 
                                                   << 0x1eU)) 
                                               | (((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq4_pol) 
                                                   << 0x1dU) 
                                                  | ((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq4_timer) 
                                                     << 0x1cU))) 
                                              | ((((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq3) 
                                                   << 0x1bU) 
                                                  | ((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq3_edge) 
                                                     << 0x1aU)) 
                                                 | (((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq3_pol) 
                                                     << 0x19U) 
                                                    | ((IData)(vlSelfRef.__PVT__syscon__DOT__sw_irq3_timer) 
                                                       << 0x18U)))));
            vlSelfRef.__PVT__wb_sys_rdt = (0x10000U 
                                           | (0xff000000U 
                                              & vlSelfRef.__PVT__wb_sys_rdt));
        } else {
            vlSelfRef.__PVT__wb_sys_rdt = ((3U == (0xfU 
                                                   & (IData)(vlSelfRef.__PVT__wb_adr)))
                                            ? vlSelfRef.__PVT__nmi_vec
                                            : ((4U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelfRef.__PVT__wb_adr)))
                                                ? vlSymsp->TOP.i_gpio
                                                : (
                                                   (6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__wb_adr)))
                                                    ? (IData)(
                                                              ((QData)((IData)(vlSymsp->TOP.i_gpio)) 
                                                               >> 0x20U))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__wb_adr)))
                                                     ? (IData)(vlSelfRef.__PVT__syscon__DOT__mtime)
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__syscon__DOT__mtime 
                                                                >> 0x20U))))));
        }
    } else if ((0xaU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
        vlSelfRef.__PVT__wb_sys_rdt = (IData)(vlSelfRef.__PVT__syscon__DOT__mtimecmp);
    } else if ((0xbU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
        vlSelfRef.__PVT__wb_sys_rdt = (IData)((vlSelfRef.__PVT__syscon__DOT__mtimecmp 
                                               >> 0x20U));
    } else if ((0xcU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
        vlSelfRef.__PVT__wb_sys_rdt = vlSelfRef.__PVT__syscon__DOT__irq_timer_cnt;
    } else if ((0xdU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
        vlSelfRef.__PVT__wb_sys_rdt = vlSelfRef.__PVT__syscon__DOT__irq_timer_en;
    } else if ((0xfU == (0xfU & (IData)(vlSelfRef.__PVT__wb_adr)))) {
        vlSelfRef.__PVT__wb_sys_rdt = 0x2faf080U;
    }
    __Vdly__syscon__DOT__mtime = (1ULL + vlSelfRef.__PVT__syscon__DOT__mtime);
    vlSelfRef.__PVT__timer_irq = (vlSelfRef.__PVT__syscon__DOT__mtime 
                                  >= vlSelfRef.__PVT__syscon__DOT__mtimecmp);
    if ((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        __Vdly__syscon__DOT__mtime = 0ULL;
        vlSelfRef.__Vdly__syscon__DOT__mtimecmp = 0ULL;
    }
    vlSelfRef.__PVT__syscon__DOT__irq_timer_cnt = vlSelfRef.__Vdly__syscon__DOT__irq_timer_cnt;
    vlSelfRef.__PVT__syscon__DOT__irq_timer_en = vlSelfRef.__Vdly__syscon__DOT__irq_timer_en;
    vlSelfRef.__PVT__syscon__DOT__sw_irq4_edge = vlSelfRef.__Vdly__syscon__DOT__sw_irq4_edge;
    vlSelfRef.__PVT__syscon__DOT__sw_irq4_timer = vlSelfRef.__Vdly__syscon__DOT__sw_irq4_timer;
    vlSelfRef.__PVT__syscon__DOT__sw_irq3_edge = vlSelfRef.__Vdly__syscon__DOT__sw_irq3_edge;
    vlSelfRef.__PVT__syscon__DOT__sw_irq3_timer = vlSelfRef.__Vdly__syscon__DOT__sw_irq3_timer;
    vlSelfRef.__PVT__syscon__DOT__mtimecmp = vlSelfRef.__Vdly__syscon__DOT__mtimecmp;
    vlSelfRef.__PVT__syscon__DOT__sw_irq4 = vlSelfRef.__Vdly__syscon__DOT__sw_irq4;
    vlSelfRef.__PVT__syscon__DOT__sw_irq4_pol = vlSelfRef.__Vdly__syscon__DOT__sw_irq4_pol;
    vlSelfRef.__PVT__syscon__DOT__sw_irq3 = vlSelfRef.__Vdly__syscon__DOT__sw_irq3;
    vlSelfRef.__PVT__syscon__DOT__sw_irq3_pol = vlSelfRef.__Vdly__syscon__DOT__sw_irq3_pol;
    vlSelfRef.__PVT__syscon__DOT__mtime = __Vdly__syscon__DOT__mtime;
    vlSelfRef.__PVT__wb_sys_ack = vlSelfRef.__Vdly__wb_sys_ack;
    vlSelfRef.__PVT__nmi_vec = vlSelfRef.__Vdly__nmi_vec;
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__13(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout;
        vlSelfRef.__PVT__uart_irq = (1U & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
                                            ? (~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))
                                            : ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                                               | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__fifo_read))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                                                     & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__iir_read)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                                                    & (~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__msr_read))))))));
        if ((0x40U & (IData)(vlSelfRef.__PVT__spi__DOT__spcr))) {
            if (vlSelfRef.__PVT__spi__DOT__wfre) {
                vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l = 0U;
        vlSelfRef.__PVT__uart_irq = 0U;
        vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
    }
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = vlSelfRef.__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSelfRef.__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSelfRef.__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSelfRef.__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSelfRef.__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__re_o) 
           & (IData)(vlSelfRef.uart16550_0__DOT__regs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (2U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (6U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__fifo_write 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__we_o) 
           & (IData)(vlSelfRef.uart16550_0__DOT__regs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition));
    vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0 
        = ((IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__wp));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__14(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
           & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__16(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ spi__DOT____VdfgRegularize_h69f9610c_1_0;
    spi__DOT____VdfgRegularize_h69f9610c_1_0 = 0;
    CData/*1:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = 0;
    // Body
    vlSelfRef.__PVT__spi__DOT__wfre = vlSelfRef.__Vdly__spi__DOT__wfre;
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSelfRef.__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSelfRef.__Vcellinp__spi__adr_i))) {
                vlSelfRef.__PVT__spi__DOT__spcr = (0xffU 
                                                   & (0x10U 
                                                      | vlSelfRef.__PVT__wb_io_dat));
            }
        }
        vlSelfRef.__PVT__io_awready = 0U;
        vlSelfRef.__PVT__io_wready = 0U;
        vlSelfRef.__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
            vlSelfRef.__PVT__io_awready = 0U;
            vlSelfRef.__PVT__io_wready = 0U;
            vlSelfRef.__PVT__io_arready = 0U;
            vlSelfRef.__PVT__io_rvalid = 0U;
            vlSelfRef.__PVT__io_bvalid = 0U;
            vlSelfRef.__PVT__wb_adr = 0U;
            vlSelfRef.__PVT__wb_io_cyc = 0U;
            vlSelfRef.__PVT__wb_io_stb = 0U;
            vlSelfRef.__PVT__wb_io_sel = 0U;
            vlSelfRef.__PVT__wb_io_we = 0U;
            vlSelfRef.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSelfRef.__Vdly__axi2wb__DOT__cs = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
                if ((1U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
                    vlSelfRef.__PVT__io_rvalid = 1U;
                    if ((1U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                        vlSelfRef.__PVT__io_rvalid = 0U;
                        vlSelfRef.__Vdly__axi2wb__DOT__cs = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__io_bvalid = 1U;
                    if ((0x40U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                        vlSelfRef.__PVT__io_bvalid = 0U;
                        vlSelfRef.__Vdly__axi2wb__DOT__cs = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelfRef.__PVT__wb_io_err) 
                     | (IData)(vlSelfRef.__PVT__wb_io_ack))) {
                    vlSelfRef.__PVT__wb_io_cyc = 0U;
                    vlSelfRef.__PVT__wb_io_stb = 0U;
                    vlSelfRef.__PVT__wb_io_sel = 0U;
                    vlSelfRef.__PVT__io_rvalid = 1U;
                    vlSelfRef.__PVT__io_rdata = (((QData)((IData)(vlSelfRef.__PVT__wb_io_rdt)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__axi2wb__DOT__wb_rdt_low)));
                    vlSelfRef.__Vdly__axi2wb__DOT__cs = 7U;
                }
            } else {
                vlSelfRef.__PVT__wb_adr = (1U | (IData)(vlSelfRef.__PVT__wb_adr));
                vlSelfRef.__PVT__wb_io_sel = 0xfU;
                vlSelfRef.__PVT__wb_io_cyc = 1U;
                vlSelfRef.__PVT__wb_io_stb = 1U;
                vlSelfRef.__Vdly__axi2wb__DOT__cs = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelfRef.__PVT__wb_io_err) 
                     | (IData)(vlSelfRef.__PVT__wb_io_ack))) {
                    vlSelfRef.__PVT__wb_io_cyc = 0U;
                    vlSelfRef.__PVT__wb_io_stb = 0U;
                    vlSelfRef.__PVT__wb_io_sel = 0U;
                    vlSelfRef.__PVT__axi2wb__DOT__wb_rdt_low 
                        = vlSelfRef.__PVT__wb_io_rdt;
                    vlSelfRef.__Vdly__axi2wb__DOT__cs = 4U;
                }
            } else if (((IData)(vlSelfRef.__PVT__wb_io_err) 
                        | (IData)(vlSelfRef.__PVT__wb_io_ack))) {
                vlSelfRef.__PVT__wb_io_cyc = 0U;
                vlSelfRef.__PVT__wb_io_stb = 0U;
                vlSelfRef.__PVT__wb_io_sel = 0U;
                vlSelfRef.__PVT__wb_io_we = 0U;
                vlSelfRef.__PVT__io_bvalid = 1U;
                vlSelfRef.__Vdly__axi2wb__DOT__cs = 6U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__axi2wb__DOT__cs))) {
            if ((0x80U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w 
                    = (0U == (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      >> 0xaU)));
                vlSelfRef.__PVT__wb_adr = ((0x3ffeU 
                                            & (IData)(vlSelfRef.__PVT__wb_adr)) 
                                           | (IData)(vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w));
                vlSelfRef.__PVT__wb_io_cyc = 1U;
                vlSelfRef.__PVT__wb_io_stb = 1U;
                vlSelfRef.__PVT__wb_io_we = 1U;
                vlSelfRef.__PVT__io_wready = 1U;
                vlSelfRef.__Vdly__axi2wb__DOT__cs = 2U;
                if (vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w) {
                    vlSelfRef.__PVT__wb_io_sel = (0xfU 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                      << 0x12U) 
                                                     | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                        >> 0xeU)));
                    vlSelfRef.__PVT__wb_io_dat = ((
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                   << 0xeU) 
                                                  | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                     >> 0x12U));
                } else {
                    vlSelfRef.__PVT__wb_io_sel = (0xfU 
                                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                      << 0x16U) 
                                                     | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                        >> 0xaU)));
                    vlSelfRef.__PVT__wb_io_dat = ((
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                   << 0xeU) 
                                                  | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                     >> 0x12U));
                }
            }
        } else {
            vlSelfRef.__Vdly__axi2wb__DOT__arbiter = 1U;
            if (((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                  >> 0x12U) & (IData)(vlSelfRef.__PVT__axi2wb__DOT__arbiter))) {
                vlSelfRef.__PVT__wb_adr = ((1U & (IData)(vlSelfRef.__PVT__wb_adr)) 
                                           | (0x3ffeU 
                                              & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                                  << 7U) 
                                                 | (0x7eU 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                                       >> 0x19U)))));
                vlSelfRef.__PVT__io_awready = 1U;
                vlSelfRef.__Vdly__axi2wb__DOT__arbiter = 0U;
                if ((0x80U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                    vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w 
                        = (0U == (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                          >> 0xaU)));
                    vlSelfRef.__PVT__wb_adr = ((0x3ffeU 
                                                & (IData)(vlSelfRef.__PVT__wb_adr)) 
                                               | (IData)(vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w));
                    vlSelfRef.__PVT__wb_io_cyc = 1U;
                    vlSelfRef.__PVT__wb_io_stb = 1U;
                    vlSelfRef.__PVT__wb_io_we = 1U;
                    vlSelfRef.__PVT__io_wready = 1U;
                    vlSelfRef.__Vdly__axi2wb__DOT__cs = 2U;
                    if (vlSelfRef.__PVT__axi2wb__DOT__hi_32b_w) {
                        vlSelfRef.__PVT__wb_io_sel 
                            = (0xfU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        >> 0xeU)));
                        vlSelfRef.__PVT__wb_io_dat 
                            = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                << 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                            >> 0x12U));
                    } else {
                        vlSelfRef.__PVT__wb_io_sel 
                            = (0xfU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        >> 0xaU)));
                        vlSelfRef.__PVT__wb_io_dat 
                            = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                << 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                            >> 0x12U));
                    }
                } else {
                    vlSelfRef.__Vdly__axi2wb__DOT__cs = 1U;
                }
            } else if ((2U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                vlSelfRef.__PVT__wb_adr = (0x3fffU 
                                           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                              >> 2U));
                vlSelfRef.__PVT__wb_io_sel = 0xfU;
                vlSelfRef.__PVT__wb_io_cyc = 1U;
                vlSelfRef.__PVT__wb_io_stb = 1U;
                vlSelfRef.__PVT__io_arready = 1U;
                vlSelfRef.__Vdly__axi2wb__DOT__cs = 3U;
            }
        }
    } else {
        vlSelfRef.__PVT__spi__DOT__spcr = 0x10U;
        vlSelfRef.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSelfRef.__PVT__io_awready = 0U;
        vlSelfRef.__PVT__io_wready = 0U;
        vlSelfRef.__PVT__io_arready = 0U;
        vlSelfRef.__PVT__io_rvalid = 0U;
        vlSelfRef.__PVT__io_bvalid = 0U;
        vlSelfRef.__PVT__wb_adr = 0U;
        vlSelfRef.__PVT__wb_io_cyc = 0U;
        vlSelfRef.__PVT__wb_io_stb = 0U;
        vlSelfRef.__PVT__wb_io_sel = 0U;
        vlSelfRef.__PVT__wb_io_we = 0U;
        vlSelfRef.__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSelfRef.__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSelfRef.__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelfRef.__PVT__spi__DOT__sper) 
                                                << 2U)) 
                                       | (3U & (IData)(vlSelfRef.__PVT__spi__DOT__spcr)));
    vlSelfRef.__PVT__axi2wb__DOT__arbiter = vlSelfRef.__Vdly__axi2wb__DOT__arbiter;
    vlSelfRef.__PVT__axi2wb__DOT__cs = vlSelfRef.__Vdly__axi2wb__DOT__cs;
    vlSelfRef.__Vcellinp__spi__adr_i = ((1U & (IData)(vlSelfRef.__PVT__wb_adr))
                                         ? 0U : (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wb_adr) 
                                                    >> 1U)));
    vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((((0U == (0x3c00U & (IData)(vlSelfRef.__PVT__wb_adr))) 
             << 3U) | ((0x400U == (0x3ff0U & (IData)(vlSelfRef.__PVT__wb_adr))) 
                       << 2U)) | (((0x410U == (0x3ff0U 
                                               & (IData)(vlSelfRef.__PVT__wb_adr))) 
                                   << 1U) | (0x800U 
                                             == (0x3c00U 
                                                 & (IData)(vlSelfRef.__PVT__wb_adr)))));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = (2U | ((1U & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[0U]) 
                 | ((IData)(vlSelfRef.__PVT__io_rdata) 
                    << 4U)));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSelfRef.__PVT__io_rdata) 
                  >> 0x1cU)) | ((0xeU & ((IData)(vlSelfRef.__PVT__io_rdata) 
                                         >> 0x1cU)) 
                                | ((IData)((vlSelfRef.__PVT__io_rdata 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffff800U & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSelfRef.__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | ((0xfffffff0U & (((IData)(vlSelfRef.__PVT__io_rvalid) 
                                  << 0xaU) | ((IData)(vlSelfRef.__PVT__io_rid) 
                                              << 4U))) 
                 | (0xeU & ((IData)((vlSelfRef.__PVT__io_rdata 
                                     >> 0x20U)) >> 0x1cU)))));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff000fffU & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & (((((IData)(vlSelfRef.__PVT__io_awready) 
                                << 0x17U) | ((IData)(vlSelfRef.__PVT__io_arready) 
                                             << 0x16U)) 
                              | (((IData)(vlSelfRef.__PVT__io_wready) 
                                  << 0x15U) | ((IData)(vlSelfRef.__PVT__io_bvalid) 
                                               << 0x14U))) 
                             | ((IData)(vlSelfRef.__PVT__io_bid) 
                                << 0xeU))));
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((8U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSelfRef.__PVT__wb_io_err = (1U & (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSelfRef.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSelfRef.__PVT__wb_io_cyc) << (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSelfRef.__PVT__spi__DOT__wb_acc = (((IData)(vlSelfRef.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                          >> 1U) & (IData)(vlSelfRef.__PVT__wb_io_stb));
    vlSelfRef.__PVT__spi__DOT__wb_wr = ((IData)(vlSelfRef.__PVT__spi__DOT__wb_acc) 
                                        & (IData)(vlSelfRef.__PVT__wb_io_we));
    spi__DOT____VdfgRegularize_h69f9610c_1_0 = ((IData)(vlSelfRef.__PVT__spi__DOT__wb_acc) 
                                                & ((2U 
                                                    == (IData)(vlSelfRef.__Vcellinp__spi__adr_i)) 
                                                   & (IData)(vlSelfRef.__PVT__wb_spi_flash_ack)));
    vlSelfRef.__PVT__spi__DOT__wr_spsr = ((IData)(vlSelfRef.__PVT__spi__DOT__wb_wr) 
                                          & (1U == (IData)(vlSelfRef.__Vcellinp__spi__adr_i)));
    vlSelfRef.__PVT__spi__DOT__wfwe = ((IData)(spi__DOT____VdfgRegularize_h69f9610c_1_0) 
                                       & (IData)(vlSelfRef.__PVT__wb_io_we));
    vlSelfRef.__PVT__spi__DOT__rfre = ((~ (IData)(vlSelfRef.__PVT__wb_io_we)) 
                                       & (IData)(spi__DOT____VdfgRegularize_h69f9610c_1_0));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__6(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__spi__DOT__wfempty = ((~ (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__gb)) 
                                          & (IData)(vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0));
    vlSelfRef.__PVT__spi__DOT__wffull = ((IData)(vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0) 
                                         & (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelfRef.__PVT__wb_io_ack = (1U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__PVT__o_wb_ack) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__PVT__wb_sys_ack) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__wb_spi_flash_ack) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__wb_uart_ack))) 
                                        >> (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    __Vtemp_2[0U] = vlSelfRef.__PVT__uart_rdt;
    __Vtemp_2[1U] = vlSelfRef.__PVT__spi_rdt;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(((1U 
                                                & (IData)(vlSelfRef.__PVT__wb_adr))
                                                ? (IData)(
                                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                           >> 0x20U))
                                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__wb_sys_rdt))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(((1U 
                                                 & (IData)(vlSelfRef.__PVT__wb_adr))
                                                 ? (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                            >> 0x20U))
                                                 : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__wb_sys_rdt))) 
                             >> 0x20U));
    vlSelfRef.__PVT__wb_io_rdt = (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U)))
                                    ? 0U : (__Vtemp_2[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))))) 
                                  | (__Vtemp_2[(3U 
                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U) 
                                                   >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__7(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(((((0x4040000000ULL == (0x1fc40000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__8(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren 
        = (IData)(((((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                    & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                   & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                  & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & (0x6000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                  ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3 
            = (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x18U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3 = 0U;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3) 
                  | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                        & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                            & (0xe400000000ULL == (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                           | ((0x3cU == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))) 
                              | (0x3dU == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))))))
                  ? (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3))
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__9(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 2U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din 
                = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)
                    ? 3U : 4U);
        }
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din 
            = (7U & ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))
                      ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)
                          ? 3U : 4U) : ((~ (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0xeU))) 
                                        & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__10(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren 
        = (IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren 
        = (IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__17(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__17\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__core_rst_l = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                               & (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__core_rst_l)) 
                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__15(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (IData)(((0x1400000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (IData)(((0x1000000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                       | (IData)((((8U == (0xff08U 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                   & (8U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
                                  & (~ (IData)((0U 
                                                != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                       ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr)
                       : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__16(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
            ? ((0xff00U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 8U)) 
               | ((0x78U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x15U)) << 3U)) 
                  | (((IData)((0x100000ULL == (0x3fc100000ULL 
                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                      << 2U) | (((IData)((0x80000ULL 
                                          == (0x3fc080000ULL 
                                              & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                 << 1U) | (1U & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x12U)))))))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((1U & 
                                              (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | ((2U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                | ((4U 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                   | (8U 
                                                      & (- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__19(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__19\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 = 0;
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 = 0;
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_95;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_95 = 0;
    CData/*1:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_296;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_296 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_323;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_323 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_324;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_324 = 0;
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req)) 
                 & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xdU)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req) 
                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                   >> 1U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
        = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U];
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0x19U) | (0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                      << 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0x12U) | (0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                     >> 7U)));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                        << 0x12U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
        = (0x7ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                     >> 0xeU));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
        = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
            << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                      >> 0x19U));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
        = ((0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U]) 
           | (0x1ffffffU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                             << 7U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                       >> 0x19U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
        = ((0x1ffffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU]) 
           | (0xfe000000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
        = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
             << 0x19U) | (0x1fc0000U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                        >> 7U))) | 
           (0x3ffffU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU]));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                        >> 7U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                                                    >> 7U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                        >> 7U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                                    >> 7U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                        >> 7U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                                    >> 7U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                        >> 7U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                                    >> 7U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                        >> 7U)) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                                    >> 7U))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
        = ((0x3ffffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                        >> 7U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                                                   << 0x19U) 
                                                  | (0x1fc0000U 
                                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                                        >> 7U)))));
    vlSelfRef.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
        = (0x7ffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                     >> 7U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | (IData)((2U == (0x802U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_mp_e4) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_mp_e4) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_76) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                       | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_wb) 
                                      | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4))))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                >> 3U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
           | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_219));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_halt_idle_any) 
           & (IData)((((0xc0000U == (0xc0400U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                       & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))) 
                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_data));
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0 
            = ((0xf00U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
        = (0xfU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_data));
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0 
            = ((0xf00U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
        = (0xfU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_data));
    } else if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0 
            = ((0xf00U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_h565e680a__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
        = (0xfU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_wb 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                            & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x10U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 3U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & (((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                               >> 3U)) & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 4U)) 
                                          & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                & ((~ 
                                                    (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                     >> 0x15U)) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)))))))));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_202 = (1U 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4) 
                                                     | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                         >> 0xcU) 
                                                        | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & (((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xeU) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty) 
                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken))) 
                 | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                    & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0x11U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xeU)) & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                              >> 3U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty) 
                                        & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req)) 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken)))) 
                            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_339)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_h71a4c058__0) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_wb) 
           | ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
             << 9U) | ((((0x1ffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[0U] 
                                    >> 6U)) == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__exu_mp_valid) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1) 
                              & ((3U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[1U] 
                                        >> 0x16U)) 
                                 == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))))) 
                       << 8U)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                   << 4U) | (((8U & 
                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[0U] 
                                                << 3U)) 
                                              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((0x7ffffffeU 
                                                     & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_wb) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 1U))) 
                                                    | (0xfffffffeU 
                                                       & (((~ 
                                                            ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 2U)) 
                                                           << 1U) 
                                                          & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout))))) 
                                                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb) 
                  | (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
                      & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state)) 
                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                             >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                        & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 2U)) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                                              >> 1U))))) 
                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse))))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)
                ? 0U : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb)
                         ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb) 
                  | (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
                      & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state)) 
                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                             >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                        & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 2U)) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                                              >> 1U))))) 
                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse))))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse)
                ? 0U : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb)
                         ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_84 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 2U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff) 
                            | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_202))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
           & (IData)((0U == (0x20004U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                          >> 3U) & (0x30U == (0x70U 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
                    & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xeU)) & ((((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                        >> 9U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual)) 
                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                      & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                         & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                >> 9U)) 
                                            & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 0xeU)))))) 
                                  | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)) 
                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
            = (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_data) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
            = (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_data) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_data 
            = (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_data) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                 | ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))
                           ? (((- (IData)(((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 3U)) 
                                           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)) 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_wb))))) 
                               & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                  >> 1U)) | (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout) 
                                             | ((- (IData)(
                                                           ((~ 
                                                             (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                              >> 3U)) 
                                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                                & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)))
                           : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | ((~ ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f))) 
                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 4U) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                               & (~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xeU))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb) 
                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                        | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                           >> 1U))))) ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                                          ? ((0x3f80U 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                             | (((0x40U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((~ 
                                                                     ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                      >> 7U)) 
                                                                    & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                        >> 0xbU) 
                                                                       & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)) 
                                                                          & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))))) 
                                                     << 4U)) 
                                                 | ((0x30U 
                                                     & ((- (IData)(
                                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                    & ((~ 
                                                                        ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                         >> 7U)) 
                                                                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                                        << 4U)) 
                                                    | ((0x10U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)) 
                                                                          & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                             >> 7U))))) 
                                                           << 4U)) 
                                                       | (0x20U 
                                                          & ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                             << 4U))))) 
                                                | (0xfU 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                                          : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                                              ? ((0x2000U 
                                                  & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                     >> 2U)) 
                                                 | ((0x300U 
                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                        >> 2U)) 
                                                    | ((0x70U 
                                                        & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                       | ((2U 
                                                           & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                               << 1U) 
                                                              | (0xfffffffeU 
                                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                          | (1U 
                                                             & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                >> 2U))))))
                                              : ((0x3ffcU 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
              & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | (IData)((((2U == (0x802U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 9U)) & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4))))) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                    & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                       & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)) 
                          & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_95 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((IData)((0x10U == (0x14U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                     & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4))) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                       | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 9U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_202))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready)) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_323 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready)) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
              & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_323)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_324 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready)) 
              & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_323)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_89) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                 & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_324))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                 & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_89)) 
                    & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_324)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((~ (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)))) 
           & ((0xbU & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
              | ((7U & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int)))) 
                 | ((0x1dU & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)))) 
                    | ((0x1cU & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                       | ((0x1eU & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int)))) 
                          | ((2U & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4)))) 
                             | ((0xbU & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_e4)))) 
                                | ((1U & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)))) 
                                   | ((3U & (- (IData)(
                                                       ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4))))) 
                                      | ((4U & (- (IData)(
                                                          ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)) 
                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4))))) 
                                         | ((5U & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)) 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4))))) 
                                            | ((6U 
                                                & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))) 
                                               | (7U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_296 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_296));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int) 
                    | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_296)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_326 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                 & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & (((- (IData)(
                                                        ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i0_flush_path_e4) 
                                            | (((- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_mp_e4) 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_322)))))) 
                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i1_flush_path_e4) 
                                               | (((- (IData)(
                                                              ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                  | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                                                                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                                                        | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))))) 
                                                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_e4) 
                                                  | (((- (IData)(
                                                                 ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_pc_e4) 
                                                     | (((- (IData)(
                                                                    ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                         & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout) 
                                                        | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                                ? 
                                                               (vlSelfRef.__PVT__nmi_vec 
                                                                >> 1U)
                                                                : 
                                                               ((1U 
                                                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                                                 ? 
                                                                ((0x7ffffffeU 
                                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                                 + 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4), 1U)))
                                                                 : 
                                                                (0x7ffffffeU 
                                                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                           | ((0x7ffffffeU 
                                                               & ((- (IData)(
                                                                             ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                                | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                                                                                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4)))))) 
                                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)) 
                                                              | (((- (IData)(
                                                                             ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)) 
                                                                              & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_95)))) 
                                                                  & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout) 
                                                                 | (((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                                     & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout) 
                                                                    | (((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                                        & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout) 
                                                                       | ((- (IData)(
                                                                                ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_95) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                                                          & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                             >> 1U))))))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt) 
                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
              << 9U) | ((0x100U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                    << 6U) & (((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U)) 
                                               << 8U) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 << 6U)))) 
                        | (0x80U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_339) 
                                     << 7U) | (0xffffff80U 
                                               & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                          >> 3U))) 
                                                     << 7U))))))) 
            | (((IData)((0x204U == (0x204U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                << 6U) | (0x20U & (((IData)((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                    << 5U) | (0xffffffe0U 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                    << 3U))))))) 
           | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                << 4U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                           << 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                     << 2U))) | (((
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_84)) 
                                                   << 1U) 
                                                  | (0xfffffffeU 
                                                     & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_326) 
                                                              << 1U))))) 
                                                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_84)) 
                                                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                       & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                          & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_326)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((((0x200U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        << 1U)) | ((0x100U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              << 5U)) 
                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze) 
                                      << 7U))) | ((
                                                   ((~ 
                                                     ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                      >> 7U)) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                                                   << 6U) 
                                                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                     << 5U))) 
           | (((((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_dc3) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze))) 
                << 4U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                           << 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                     << 2U))) | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
                                                      | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4) 
                                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_75) 
                                                            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))))) 
                                                  << 1U) 
                                                 | (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_76) 
                                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                        | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                           >> 9U)) 
                                                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                      | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_75)) 
                                                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_175)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_176)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_177)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_195) 
                                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_196) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_180)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_313)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_283)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_282)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_184)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_185)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_186)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_187)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_188)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_195) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_196) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_297)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_189)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_284))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_175)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_176)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_177)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_193) 
                                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_194) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_180)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_313)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_283)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_282)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_184)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_185)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_186)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_187)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_188)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_193) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_194) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_297)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_189)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_284))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_175)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_176)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_177)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_191) 
                                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_192) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_180)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_313)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_283)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_282)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_184)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_185)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_186)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_187)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_188)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_191) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_192) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_297)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_189)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_284))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_175)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_176)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_177)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_178) 
                                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_179) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_180)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_313)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_283)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_282)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_184)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_185)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_186)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_187)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_188)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_178) 
                                                                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_179) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_297)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_295)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_189)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_284))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__20(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__20\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((- (IData)((4U == (0x7fU & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x22U)))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg) 
           | (((- (IData)((5U == (0x7fU & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U)))))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg) 
              | (((- (IData)((0x10U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_52)) 
                 | (((- (IData)((0x11U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg) 
                    | (((- (IData)((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg) 
                       | (((- (IData)((0x17U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg) 
                          | (((- (IData)((0x18U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)) 
                             | (((- (IData)((0x40U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)) 
                                | (((- (IData)((0x38U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg) 
                                   | (((- (IData)((0x39U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))) 
                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg) 
                                      | (((- (IData)(
                                                     (0x3cU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x22U)))))) 
                                          & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg) 
                                         | ((- (IData)(
                                                       (0x3dU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                    >> 0x22U)))))) 
                                            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg))))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSelfRef.__PVT__dmi_reg_rdata);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__24(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__24\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken 
        = (((((IData)(vlSelfRef.__PVT__sb_awvalid) 
              | (IData)(vlSelfRef.__PVT__sb_wvalid)) 
             | (IData)(vlSelfRef.__PVT__sb_arvalid)) 
            | (0U != (0x10100U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
              >> 8U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
        = ((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                       & VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                        >> 4U))), 
                                       VL_SHIFTL_III(32,32,32, 
                                                     (7U 
                                                      & vlSelfRef.__PVT__sb_awaddr), 3U)))) 
           | ((0xffffULL & ((- (QData)((IData)((1U 
                                                == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                            & VL_SHIFTR_QQI(64,64,32, 
                                            (((QData)((IData)(
                                                              vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__sb_awaddr 
                                                              >> 1U)), 4U)))) 
              | ((0xffffffffULL & ((- (QData)((IData)(
                                                      (2U 
                                                       == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                   & VL_SHIFTR_QQI(64,64,32, 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                          >> 4U))), 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__sb_awaddr 
                                                                     >> 2U)), 5U)))) 
                 | ((- (QData)((IData)((3U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                    & (((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                          >> 0x11U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                       >> 1U)));
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 2U);
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 1U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (IData)((0U != (0x10100U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 8U);
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error 
                    = (1U & (((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                               >> 8U) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                         >> 3U)) | (IData)(
                                                           (0x10800U 
                                                            == 
                                                            (0x10800U 
                                                             & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])))));
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 
                    = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                        & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error)));
            } else {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                    = (((IData)(vlSelfRef.__PVT__sb_awvalid) 
                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                           >> 0x13U)) | ((IData)(vlSelfRef.__PVT__sb_arvalid) 
                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            >> 0x12U)));
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en 
                    = (((IData)(vlSelfRef.__PVT__sb_wvalid) 
                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                           >> 0x11U)) | ((IData)(vlSelfRef.__PVT__sb_arvalid) 
                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            >> 0x12U)));
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 7U);
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done) 
                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done) 
                          | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((0U != (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                          >> 8U))) ? 8U
                             : 6U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((0U != (0x700U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                          | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                           | ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                              | ((5U 
                                                  == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                                 | ((6U 
                                                     == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                                    | ((7U 
                                                        == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                                       | (8U 
                                                          == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))))))))));
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 8U);
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                         | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((IData)(((0U != (0x700U 
                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                                     | (0U == (0xff020000U 
                                               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))))
                             ? 8U : 4U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                           | (0U != (0x700U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg))) 
                          | (IData)((0U == (0xff020000U 
                                            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg)))) 
                         | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                           >> 9U) & (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                        >> 1U)))) ? 
                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)
                     ? 9U : (((2U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                      >> 0x18U)) & 
                              (0xfU != (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg 
                                        >> 0x1cU)))
                              ? 5U : 3U)) : ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                              >> 0x1fU)
                                              ? 1U : 0U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                             >> 9U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                          | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                            >> 9U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren 
                = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)) 
                      | (5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate))));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req 
                = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & (9U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)));
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
            = ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                ? 0U : 2U);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                      >> 9U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                >> 1U)));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
            = ((1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                       >> 9U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                ? 2U : 1U);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & (((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                         >> 0x1fU) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 3U))) | 
                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                        >> 9U)) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                     & (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                           >> 1U))));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken) {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      << 0x16U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                   >> 0xaU)));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      << 0x1eU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                   >> 2U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bresp_q));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rresp_q));
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
                 & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_219)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = ((((0x600U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                        << 9U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                   << 8U)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                               << 7U) 
                                              | (((((0x7fffffc0U 
                                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                        >> 1U)) 
                                                    | (0x3ffffc0U 
                                                       & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                          >> 6U))) 
                                                   | (0xffffffc0U 
                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                  & (((~ 
                                                       (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 1U)) 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                     << 6U)) 
                                                 | (0x1fffffe0U 
                                                    & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                        >> 3U) 
                                                       & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           << 2U) 
                                                          & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                              << 4U) 
                                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                                << 5U)))))))) 
           | (((0x10U & (((IData)(((1U == (3U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                   & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)))) 
                          << 4U) | (0xfffffff0U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                   & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                      << 4U))))) 
               | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                   << 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                             << 2U))) | ((2U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                >> 2U)) 
                                         | (IData)(
                                                   (0x100U 
                                                    == 
                                                    (0x108U 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = ((((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken) 
               << 0x15U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt) 
                             << 0x14U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_halt_idle_any) 
                                          << 0x13U))) 
             | (((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
                 << 0x12U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                               << 0x11U) | (0x7fff0000U 
                                            & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                << 0x10U) 
                                               & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                   >> 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                     << 0x10U))))))) 
            | (((0x3fff8000U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4) 
                                 << 0xfU) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 2U))) 
                | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                    << 0xeU) | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                 & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                    | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))) 
                                << 0xdU))) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                               << 0xcU) 
                                              | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))) 
                                                 << 0xbU)))) 
           | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                << 0xaU) | (((((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_58) 
                                               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                           & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_e4))))) 
                               << 6U) & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_47) 
                                           << 9U) | 
                                          (0x100U & 
                                           ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                            << 6U))) 
                                         | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_51) 
                                             << 7U) 
                                            | (0x40U 
                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                  << 6U))))) 
                             | (((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_58) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                    | ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                        >> 9U) 
                                                       | ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 0x11U) 
                                                          | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                              >> 6U) 
                                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))))))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_e4))))) 
                                 << 6U) & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_54) 
                                             << 9U) 
                                            | (0x100U 
                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                  << 6U))) 
                                           | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_57) 
                                               << 7U) 
                                              | (0x40U 
                                                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                    << 6U)))))) 
                            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                               << 5U))) | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state) 
                                             << 4U) 
                                            | ((8U 
                                                & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & (((~ 
                                                              ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 2U)) 
                                                             << 3U) 
                                                            & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))))) 
                                               | ((IData)(
                                                          ((~ 
                                                            (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 0x11U)) 
                                                           & (0U 
                                                              != 
                                                              (0xcU 
                                                               & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))) 
                                                  << 2U))) 
                                           | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                               << 1U) 
                                              | (1U 
                                                 & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 1U))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__25(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__25\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 1U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 0x10U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0xbU));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                             >> 8U));
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                    = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                          >> 3U));
            } else {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = ((IData)(vlSelfRef.__PVT__sb_wvalid) 
                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 0x11U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelfRef.__PVT__sb_awvalid) 
                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0x13U));
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)((0xa0000U == (0xa0000U & 
                                         vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])))
                    ? 8U : ((0x80000U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])
                             ? 6U : 5U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (((IData)(vlSelfRef.__PVT__sb_awvalid) 
                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                       >> 0x13U)) | ((IData)(vlSelfRef.__PVT__sb_wvalid) 
                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                        >> 0x11U)));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 7U;
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelfRef.__PVT__sb_arvalid) 
                   & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0x12U));
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_h7f0e510a__0)
                    ? 9U : 4U);
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                          | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                            >> 4U)));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_h7f0e510a__0;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_h7f0e510a__0)
                ? 9U : 3U);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (1U & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                        >> 4U)));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_h7f0e510a__0;
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access)
                ? 2U : 1U);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                  | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                        & (IData)(((0xf000000000ULL 
                                    == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))) 
                & (~ (IData)((0U != (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU)))))) 
               & (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                     >> 0x16U)));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
               & (0U != (7U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                       >> 0xeU)))));
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtrEn)
                                            ? ((0xffU 
                                                & ((- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr), 3U)))) 
                                               | ((0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                      VL_SHIFTL_III(32,32,32, 
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                                                >> 1U)), 4U)))) 
                                                  | ((- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_wb)) 
                                       | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_error_din 
        = (((~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
            & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
               & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                  & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                      & ((0x16U == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))) 
                         | (0x17U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                     | ((0x18U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                        | ((4U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                           | (5U == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U))))))))))
            ? 1U : (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                     & ((~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                        & ((~ ((0U == (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 8U))) 
                               | (2U == (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                  >> 8U))))) 
                           | ((IData)(((0x200U == (0xff00U 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                       & ((3U == (7U 
                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                             >> 6U)))) 
                              | (((2U != (7U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))) 
                                  & (IData)((2U == 
                                             (0xff02U 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                 | (IData)((4U == (0xff04U 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                     ? 2U : (((~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                              & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                  & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                       >> 5U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0xfU)) 
                                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_fail))) 
                                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                    & (IData)(((0U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                               & ((IData)(
                                                          ((0x1000U 
                                                            == 
                                                            (0xf000U 
                                                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                           & (0U 
                                                              != 
                                                              (0x7fU 
                                                               & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                  >> 5U))))) 
                                                  | (0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                         >> 0xdU)))))))))
                              ? 3U : (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                          & (2U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))))
                                       ? 4U : (((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (IData)(
                                                              ((0x200U 
                                                                == 
                                                                (0xff00U 
                                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                  & ((IData)(
                                                                             ((0x10U 
                                                                               == 
                                                                               (0x70U 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)) 
                                                                     | (IData)(
                                                                               ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(
                                                            ((0x5800000000ULL 
                                                              == 
                                                              (0x1fc00000000ULL 
                                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)))
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0xaU))) 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                     : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 
        = ((7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg);
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg);
}

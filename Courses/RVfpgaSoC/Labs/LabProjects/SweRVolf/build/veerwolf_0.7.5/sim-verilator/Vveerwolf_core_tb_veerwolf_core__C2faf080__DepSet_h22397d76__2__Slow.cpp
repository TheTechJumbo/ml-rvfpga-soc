// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

VL_ATTR_COLD void Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_sequent__TOP__veerwolf_core_tb__veerwolf__6(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_sequent__TOP__veerwolf_core_tb__veerwolf__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__core_rst_l = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                               & (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(((((0x4040000000ULL == (0x1fc40000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren 
        = (IData)(((((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                    & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                   & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
           & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__core_rst_l));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__core_rst_l)) 
                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)));
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
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                  & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & (0x6000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                  ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (IData)(((0x1400000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren 
        = (IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren 
        = (IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (IData)(((0x1000000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
        = (0x82U | ((0xc0000U & ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))))) 
                                 << 0x12U)) | ((0x30000U 
                                                & ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))) 
                                                   << 0x10U)) 
                                               | ((0x3000U 
                                                   & ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail))) 
                                                      << 0xcU)) 
                                                  | ((0xc00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                         << 0xaU)) 
                                                     | (0x300U 
                                                        & ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))) 
                                                           << 8U)))))));
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
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg);
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren) {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
            = ((0xcU & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U)))));
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    }
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

VL_ATTR_COLD void Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_comb__TOP__veerwolf_core_tb__veerwolf__9(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_comb__TOP__veerwolf_core_tb__veerwolf__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])
            ? (((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                           >> 4U)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q);
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_61 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
           | ((IData)(vlSelfRef.__PVT__lsu_awvalid) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                 >> 0x13U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_62 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
           | ((IData)(vlSelfRef.__PVT__lsu_wvalid) 
              & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                 >> 0x11U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_dc5)) 
            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_51) 
               & ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_52) 
                     & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_53) 
                            & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_55)) 
                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_54)))) 
                        | ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_404))))))) 
           & ((~ ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                  & ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                     & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_404)) 
                        & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                               >> 2U)) & (7U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))))))) 
              & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                      ? (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                          | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                          ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                              ? (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                 >> 0x11U) : (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                              >> 0x13U))
                          : (IData)((0xa0000U == (0xa0000U 
                                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))))
                      : (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 0x12U))) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend)) 
                                        & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending))))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in;
        if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
                = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5;
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
                = (1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                         >> 0xcU));
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
                = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5;
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
                = (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in));
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5;
        } else {
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
                = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0;
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
                = (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_55));
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
                = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_59;
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
                = (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                         >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 1U))));
            vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
                = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))
                     ? 0U : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                             (((IData)(0x1fU) + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))))) 
                   | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))));
        }
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = (((((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                            >> 7U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_77))) 
                  << 7U) | (0x40U & ((0xffffffc0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_76) 
                                        << 6U)))) | 
                ((0x20U & ((0xffffffe0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_75) 
                              << 5U))) | (0x10U & (
                                                   (0xfffffff0U 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                   | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_74) 
                                                      << 4U))))) 
               | (((8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_73) 
                             << 3U))) | (4U & ((0xfffffffcU 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_72) 
                                                  << 2U)))) 
                  | ((2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_71) 
                               << 1U))) | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                                                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_70))))));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_77)
                                     ? (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                >> 0x38U))
                                     : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                >> 0x38U))) 
                                   << 0x18U) | (0xff0000U 
                                                & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_76)
                                                     ? (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                >> 0x30U))
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                >> 0x30U))) 
                                                   << 0x10U))) 
                                 | ((0xff00U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_75)
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                             >> 0x28U))) 
                                                << 8U)) 
                                    | (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_74)
                                                 ? (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                            >> 0x20U))
                                                 : (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                            >> 0x20U)))))))) 
                << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_73)
                                                 ? (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                            >> 0x18U))
                                                 : (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                            >> 0x18U))) 
                                               << 0x18U) 
                                              | (0xff0000U 
                                                 & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_72)
                                                      ? (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                 >> 0x10U))
                                                      : (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                 >> 0x10U))) 
                                                    << 0x10U))) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_71)
                                                      ? (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                 >> 8U))
                                                      : (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                 >> 8U))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_70)
                                                       ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                                       : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))))));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in 
            = (7U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer) 
                     + ((0U < (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                        & (7U > (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)) 
           & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_61) 
               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_62)) 
              | ((IData)(vlSelfRef.__PVT__lsu_arvalid) 
                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                    >> 0x12U))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_60 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))
                  ? (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
}

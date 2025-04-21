// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vveerwolf_core_tb__ConstPool__TABLE_hf7cf545c_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vveerwolf_core_tb__ConstPool__TABLE_he0576c59_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vveerwolf_core_tb__ConstPool__TABLE_h3750983d_0;
extern const VlUnpacked<CData/*3:0*/, 32768> Vveerwolf_core_tb__ConstPool__TABLE_h01f5427d_0;

VL_ATTR_COLD void Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_sequent__TOP__veerwolf_core_tb__veerwolf__0(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___stl_sequent__TOP__veerwolf_core_tb__veerwolf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ uart16550_0__DOT__wb_interface__DOT____VdfgRegularize_h187b2060_0_0;
    uart16550_0__DOT__wb_interface__DOT____VdfgRegularize_h187b2060_0_0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_105;
    rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_105 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_34;
    rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_34 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_1;
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_1 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_5;
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_5 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_9;
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_9 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_13;
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_13 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_215;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_215 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_248;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_248 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_278;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_278 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_13;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_13 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_15;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_15 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_16;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h13057dbc_1_36;
    __VdfgRegularize_h13057dbc_1_36 = 0;
    CData/*1:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*14:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    VlWide<8>/*255:0*/ __Vtemp_16;
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelfRef.__PVT__spi__DOT__rfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spi__DOT__rfifo__DOT__wp)));
    vlSelfRef.__PVT__spi__DOT__rfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spi__DOT__rfifo__DOT__rp)));
    vlSelfRef.__PVT__spi__DOT__wfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__wp)));
    vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_51 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
              >> 0x10U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgRegularize_hfc64d7aa_1_0 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_199 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                  >> 0xdU) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout)));
    vlSelfRef.spi__DOT__rfifo__DOT____VdfgRegularize_hb3f13ae0_0_0 
        = ((IData)(vlSelfRef.__PVT__spi__DOT__rfifo__DOT__rp) 
           == (IData)(vlSelfRef.__PVT__spi__DOT__rfifo__DOT__wp));
    vlSelfRef.__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelfRef.__PVT__spi__DOT__sper) 
                                                << 2U)) 
                                       | (3U & (IData)(vlSelfRef.__PVT__spi__DOT__spcr)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr5r));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr2 
        = (1U & (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr3 
        = (1U & vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr4 
        = (1U & (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_in 
        = ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_ff)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken_q))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc5_clken 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken_q))));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_count))));
    __Vtableidx3 = vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__block_value 
        = Vveerwolf_core_tb__ConstPool__TABLE_hf7cf545c_0
        [__Vtableidx3];
    __Vtableidx5 = vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vveerwolf_core_tb__ConstPool__TABLE_he0576c59_0
        [__Vtableidx5];
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((0xf00c3000U == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr4r)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))) {
                    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
                    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))) {
                    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))) {
                    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in = 1U;
                    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc4 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc4ff__dout 
            << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__tf_count)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc3 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
            << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[0U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[1U] 
        = ((0xffffffc0U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[1U]) 
           | (((0x20U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                         >> 2U)) | (0x10U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))) 
              | ((0xcU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                          << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                            >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                              >> 3U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[1U] 
        = ((0x3fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[1U]) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
              << 6U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U] 
        = ((0xffffffc0U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U]) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
              >> 0x1aU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U] 
        = ((0xfffff03fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U]) 
           | (0xffffffc0U & (((0x800U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 4U)) | 
                              (0x400U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 6U))) | 
                             ((0x300U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 8U)) | 
                              ((0x80U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 5U)) | 
                               (0x40U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                         << 3U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U] 
        = ((0xfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[2U]) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
              << 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U] 
        = ((0xfffff000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U]) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
              >> 0x14U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U] 
        = ((0xfffc0fffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U]) 
           | (0xfffff000U & (((0x20000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                           << 0xaU)) 
                              | (0x10000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                             << 0xcU))) 
                             | ((0xc000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                            << 0xeU)) 
                                | ((0x2000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                               << 0xbU)) 
                                   | (0x1000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                 << 9U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U] 
        = ((0x3ffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[3U]) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
              << 0x12U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[4U] 
        = ((0xfc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[4U]) 
           | (0xffffffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                           >> 0xeU)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[4U] 
        = ((0x3ffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__trigger_pkt_any[4U]) 
           | (0xfc0000U & (((0x800000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                          << 0x10U)) 
                            | (0x400000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 0x12U))) 
                           | ((0x300000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 0x14U)) 
                              | ((0x80000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                              << 0x11U)) 
                                 | (0x40000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                << 0xfU)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din 
        = ((9U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
              >> 0x10U));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    __Vtableidx2 = vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__fcr;
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = Vveerwolf_core_tb__ConstPool__TABLE_h3750983d_0
        [__Vtableidx2];
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_16 
        = (IData)((2U == (6U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_17 
        = (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_113 
        = (IData)((0x1002U == (0x1002U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1 
        = ((8U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (IData)(((0x208U == (0xff08U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                      & (~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_132 
        = (IData)(((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                       >> 0x10U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                                     >> 1U)));
    vlSelfRef.uart16550_0__DOT__regs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)));
    vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0 
        = ((IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__wp));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wb1_data_en 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
           >> 0x12U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout))) 
                                 >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
            << 0xeU) | (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
                        >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[3U] 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
           >> 0x12U);
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_45 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_valid_e1) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
              >> 4U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d 
        = ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst0));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__i0wb1instff__en 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 7U)) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_wen_wb)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_10 
        = (((QData)((IData)((1U & VL_REDXOR_32((0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                           >> 0x10U))))))) 
            << 0x21U) | (((QData)((IData)((1U & VL_REDXOR_32(
                                                             (0xffffU 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff)))))) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff))));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_11 
        = (((QData)((IData)((1U & VL_REDXOR_32((0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                           >> 0x30U))))))) 
            << 0x21U) | (((QData)((IData)((1U & VL_REDXOR_32(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                                         >> 0x20U))))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                       >> 0x20U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in 
        = (IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                    >> 1U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                              >> 0x10U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken_q))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_e1 
        = ((0x1fU & ((- (IData)((1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)))) 
                     & (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout 
                                >> 0x20U)))) | ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout))))) 
                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_csr_rs1_e1));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____VdfgRegularize_hf21310ce_0_0 
        = (IData)(((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                    >> 0x10U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                  >> 2U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_30 
        = (IData)((0U == (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_32 
        = (IData)((6U != (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                            >> 1U))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_319 
        = ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                  >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_318 
        = ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                  >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelfRef.__PVT__uart16550_0__DOT__wb_dat8_o = 
        (0xffU & ((4U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                   ? ((2U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                       ? ((1U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                           ? (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__scratch)
                           : (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__msr))
                       : ((1U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                           ? (((((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
                                 << 7U) | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                                           << 6U)) 
                               | (((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                   << 5U) | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                                             << 4U))) 
                              | ((((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                                   << 3U) | ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr0r))))
                           : 0U)) : ((2U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                      ? ((1U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                          ? (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                          : (0xc0U 
                                             | (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                      : ((1U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                          ? ((0x80U 
                                              & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                              ? ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                 >> 8U)
                                              : (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier))
                                          : ((0x80U 
                                              & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                              ? (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__dl)
                                              : vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                             [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e4_data_en 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e4_data_en 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wb_data_en 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout) 
                  >> 1U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
        = ((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h)) 
             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3))) 
           + ((QData)((IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
        = ((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h)) 
             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4))) 
           + ((QData)((IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
        = ((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h)) 
             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5))) 
           + ((QData)((IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
        = ((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h)) 
             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6))) 
           + ((QData)((IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_164 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                     >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_168 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                     >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)));
    vlSelfRef.__Vcellinp__spi__adr_i = ((1U & (IData)(vlSelfRef.__PVT__wb_adr))
                                         ? 0U : (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wb_adr) 
                                                    >> 1U)));
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
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 
           >= (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 
           >= (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb 
        = (1U & ((~ (IData)((0U != (0x1c0U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout))))) 
                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 6U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken 
        = (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout) 
                  >> 1U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__last_pc_e2 
        = ((2U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U])
            ? vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en 
        = (1U & ((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout)) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__ic_debug_wr_data = 
        (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1)) 
          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_reg_read 
        = ((0x3c03040U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff 
                           >> 6U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff));
    __Vtableidx6 = (0x7fffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__mask 
        = Vveerwolf_core_tb__ConstPool__TABLE_h01f5427d_0
        [__Vtableidx6];
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_58 
        = (IData)((0ULL == (3ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_54 
        = (IData)((3ULL == (3ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_62 
        = (IData)((4ULL == (6ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_20 
        = (IData)((0xaULL == (0xaULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_61 
        = (IData)((0ULL == (0xaULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_57 
        = (IData)((4ULL == (0xcULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_60 
        = (IData)((3ULL == (3ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
           & ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
               >> 0xdU) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_272 
        = ((2U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0) 
                  << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_271 
        = ((2U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1) 
                  << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
           & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                             >> 8U) | ((IData)((8U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))) 
                                       | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                          >> 4U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                            >> 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_reg 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
              << 8U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                         << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                   << 6U))) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                << 5U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                  << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                          << 2U)) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                     << 1U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg 
        = (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)) 
            << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                            << 0x1cU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                              << 0x18U)) 
                                          | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                              << 0x14U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                << 0x10U))) 
                                         | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                              << 0xcU) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                << 8U)) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                               << 4U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
              << 0x10U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                           << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                         << 0xcU) | 
                                        ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                         << 0xaU))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                << 8U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                          << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                      << 4U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                << 2U))));
    uart16550_0__DOT__wb_interface__DOT____VdfgRegularize_h187b2060_0_0 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is) 
           & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__use_mp_way 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                     >> 8U)))) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                  >> 4U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgExtracted_h1adf027f__0 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U)) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                >> 0x17U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[0U] 
        = (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[1U] 
        = (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[2U] 
        = (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[3U] 
        = (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[4U] 
        = (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[5U] 
        = (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[6U] 
        = (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[7U] 
        = (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout) 
             << 9U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout) 
                       << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout) 
                                   << 3U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__ic_debug_way = (((
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                        >> 0xeU))) 
                                                   << 3U) 
                                                  | ((2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                          >> 0xeU))) 
                                                     << 2U)) 
                                                 | (((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                          >> 0xeU))) 
                                                     << 1U) 
                                                    | (0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                           >> 0xeU)))));
    __Vtemp_16[0U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[1U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[2U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[3U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[4U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[5U] = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout;
    __Vtemp_16[6U] = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))));
    __Vtemp_16[7U] = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))) 
                              >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 5U)))
             ? 0U : (__Vtemp_16[(((IData)(0x1fU) + 
                                  (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 5U))))) 
           | (__Vtemp_16[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 5U))));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_38 
        = (IData)((0xf00c0020U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_33 
        = (IData)((0xf00c001cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_28 
        = (IData)((0xf00c0018U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_23 
        = (IData)((0xf00c0014U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_18 
        = (IData)((0xf00c0010U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_13 
        = (IData)((0xf00c000cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_8 
        = (IData)((0xf00c0008U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_3 
        = (IData)((0xf00c0004U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_39 
        = (IData)((0xf00c2020U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_34 
        = (IData)((0xf00c201cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_29 
        = (IData)((0xf00c2018U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_24 
        = (IData)((0xf00c2014U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_19 
        = (IData)((0xf00c2010U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_14 
        = (IData)((0xf00c200cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_9 
        = (IData)((0xf00c2008U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_4 
        = (IData)((0xf00c2004U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_40 
        = (IData)((0xf00c4020U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_35 
        = (IData)((0xf00c401cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_30 
        = (IData)((0xf00c4018U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_25 
        = (IData)((0xf00c4014U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_20 
        = (IData)((0xf00c4010U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_15 
        = (IData)((0xf00c400cU == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_10 
        = (IData)((0xf00c4008U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_5 
        = (IData)((0xf00c4004U == (0xfffffffcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff 
        = ((0x1fU & (- (IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                      >> 3U))))) | 
           ((0x18U & (- (IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                       >> 2U))))) | 
            ((0x10U & (- (IData)((1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                        >> 1U))))) 
             | (8U & (- (IData)((1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout))))))));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[0U] 
        = (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q);
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
            << 7U) | (IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
                              >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
            << 0xeU) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
                         >> 0x19U) | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
            << 0x15U) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
                          >> 0x12U) | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xf0000000U & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
               >> 0xbU) | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
                                    >> 0x20U)) << 0x15U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xfffffffU & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
              << 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[5U] 
        = (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
            >> 4U) | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = (((0xffffff8U & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                           << 3U)) | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      >> 4U)) | (0xf0000000U 
                                                 & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                                                    << 3U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = (((0xffffc00U & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                           << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                                         >> 0x1dU) 
                                        | (0xffffff8U 
                                           & ((IData)(
                                                      (vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
                                                       >> 0x20U)) 
                                              << 3U)))) 
           | (0xf0000000U & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                             << 0xaU)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = (((0xffe0000U & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                           << 0x11U)) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                                          >> 0x16U) 
                                         | (0xffffc00U 
                                            & ((IData)(
                                                       (vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
                                                        >> 0x20U)) 
                                               << 0xaU)))) 
           | (0xf0000000U & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                             << 0x11U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[9U] 
        = (0xffffffU & (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                         >> 0xfU) | (0xffe0000U & ((IData)(
                                                           (vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
                                                            >> 0x20U)) 
                                                   << 0x11U))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en 
        = ((0U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en 
        = ((1U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en 
        = ((2U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en 
        = ((3U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en 
        = ((4U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en 
        = ((5U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en 
        = ((6U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en 
        = ((7U == (7U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)) 
                 & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 8U) | ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                   >> 0xaU)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                >> 1U)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_13 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
            >> 0x16U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                         >> 3U));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_65 
        = (IData)((8ULL == (0xcULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_59 
        = (IData)((0ULL == (0xcULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_55 
        = (IData)((0ULL == (6ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_71 
        = (1U & ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 3U))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_69 
        = (1U & ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5 
        = ((1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
                  >> 3U)) == (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc5 
                                    >> 3U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_225 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
            << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken_q))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in 
        = ((2U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                  >> 0xeU)) | (1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                     >> 0x10U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__rem_correct 
        = ((0x21U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__count)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
              & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                         >> 0x20U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
        = ((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_dc4)) 
           << (0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc4 
                        << 3U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_155 
        = (0xffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_dc4 
                    << (0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc4 
                                 << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = ((5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           | ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
              | (7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[0U] 
        = (IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[1U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 1U))))))) 
            << 2U) | (IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                              >> 0x20U)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U] 
        = ((0xfffffff0U & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]) 
           | (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 1U))))))) 
               >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 1U)))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U] 
        = ((0xfU & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]) 
           | ((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 2U))))))) 
              << 4U));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[3U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 2U))))))) 
            >> 0x1cU) | (((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                          >> 3U))))))) 
                          << 6U) | ((IData)(((0x3ffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                       >> 2U)))))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[4U] 
        = (0xffU & (((0xfU & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              >> 0x1aU)) | ((IData)(
                                                    ((0x3ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                               >> 2U)))))) 
                                                     >> 0x20U)) 
                                            >> 0x1cU)) 
                    | ((0x30U & ((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 3U))))))) 
                                 >> 0x1aU)) | ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U)))))) 
                                                        >> 0x20U)) 
                                               << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half));
    vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half 
                      >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half));
    vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half 
                      >> 0x20U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_224 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
            << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_action 
        = ((((IData)((0x240U == (0x240U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
             << 3U) | ((IData)((0x240U == (0x260U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))) 
                       << 2U)) | (((IData)((0x240U 
                                            == (0x240U 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))) 
                                   << 1U) | (IData)(
                                                    (0x240U 
                                                     == 
                                                     (0x260U 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = ((0xff000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                 << 0x15U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                              << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                   << 9U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                             << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                         << 3U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = ((0xffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]) 
           | (0xff000000U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                              << 0x1eU) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                            << 0x1bU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                              << 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xfffffff0U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xffffffU & ((0xfffffeU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                         << 1U)) | 
                           ((0xffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                          >> 2U)) | 
                            ((0xffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                           >> 5U)) 
                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                >> 8U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xf000000fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xfffffff0U & (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                << 0x19U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                             << 0x16U)) 
                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                  << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                               << 0x10U))) 
                             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                  << 0xdU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 0xaU)) 
                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                              << 4U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = ((0xfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U]) 
           | (0xf0000000U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                              << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                           << 0x1cU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = ((0xffffff00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U]) 
           | (0xfffffffU & (((0xfffffe0U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                            << 5U)) 
                             | (0xffffffcU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 2U))) 
                            | ((0xfffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                              >> 1U)) 
                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                  >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = ((0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                << 0x1dU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                  << 0x11U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                << 8U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = ((0xff000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                 << 0x15U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                              << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                   << 9U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                             << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                         << 3U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = ((0xffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]) 
           | (0xff000000U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                              << 0x1eU) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                            << 0x1bU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                              << 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xfffffff0U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xffffffU & ((0xfffffeU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                         << 1U)) | 
                           ((0xffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                          >> 2U)) | 
                            ((0xffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                           >> 5U)) 
                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                >> 8U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xf000000fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xfffffff0U & (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                << 0x19U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                             << 0x16U)) 
                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                  << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                               << 0x10U))) 
                             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                  << 0xdU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 0xaU)) 
                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                              << 4U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = ((0xfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U]) 
           | (0xf0000000U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                              << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                           << 0x1cU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = ((0xffffff00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U]) 
           | (0xfffffffU & (((0xfffffe0U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                            << 5U)) 
                             | (0xffffffcU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                              << 2U))) 
                            | ((0xfffffffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                              >> 1U)) 
                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                  >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = ((0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                << 0x1dU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                  << 0x11U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                << 8U))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_66 
        = (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_18 
        = (IData)((4ULL == (0xcULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelfRef.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((((0U == (0x3c00U & (IData)(vlSelfRef.__PVT__wb_adr))) 
             << 3U) | ((0x400U == (0x3ff0U & (IData)(vlSelfRef.__PVT__wb_adr))) 
                       << 2U)) | (((0x410U == (0x3ff0U 
                                               & (IData)(vlSelfRef.__PVT__wb_adr))) 
                                   << 1U) | (0x800U 
                                             == (0x3c00U 
                                                 & (IData)(vlSelfRef.__PVT__wb_adr)))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_141 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)) 
           & (0xfU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_142 
        = (IData)((3U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_143 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
           & (0xfU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)));
    rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_34 
        = (((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                         >> 0x10U))))) 
           | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                          >> 0x10U))))));
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
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_15 
        = (IData)((0xcULL == (0xcULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_226 
        = (IData)((0x84000000U == (0x84000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_269 
        = (IData)((0x42000000U == (0x43000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parityeff 
        = (0xffU & ((((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                      >> 8U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parity)) 
                    | ((((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                         >> 8U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2parity)) 
                       | (((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                           >> 8U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parity)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parityeff 
        = (0xffffU & (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parity)) 
                      | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parity)) 
                         | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2parity)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
            & (0x23e00000U | ((0x8000000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                             << 0x12U)) 
                              | ((0x180000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               << 0xcU)) 
                                 | ((0x1800U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                << 6U)) 
                                    | ((0xc0U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                 << 3U)) 
                                       | (7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))))) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
               & (0x23e00000U | ((0x8000000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                << 0x12U)) 
                                 | ((0x180000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  << 0xcU)) 
                                    | ((0x1800U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   << 6U)) 
                                       | ((0xc0U & 
                                           ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                            << 3U)) 
                                          | (7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))))) 
              | (((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                  & (0x23e00000U | ((0x8000000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                   << 0x12U)) 
                                    | ((0x180000U & 
                                        ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                         << 0xcU)) 
                                       | ((0x1800U 
                                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                              << 6U)) 
                                          | ((0xc0U 
                                              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                 << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))))) 
                 | ((- (IData)((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                    & (0x23e00000U | ((0x8000000U & 
                                       ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                        << 0x12U)) 
                                      | ((0x180000U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                             << 0xcU)) 
                                         | ((0x1800U 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                << 6U)) 
                                            | ((0xc0U 
                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0 
        = ((6U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
           | (1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1 
        = ((6U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
           | (1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh 
           + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_f));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth 
           + (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretf_cout_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2 
        = (3U & ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                  >> 3U) ^ ((vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 5U) ^ (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                       >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2_delayed) 
           & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89 
        = ((~ (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
               >> 0xaU)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_110 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U)) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 2U))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_32 
        = (((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                         >> 0x18U))))) 
           | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                          >> 0x18U))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_284 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)) 
           & (0U != ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie) 
                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 1U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q)) 
           | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q)) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy 
        = (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q)) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q)) 
           | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q)) 
              | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q)) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__dout) 
              << 0x1cU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__dout) 
                           << 0x18U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__dout) 
                                          << 0x14U) 
                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__dout) 
                                            << 0x10U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout) 
                << 0xcU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout) 
                            << 8U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout) 
                                        << 4U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
            << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq 
        = (IData)(((4U == (0xcU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
        = (2U | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                  << 0xcU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
                              << 8U)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                 ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 1U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 2U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 3U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 4U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 5U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 6U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 7U) ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_163 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc5) 
                 << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_169 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc4) 
                 << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc4)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                  >> 0xeU) | (IData)((0x200U == (0x8200U 
                                                 & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__eq 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
           == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
               << 0x1eU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                            << 0x1cU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                             << 0x18U))) 
            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                 << 0x16U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                              << 0x14U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                               << 0x10U)))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                 << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                             << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                             << 8U))) 
              | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                   << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                             << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                         << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_227 
        = (IData)((0x6000000U == (0x6000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_275 
        = (IData)((0x8000000U == (0xc000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_16 
        = (IData)((0x5400000U == (0x5400000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_13 
        = (IData)((0x4400000U == (0x4400000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_15 
        = (IData)((0x5000000U == (0x7400000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_2 
        = ((0xfU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen)) 
           | (0xf0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_byteenff__dout) 
              << 0x1cU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_byteenff__dout) 
                           << 0x18U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_byteenff__dout) 
                                          << 0x14U) 
                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_byteenff__dout) 
                                            << 0x10U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_byteenff__dout) 
                << 0xcU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_byteenff__dout) 
                            << 8U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_byteenff__dout) 
                                        << 4U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_byteenff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_177 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3) 
                 << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_25 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                  >> 1U) & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 0x1fU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__eq 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
           == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[1U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[4U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[5U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[8U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[9U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xaU] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xbU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xcU] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xdU] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xeU] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xfU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x10U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x11U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x12U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x13U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x14U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x15U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x16U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x18U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x19U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU] 
        = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1eff 
        = (((((QData)((IData)((0x3fU & (- (IData)((0U 
                                                   == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
              << 0x2dU) | (((QData)((IData)((- (IData)(
                                                       (0U 
                                                        == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                            << 0xdU) | ((QData)((IData)(
                                                        (- (IData)(
                                                                   (0U 
                                                                    == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                                        >> 0x13U))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1) 
           | (((((QData)((IData)((0x3fU & (- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 << 0x2dU) | (((QData)((IData)((- (IData)(
                                                          (1U 
                                                           == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                               << 0xdU) | ((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                                           >> 0x13U))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc2) 
              | ((((QData)((IData)((0x3fU & (- (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                   << 0x2dU) | (((QData)((IData)((- (IData)(
                                                            (2U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                                 << 0xdU) | ((QData)((IData)(
                                                             (- (IData)(
                                                                        (2U 
                                                                         == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                                             >> 0x13U))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0eff 
        = (((((QData)((IData)((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0) 
           | (((((QData)((IData)((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1) 
              | ((((QData)((IData)((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                   << 0x20U) | (QData)((IData)((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_94 
        = (IData)((6U != (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
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
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_flush_vldff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_flush_vldff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_flush_vldff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_flush_vldff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_flush_vldff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_flush_vldff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_flush_vldff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_flush_vldff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____VdfgRegularize_hc4a77e58_0_5 
        = (3U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                  >> 0x11U) | (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                               >> 0x10U)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____VdfgRegularize_hc4a77e58_0_5 
        = (3U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                  >> 0x11U) | (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                               >> 0x10U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_sideeffectff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_sideeffectff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_sideeffectff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_sideeffectff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_sideeffectff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_sideeffectff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_sideeffectff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_sideeffectff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & (IData)((0x2400U == (0x2400U & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_path_final 
        = (0x7fffffffU & ((4U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                           ? vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout
                           : ((1U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)
                               ? (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                  >> 1U) : (IData)(
                                                   (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                                                    >> 1U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_drain_vldff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_drain_vldff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_drain_vldff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_drain_vldff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_drain_vldff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_drain_vldff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_drain_vldff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_drain_vldff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_264 
        = (IData)((0x400000U == (0xc00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            ? (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))
            : (7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb 
        = (IData)((0U != (0xc600U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout) 
            << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout) 
                                      << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout) 
                                       << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout))))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout) 
            << 0x10U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_szff__dout) 
              << 0xeU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_szff__dout) 
                          << 0xcU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_szff__dout) 
                                        << 0xaU) | 
                                       ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_szff__dout) 
                                        << 8U))) | 
           ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_szff__dout) 
              << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_szff__dout) 
                        << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_szff__dout) 
                                    << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_szff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__any_jal 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U])))));
    rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_105 
        = (IData)((0U != (0xc000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_6 
        = ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
           | (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mul_result_e3 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__low_e3)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__prod_e3)
            : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__prod_e3 
                       >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__any_jal 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity 
        = (((QData)((IData)(((0x40U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3)) 
                             | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                >> 0x1aU)))) << 0x20U) 
           | (QData)((IData)((((0x80000000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                               << 0x1aU)) 
                               | (0x7fff0000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                 << 5U))) 
                              | (((0x8000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                              << 0xbU)) 
                                  | (0x7f00U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                << 4U))) 
                                 | (((0x80U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                               << 4U)) 
                                     | (0x70U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                 << 3U))) 
                                    | ((8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                              << 1U)) 
                                       | ((4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                 << 2U)) 
                                          | (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_87 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                     >> 0xaU)) & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                  >> 0xaU)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__jit_in_same_region 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rvalid_unq_ff)) 
           & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity 
        = (((QData)((IData)(((0x40U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3)) 
                             | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                >> 0x1aU)))) << 0x20U) 
           | (QData)((IData)((((0x80000000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                               << 0x1aU)) 
                               | (0x7fff0000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                 << 5U))) 
                              | (((0x8000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                              << 0xbU)) 
                                  | (0x7f00U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                << 4U))) 
                                 | (((0x80U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                               << 4U)) 
                                     | (0x70U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                 << 3U))) 
                                    | ((8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                              << 1U)) 
                                       | ((4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                 << 2U)) 
                                          | (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wen_wb 
        = (1U & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                 & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                    >> 2U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dataff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dataff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dataff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dataff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))) 
                   >> 0x20U));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_235 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
            >> 2U) & ((0x1fU & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU))) 
                      == (0x1fU & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                   >> 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4 
        = (0xffU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc4) 
                    << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc4)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5 
        = (0xffU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc5) 
                    << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__bm 
        = ((0x80U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout)
            ? (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__b_ff)
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble 
        = (((~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
            & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
           | (4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_load_kill_wen 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
              >> 4U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__bm 
        = ((0x80U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout)
            ? (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__b_ff)
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3) 
                    << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____VdfgRegularize_hc4a77e58_0_5 
        = (3U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                  >> 0x11U) | (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                               >> 0x10U)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____VdfgRegularize_hc4a77e58_0_5 
        = (3U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                  >> 0x11U) | (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                               >> 0x10U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
        = ((0xffU & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff) 
           | (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout 
              << 8U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1r 
        = ((0x7c00U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                       >> 5U)) | ((0x3e0U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                              >> 7U))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_15 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_7 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_3 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3 
        = (0xffU & ((1U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                            >> 0x11U))))) 
                    | ((3U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                               >> 0x10U))))) 
                       | ((0xfU & (- (IData)((1U & 
                                              (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                               >> 0xfU))))) 
                          | (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                              >> 0xeU))))))));
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_1 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_5 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))));
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_9 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))));
    rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_13 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_223 
        = (IData)((0x8000000U == (0x88000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q), 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_data 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
                << 0x1fU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
                             << 0x1eU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0x1bU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
                               << 0x1aU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0x17U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
                               << 0x16U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 0x13U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                 << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
                  << 0xfU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
                              << 0xeU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 0xbU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                << 0xaU)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
                    << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
                              << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
                      << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1eff 
        = (((((QData)((IData)((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1) 
           | (((((QData)((IData)((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata2) 
              | ((((QData)((IData)((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                   << 0x20U) | (QData)((IData)((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_218 
        = (IData)((0x4000000U == (0xc000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q), 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_235 
        = (IData)((0U == (0x500000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_data 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_238 
        = (IData)((0x800000U == (0xc00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_252 
        = (IData)((0U == (0x3000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_234 
        = (IData)((0U == (0xc00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q), 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_data 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                >> 3U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_fifo_ready 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_full_spec_bus) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dbg_dma_bubble_bus) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dec_tlu_stall_dma_bus)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_wb 
        = (IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) & (0U != (0x600U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_37 
        = (1U & VL_REDXOR_32((0xe0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_38 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0eff 
        = (((((QData)((IData)((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0) 
           | (((((QData)((IData)((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1) 
              | ((((QData)((IData)((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                   << 0x20U) | (QData)((IData)((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata2)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_37 
        = (1U & VL_REDXOR_32((0xe0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_38 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r 
        = ((0x7c00U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                       >> 5U)) | ((0x3e0U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 7U))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_215 
        = (IData)((0U == (0x82000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_stall_ff) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4 
        = (1U & (IData)(((((0U != (0x1000002U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])) 
                           | (0U != (0x1000002U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U]))) 
                          | (0U != (0x1000002U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U]))) 
                         | (0U != (0x1000002U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U])))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_259 
        = (IData)((0x40a00000U == (0x40a00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_225 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_237 
        = (IData)((0x300000U == (0x300000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_67 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data_vld) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_vld));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_19 
        = (IData)((6U == (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_219 = (1U 
                                                  & ((0U 
                                                      != 
                                                      (0x1800U 
                                                       & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                                                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                        >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd 
        = (0x1fU & ((0x10000000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])
                     ? ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                         << 2U) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                   >> 0x1eU)) : ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  << 0x1aU) 
                                                 | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                    >> 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__isldst_dc1 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout) 
           & (IData)((0U != (0x3000U & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT____VdfgRegularize_h27cf76bb_0_2 
        = ((~ (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
               >> 0xaU)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgRegularize_hc5491226_0_15 
        = ((~ (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
               >> 0xaU)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_36 
        = (1U & (VL_REDXOR_32(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3) 
                 ^ VL_REDXOR_8(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_260 
        = (IData)((0x100000U == (0x300000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_36 
        = (1U & (VL_REDXOR_32(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3) 
                 ^ VL_REDXOR_8(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                    << 0x1eU) | (QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                     << 0xaU) 
                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[1U] 
        = ((0xffffff00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                        << 0x1eU) | (QData)((IData)(
                                                    (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                         << 0xaU) 
                                                        | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))) 
                      >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[1U] 
        = ((0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                        << 0x1eU) | (QData)((IData)(
                                                    (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                         << 0xaU) 
                                                        | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout))))))) 
              << 8U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam[2U] 
        = (0xffffU & (((IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                                  << 0xaU) 
                                                                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout))))))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout)) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout) 
                                                                     << 0xaU) 
                                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout)))))) 
                                             >> 0x20U)) 
                                    << 8U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_254 
        = (IData)((0x30000000U == (0xf8000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_279 
        = (IData)((0x40000000U == (0x48000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_247 
        = (IData)((0x3000000U == (0x3000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_278 
        = (IData)((0x40000000U == (0x44000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_233 
        = (IData)((0U == (0x300000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_270 
        = (IData)((0x41800000U == (0x41800000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_256 
        = (IData)((0x8000000U == (0xa000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_262 
        = (IData)((0x4000000U == (0x6000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT____VdfgRegularize_hc2d89e63_0_7 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc3) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257 
        = (IData)((0x200000U == (0x300000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_241 
        = (IData)((0x1000000U == (0x1800000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_248 
        = (IData)((0x78000000U == (0xf8000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_517 
        = (IData)((4U == (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_250 
        = (IData)((0xb0000000U == (0xb0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc1 
        = ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
            << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_61 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count) 
           >= (7U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                        >> 0xcU))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_51 
        = (1U & (~ (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout) 
                       << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout) 
                                 << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))) 
                    >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 0xeU)) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 5U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_valid 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout) 
             << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout) 
                       << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout) 
                                   << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout) 
             << 6U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout) 
                       << 4U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
                                   << 2U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout) 
             << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout) 
                       << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout) 
                                   << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout)));
    __VdfgRegularize_h13057dbc_1_36 = (IData)((0U != 
                                               (0x3000U 
                                                & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_data_vldff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_data_vldff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_data_vldff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_data_vldff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_data_vldff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_data_vldff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_data_vldff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_data_vldff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout) 
             << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout) 
                       << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout) 
                                   << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_341 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                >> 2U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_272 
        = (IData)((0x40000000U == (0x41000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_16 
        = (IData)((2U == (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_236 
        = (IData)((0U == (0x1800000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_dc1 
        = (0x1fffU & (((0x1000U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                   << 1U)) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1)) 
                      + (7U & ((1U & (- (IData)((1U 
                                                 & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                    >> 0x10U))))) 
                               | ((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                       >> 0xfU))))) 
                                  | (- (IData)((1U 
                                                & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                   >> 0xeU)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__br1_hashed_wb 
        = ((0xcU & ((0xfffffffcU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout)) 
                    ^ (8U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                             >> 1U)))) | (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                                                ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__br0_hashed_wb 
        = ((0xcU & ((0x7fffffcU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                                   >> 5U)) ^ (8U & 
                                              ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                                               >> 6U)))) 
           | (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                     >> 2U) ^ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                               >> 5U))));
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
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
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_wr_en1 
        = ((- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                             >> 8U)))) & ([&]() {
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in 
                    = ((6U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                              >> 3U)) | (1U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((7U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 7U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((6U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 6U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((5U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 5U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((4U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 4U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((3U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 3U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((2U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 2U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | ((IData)((1U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
                          << 1U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
                       | (IData)((0U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))));
            }(), (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_wr_en2 
        = ((- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                             >> 0xdU)))) & ([&]() {
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in 
                    = ((6U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                              >> 5U)) | (1U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                               >> 1U)));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((7U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 7U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((6U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 6U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((5U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 5U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((4U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 4U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((3U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 3U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((2U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 2U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | ((IData)((1U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
                          << 1U));
                vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
                       | (IData)((0U == (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))));
            }(), (IData)(vlSelfRef.__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_5 
        = (IData)((0U == (6U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_52 
        = ((2U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                  << 1U)) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
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
        = ((0x1ffffffU & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg) 
               << 0x1cU) | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rlast_reg) 
                            << 0x19U)));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[3U] 
        = (((0x1ffffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg) 
                           >> 4U)) | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rlast_reg) 
                                      >> 7U)) | ((0xe000000U 
                                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg) 
                                                     >> 4U)) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg 
                                                             >> 0x20U)) 
                                                    << 0x1cU)));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[4U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg 
                                   >> 0x20U)) >> 4U)) 
           | (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rid_reg) 
               << 0x1cU) | (0xe000000U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rdata_reg 
                                                   >> 0x20U)) 
                                          >> 4U))));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfffcU & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rid_reg) 
                         >> 4U)));
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfffbU & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_rvalid_reg) 
                         << 2U)));
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
    vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfU & vlSelfRef.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfff0U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_awready_reg) 
                            << 0xfU) | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_arready_reg) 
                                        << 0xeU)) | 
                          (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_wready_reg) 
                            << 0xdU) | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_bvalid_reg) 
                                        << 0xcU))) 
                         | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__ram__DOT__s_axi_bid_reg) 
                            << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff 
        = (((0x300U == (0xfffU & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                  >> 0x13U))) | (0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                     >> 0x13U)))) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
              & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 1U)) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                >> 0x18U))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgRegularize_hfc64d7aa_1_1 
        = (- (IData)((IData)((0x20800U == (0x20800U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgRegularize_hfc64d7aa_1_3 
        = (- (IData)((IData)((0x10800U == (0x10800U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgRegularize_hfc64d7aa_1_6 
        = (- (IData)((IData)((0x20000U == (0x20800U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgRegularize_hfc64d7aa_1_7 
        = (- (IData)((IData)((0x10000U == (0x10800U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = (((QData)((IData)((((((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                 ? (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                    >> 0x18U) : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                  ? 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                  >> 0x18U))) 
                               << 0x18U) | (0xff0000U 
                                            & (((4U 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                                 ? 
                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                                 >> 0x10U)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                  ? 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                  >> 0x10U))) 
                                               << 0x10U))) 
                             | ((0xff00U & (((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                              ? (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                                 >> 8U)
                                              : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                  ? 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                  >> 8U)
                                                  : 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                  >> 8U))) 
                                            << 8U)) 
                                | (0xffU & ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                             ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_dc3
                                             : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                 ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                                 : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3))))))) 
            << 0x20U) | (QData)((IData)((((((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                             ? (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                >> 0x18U)
                                             : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                 ? 
                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                 >> 0x18U))) 
                                           << 0x18U) 
                                          | (0xff0000U 
                                             & (((4U 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                  ? 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                   ? 
                                                  (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                   >> 0x10U))) 
                                                << 0x10U))) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                  ? 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                   ? 
                                                  (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                   >> 8U)
                                                   : 
                                                  (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                   >> 8U))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                   ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_dc3
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc3)
                                                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                                    : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_dc3 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_bus_data_dc3);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_errorff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_errorff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_errorff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_errorff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_errorff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_errorff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_errorff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_errorff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[1U] 
        = ((0xfffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[1U]) 
           | (0xfff00000U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U]));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt[2U] 
        = (0x3ffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U]);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2 
        = (0xfU & ((1U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                           >> 0x11U))))) 
                   | ((3U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                              >> 0x10U))))) 
                      | (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                          >> 0xfU)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nbff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nbff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nbff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nbff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nbff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nbff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nbff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nbff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0))) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                    >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1))) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                    >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2))) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                    >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3))) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                    >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw 
        = (IData)((0x4800000000ULL == (0x4800000000ULL 
                                       & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_7 
        = (IData)((0x10U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_45 
        = (IData)((0x1000U == (0x3000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_49 
        = (IData)((0U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_52 
        = (IData)((0U == (0x42000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_56 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_129 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_63 
        = (IData)((0U == (0x5000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_112 
        = (IData)((0x20U == (0x1020U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_125 
        = (IData)((0x2000U == (0x2040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_91 
        = (IData)((0x10U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_102 
        = (IData)((0U == (0xbe000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U)) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                >> 1U)));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0U] 
        = (1U | ((0xfffffffcU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0U]) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
                    << 1U)));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((7U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                          << 0x1dU) 
                                         | ((0x1ffffff8U 
                                             & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                >> 2U)) 
                                            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xd7c00U 
                                                     | (0xfU 
                                                        & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                           >> 0x1bU))))))) 
              << 3U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[1U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                        << 0x1dU) | 
                                       ((0x1ffffff8U 
                                         & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                            >> 2U)) 
                                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))))) 
                      << 0x20U) | (QData)((IData)((0xd7c00U 
                                                   | (0xfU 
                                                      & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                         >> 0x1bU))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                                      << 0x1dU) 
                                                     | ((0x1ffffff8U 
                                                         & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                            >> 2U)) 
                                                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xd7c00U 
                                                                 | (0xfU 
                                                                    & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                       >> 0x1bU)))))) 
                                  >> 0x20U)) << 3U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[2U] 
        = ((0xffffffc0U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[2U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                           << 0x1dU) 
                                          | ((0x1ffffff8U 
                                              & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                 >> 2U)) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (0xd7c00U 
                                                      | (0xfU 
                                                         & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                            >> 0x1bU)))))) 
                       >> 0x20U)) >> 0x1dU));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____VdfgRegularize_hd5a9dc55_0_19 
        = (1U & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                 | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod 
        = (IData)((((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                        >> 3U)) & (0x1000001U == (0x1000001U 
                                                  & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U]))) 
                   & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 1U))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_12 
        = (IData)((0U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_39 
        = (IData)((0U == (0x44U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_136 
        = (IData)((0x20U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_40 
        = (IData)((0x20U == (0x60U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_44 
        = (IData)((0U == (0x24U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_57 
        = (IData)((0x4000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_60 
        = (IData)((0x2040U == (0x2040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_64 
        = (IData)((8U == (0x28U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_93 
        = (IData)((4U == (0xcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_48 
        = (IData)((0U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_55 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_99 
        = (IData)((0U == (0xc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_15 
        = (IData)((0x800U == (0x2800U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_17 
        = (IData)((0x82000U == (0x82000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_19 
        = (IData)((0x400U == (0x2400U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_21 
        = (IData)((0x42000U == (0x42000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_23 
        = (IData)((0x200U == (0x2200U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_25 
        = (IData)((0x22000U == (0x22000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_27 
        = (IData)((0x100U == (0x2100U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_29 
        = (IData)((0x12000U == (0x12000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_31 
        = (IData)((0x80U == (0x2080U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_33 
        = (IData)((0xa000U == (0xa000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeze_rfpc_e4 
        = (1U & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 4U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freezerfpc_ff__dout) 
                             & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 7U))) & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                >> 2U)) 
                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                               >> 0xbU))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect) {
        vlSelfRef.__PVT__lsu_awaddr = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
        vlSelfRef.__PVT__lsu_awsize = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz;
    } else {
        vlSelfRef.__PVT__lsu_awaddr = (0xfffffff8U 
                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr);
        vlSelfRef.__PVT__lsu_awsize = 3U;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_302 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((((((0x40000000U & (((0U != (0x7fffffffU 
                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 0x1fU)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x1fU))) 
                               << 0x1eU)) | (0x20000000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffffU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x1eU)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x1eU))) 
                                                << 0x1dU))) 
              | ((0x10000000U & (((0U != (0x1fffffffU 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                   ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                 >> 0x1dU)))
                                   : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                              >> 0x1dU))) 
                                 << 0x1cU)) | (0x8000000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                               >> 0x1cU)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                               >> 0x1cU))) 
                                                  << 0x1bU)))) 
             | (((0x4000000U & (((0U != (0x7ffffffU 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                >> 0x1bU)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0x1bU))) 
                                << 0x1aU)) | (0x2000000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0x1aU)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0x1aU))) 
                                                 << 0x19U))) 
                | ((0x1000000U & (((0U != (0x1ffffffU 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                    ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                  >> 0x19U)))
                                    : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 0x19U))) 
                                  << 0x18U)) | (0x800000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x18U)))
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x18U))) 
                                                   << 0x17U))))) 
            | ((((0x400000U & (((0U != (0x7fffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 0x17U)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0x17U))) 
                               << 0x16U)) | (0x200000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x16U)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x16U))) 
                                                << 0x15U))) 
                | ((0x100000U & (((0U != (0x1fffffU 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                   ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                 >> 0x15U)))
                                   : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                              >> 0x15U))) 
                                 << 0x14U)) | (0x80000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffU 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                               >> 0x14U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                               >> 0x14U))) 
                                                  << 0x13U)))) 
               | (((0x40000U & (((0U != (0x7ffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                >> 0x13U)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0x13U))) 
                                << 0x12U)) | (0x20000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0x12U)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 0x12U))) 
                                                 << 0x11U))) 
                  | ((0x10000U & (((0U != (0x1ffffU 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                    ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                  >> 0x11U)))
                                    : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 0x11U))) 
                                  << 0x10U)) | (0x8000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x10U)))
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x10U))) 
                                                   << 0xfU)))))) 
           | (((((0x4000U & (((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                               ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 0xfU)))
                               : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 0xfU))) 
                             << 0xeU)) | (0x2000U & 
                                          (((0U != 
                                             (0x3fffU 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                             ? (~ (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 0xeU)))
                                             : (IData)(
                                                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                        >> 0xeU))) 
                                           << 0xdU))) 
                | ((0x1000U & (((0U != (0x1fffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 0xdU)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 0xdU))) 
                               << 0xcU)) | (0x800U 
                                            & (((0U 
                                                 != 
                                                 (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                            >> 0xcU)))
                                                 : (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                            >> 0xcU))) 
                                               << 0xbU)))) 
               | (((0x400U & (((0U != (0x7ffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                              >> 0xbU)))
                                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0xbU))) 
                              << 0xaU)) | (0x200U & 
                                           (((0U != 
                                              (0x3ffU 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                            >> 0xaU)))
                                              : (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                         >> 0xaU))) 
                                            << 9U))) 
                  | ((0x100U & (((0U != (0x1ffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                >> 9U)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 9U))) 
                                << 8U)) | (0x80U & 
                                           (((0U != 
                                              (0xffU 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                            >> 8U)))
                                              : (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                         >> 8U))) 
                                            << 7U))))) 
              | ((((0x40U & (((0U != (0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                               ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                             >> 7U)))
                               : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                          >> 7U))) 
                             << 6U)) | (0x20U & (((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 6U)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 6U))) 
                                                 << 5U))) 
                  | ((0x10U & (((0U != (0x1fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                               >> 5U)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                            >> 5U))) 
                               << 4U)) | (8U & (((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 4U)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 4U))) 
                                                << 3U)))) 
                 | ((4U & (((0U != (7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 3U)))
                             : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 3U))) << 2U)) 
                    | ((2U & (((0U != (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                              >> 2U)))
                                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 2U))) 
                              << 1U)) | (1U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff))
                                                ? (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                              >> 1U)))
                                                : (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                           >> 1U)))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_47 
        = (IData)((0xaU == (0xaU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((((((0x40000000U & (((0U != (0x7fffffffU 
                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 0x1fU)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x1fU))) 
                               << 0x1eU)) | (0x20000000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffffU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x1eU)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x1eU))) 
                                                << 0x1dU))) 
              | ((0x10000000U & (((0U != (0x1fffffffU 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                   ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 0x1dU)))
                                   : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 0x1dU))) 
                                 << 0x1cU)) | (0x8000000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                               >> 0x1cU)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                               >> 0x1cU))) 
                                                  << 0x1bU)))) 
             | (((0x4000000U & (((0U != (0x7ffffffU 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                >> 0x1bU)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x1bU))) 
                                << 0x1aU)) | (0x2000000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0x1aU)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0x1aU))) 
                                                 << 0x19U))) 
                | ((0x1000000U & (((0U != (0x1ffffffU 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                    ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                  >> 0x19U)))
                                    : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 0x19U))) 
                                  << 0x18U)) | (0x800000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x18U)))
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x18U))) 
                                                   << 0x17U))))) 
            | ((((0x400000U & (((0U != (0x7fffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 0x17U)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0x17U))) 
                               << 0x16U)) | (0x200000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x16U)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x16U))) 
                                                << 0x15U))) 
                | ((0x100000U & (((0U != (0x1fffffU 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                   ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 0x15U)))
                                   : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 0x15U))) 
                                 << 0x14U)) | (0x80000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffU 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                               >> 0x14U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                               >> 0x14U))) 
                                                  << 0x13U)))) 
               | (((0x40000U & (((0U != (0x7ffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                >> 0x13U)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0x13U))) 
                                << 0x12U)) | (0x20000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0x12U)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 0x12U))) 
                                                 << 0x11U))) 
                  | ((0x10000U & (((0U != (0x1ffffU 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                    ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                  >> 0x11U)))
                                    : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 0x11U))) 
                                  << 0x10U)) | (0x8000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x10U)))
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x10U))) 
                                                   << 0xfU)))))) 
           | (((((0x4000U & (((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 0xfU)))
                               : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 0xfU))) 
                             << 0xeU)) | (0x2000U & 
                                          (((0U != 
                                             (0x3fffU 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                             ? (~ (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 0xeU)))
                                             : (IData)(
                                                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                        >> 0xeU))) 
                                           << 0xdU))) 
                | ((0x1000U & (((0U != (0x1fffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 0xdU)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0xdU))) 
                               << 0xcU)) | (0x800U 
                                            & (((0U 
                                                 != 
                                                 (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 0xcU)))
                                                 : (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 0xcU))) 
                                               << 0xbU)))) 
               | (((0x400U & (((0U != (0x7ffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 0xbU)))
                                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0xbU))) 
                              << 0xaU)) | (0x200U & 
                                           (((0U != 
                                              (0x3ffU 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 0xaU)))
                                              : (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                         >> 0xaU))) 
                                            << 9U))) 
                  | ((0x100U & (((0U != (0x1ffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                >> 9U)))
                                  : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 9U))) 
                                << 8U)) | (0x80U & 
                                           (((0U != 
                                              (0xffU 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 8U)))
                                              : (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                         >> 8U))) 
                                            << 7U))))) 
              | ((((0x40U & (((0U != (0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                               ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                             >> 7U)))
                               : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                          >> 7U))) 
                             << 6U)) | (0x20U & (((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 6U)))
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 6U))) 
                                                 << 5U))) 
                  | ((0x10U & (((0U != (0x1fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                               >> 5U)))
                                 : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 5U))) 
                               << 4U)) | (8U & (((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 4U)))
                                                  : (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 4U))) 
                                                << 3U)))) 
                 | ((4U & (((0U != (7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 3U)))
                             : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 3U))) << 2U)) 
                    | ((2U & (((0U != (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                ? (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 2U)))
                                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 2U))) 
                              << 1U)) | (1U & ((1U 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff))
                                                ? (~ (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                              >> 1U)))
                                                : (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                           >> 1U)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__eq 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
           == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__any_jal 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1eff[0U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[0U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[0U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1eff[1U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[1U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[1U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[1U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1eff[2U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[2U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[2U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[2U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1eff[3U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[3U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[3U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[3U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0eff[0U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[0U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[0U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0eff[1U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[1U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[1U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[1U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0eff[2U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[2U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[2U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[2U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0eff[3U] 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[3U]) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[3U]) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[3U])));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_332 
        = (IData)((0x2000000000ULL == (0x2400000000ULL 
                                       & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ptr 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off)) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off)) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ptr 
        = (((- (IData)((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off)) 
           | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off)) 
              | ((- (IData)((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_126 
        = (IData)((0U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_127 
        = (IData)((0x1000U == (0x1040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_117 
        = (IData)((0x2000000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_53 
        = (IData)((0U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_62 
        = (IData)((0x2004000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_110 
        = (IData)((0x20U == (0x24U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_37 
        = (IData)((0U == (0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size 
        = ((4U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                  >> 2U)) | ((2U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                        >> 3U)) << 1U)) 
                             | (1U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                      >> 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d 
        = (IData)((0ULL != (0x900000000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_7 
        = (IData)((0x10U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_45 
        = (IData)((0x1000U == (0x3000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_49 
        = (IData)((0U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_52 
        = (IData)((0U == (0x42000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_56 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_129 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_63 
        = (IData)((0U == (0x5000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_112 
        = (IData)((0x20U == (0x1020U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_125 
        = (IData)((0x2000U == (0x2040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_91 
        = (IData)((0x10U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_brp_valid 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[2U] 
              >> 3U));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_105 
        = (IData)((0U == (0xc000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_59 
        = (IData)((0x30U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_43 
        = (IData)((0U == (0x3000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_275 
        = ((0x80U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                     >> 0x18U)) | (0x7fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 0xdU)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_245 
        = (IData)((0U == (0x600000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_228 
        = (IData)((0U == (0x6000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_156 
        = (IData)((4U == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_155 
        = (IData)((2U == (6U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_154 
        = (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_24 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_36 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_33 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_45 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_30 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_42 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_27 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_39 
        = (1U & VL_REDXOR_8((0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_74 
        = (IData)((0U == (0xc0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_118 
        = (IData)((0x50U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_46 
        = (IData)((0x28U == (0x28U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_47 
        = (IData)((0x14U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__bm 
        = ((0x80U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout)
            ? (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__b_ff)
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_67 
        = (IData)((0x44U == (0x44U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_12 
        = (IData)((0U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_39 
        = (IData)((0U == (0x44U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_136 
        = (IData)((0x20U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_40 
        = (IData)((0x20U == (0x60U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_44 
        = (IData)((0U == (0x24U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_57 
        = (IData)((0x4000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_60 
        = (IData)((0x2040U == (0x2040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_64 
        = (IData)((8U == (0x28U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_93 
        = (IData)((4U == (0xcU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_48 
        = (IData)((0U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_55 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_99 
        = (IData)((0U == (0xc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_15 
        = (IData)((0x800U == (0x2800U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_17 
        = (IData)((0x82000U == (0x82000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_19 
        = (IData)((0x400U == (0x2400U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_21 
        = (IData)((0x42000U == (0x42000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_23 
        = (IData)((0x200U == (0x2200U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_25 
        = (IData)((0x22000U == (0x22000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_27 
        = (IData)((0x100U == (0x2100U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_29 
        = (IData)((0x12000U == (0x12000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_31 
        = (IData)((0x80U == (0x2080U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_33 
        = (IData)((0xa000U == (0xa000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
           & ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_92 
        = (IData)((3U == (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgRegularize_h2938ac2c_0_111 
        = (IData)((0x10U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_58 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                            >> 0x11U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_126 
        = (IData)((0U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_127 
        = (IData)((0x1000U == (0x1040U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_117 
        = (IData)((0x2000000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_53 
        = (IData)((0U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_62 
        = (IData)((0x2004000U == (0x2004000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_110 
        = (IData)((0x20U == (0x24U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_37 
        = (IData)((0U == (0x18U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_59 
        = (IData)((0x30U == (0x30U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_105 
        = (IData)((0U == (0xc000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_43 
        = (IData)((0U == (0x3000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_276 
        = ((0x80U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                     >> 0x18U)) | (0x7fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0xdU)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_33 
        = ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_74 
        = (IData)((0U == (0xc0000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_118 
        = (IData)((0x50U == (0x50U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_46 
        = (IData)((0x28U == (0x28U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_47 
        = (IData)((0x14U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_66 
        = (IData)((0x44U == (0x44U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw 
        = (IData)((0x4000000000ULL == (0x4800000000ULL 
                                       & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_92 
        = (IData)((3U == (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled 
        = (((8U & (((0x1ffffff8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                    >> 3U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus) 
                                               << 3U)) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
            | (4U & (((0xffffffcU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                     >> 4U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus) 
                                                << 2U)) 
                     & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                        >> 1U)))) | ((2U & (((0x7fffffeU 
                                              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                 >> 5U)) 
                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus) 
                                                << 1U)) 
                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                               >> 2U))) 
                                     | (1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 6U) 
                                               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                 >> 3U)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgRegularize_h2938ac2c_0_111 
        = (IData)((0x10U == (0x14U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_471 
        = (IData)((1U == (3U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualtagff__dout) 
              << 0x15U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualtagff__dout) 
                           << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualtagff__dout) 
                                          << 0xfU) 
                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualtagff__dout) 
                                            << 0xcU))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualtagff__dout) 
                << 9U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualtagff__dout) 
                          << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualtagff__dout) 
                                      << 3U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualtagff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_dc5 
           << (0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
                        << 3U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_413 
        = (0xffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_dc5 
                    << (0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
                                 << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_samedwff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_samedwff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_samedwff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_samedwff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_samedwff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_samedwff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_samedwff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_samedwff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_writeff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_writeff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_writeff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_writeff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_writeff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_writeff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_writeff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_writeff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualhiff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualhiff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualhiff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualhiff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualhiff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualhiff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualhiff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualhiff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualff__dout) 
              << 7U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualff__dout) 
                        << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualff__dout) 
                                    << 5U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualff__dout) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualff__dout) 
                << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualff__dout) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualff__dout) 
                                      << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_addrff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_addrff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_addrff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
        = vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_addrff__dout;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))) 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_state_ff__dout) 
              << 0x15U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_state_ff__dout) 
                           << 0x12U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_state_ff__dout) 
                                          << 0xfU) 
                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_state_ff__dout) 
                                            << 0xcU))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_state_ff__dout) 
                << 9U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_state_ff__dout) 
                          << 6U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_state_ff__dout) 
                                      << 3U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_state_ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_data 
        = (((8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 4U)) | (4U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    >> 5U))) | ((2U 
                                                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                    >> 6U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                      >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rready_q) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_q));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bready_q) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_q));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__eq 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
           == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__any_jal 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
        = ((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_dc5)) 
           << (0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
                        << 3U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_183 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_dc5));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_182 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc4 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc4 
                       >> 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc3 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc3 
                       >> 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc2 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                       >> 3U));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_72 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)) 
           & ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff)) 
              & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                     >> 4U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__flush_lower_ff)) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_valid_e1)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5 
        = (0xfU & ((1U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                           >> 0x11U))))) 
                   | ((3U & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                              >> 0x10U))))) 
                      | (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                          >> 0xfU)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT____VdfgRegularize_hc2d89e63_0_9 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout) 
           & (IData)((0U != (0x3000U & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__flush_final_e3 
        = (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__bm 
        = ((0x80U & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout)
            ? (~ vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__b_ff)
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_dc5 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 1U) | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_dc5)) 
                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc4;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = ((0x7fffeU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in) 
           | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc4 
                    & (~ (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U) & (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc4 
                                        >> 0xbU)))))));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr6 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__tstate)));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSelfRef.__PVT__spi__DOT__wfempty = ((~ (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__gb)) 
                                          & (IData)(vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0));
    vlSelfRef.__PVT__spi__DOT__wffull = ((IData)(vlSelfRef.spi__DOT__wfifo__DOT____VdfgRegularize_hb3f13ae0_0_0) 
                                         & (IData)(vlSelfRef.__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__mcr))
            ? (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__serial_out)
            : (IData)(vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__srx_pad));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wb1_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_wb1;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__i0wb1instff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_wb1;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout;
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e4_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_e4;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e4_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wb_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip_ns 
        = (((((IData)((0U != (0x7ffffffU & ((((IData)(1U) 
                                              << (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                  >> 0x1bU)) 
                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                            | ((((IData)(1U) 
                                                 << 
                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                                  >> 0x1bU)) 
                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect) 
                                               | (((IData)(1U) 
                                                   << 
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                                    >> 0x1bU)) 
                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect)))))) 
              << 2U) << 3U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse) 
                                << 4U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse) 
                                          << 3U))) 
           | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__mexintpend) 
               << 2U) | ((2U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                >> 3U)) | (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 5U)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_50 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
              >> 0x10U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout 
        = (1U & (((0xfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__last_pc_e2) 
                  + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout)) 
                 >> 0xcU));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout;
    }
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__D 
        = (((3U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelfRef.__PVT__rvtop__DOT__ic_debug_wr_data
            : vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_11);
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__D 
        = (((2U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelfRef.__PVT__rvtop__DOT__ic_debug_wr_data
            : vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_10);
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__D 
        = (((1U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelfRef.__PVT__rvtop__DOT__ic_debug_wr_data
            : vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_11);
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__D 
        = (((0U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelfRef.__PVT__rvtop__DOT__ic_debug_wr_data
            : vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_10);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_320 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))));
    vlSelfRef.__PVT__uart16550_0__DOT__we_o = ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
                                               & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is) 
                                                  & (IData)(uart16550_0__DOT__wb_interface__DOT____VdfgRegularize_h187b2060_0_0)));
    vlSelfRef.__PVT__uart16550_0__DOT__re_o = ((~ (IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
                                               & ((IData)(vlSelfRef.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
                                                  & (IData)(uart16550_0__DOT__wb_interface__DOT____VdfgRegularize_h187b2060_0_0)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr))))
            ? (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)))))
            : 0U);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))))
            ? (7U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)))))
            : 0U);
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en 
        = ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_debug_way));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_sel_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken)
            ? (((((0U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_132)) 
                 << 8U) | ((((1U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_132)) 
                            << 7U) | (((2U == (3U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_132)) 
                                      << 6U))) | ((
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_132)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_debug_way))))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en 
        = ((- (IData)((1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                 >> 0x10U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_debug_way));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgRegularize_h25d33bec_0_32 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any)));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_58 = (1U 
                                                 & VL_REDXOR_32(
                                                                (0xe0000000U 
                                                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_38) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_33) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_28) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_23) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_18) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_13) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_8) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_3) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_38) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_33) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                         << 7U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_28) 
                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                   << 6U))) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_23) 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_18) 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                  << 4U))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_13) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                << 3U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_8) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_3) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                     << 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_39) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_34) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_29) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_24) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_19) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_14) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_9) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_4) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_39) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_34) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                         << 7U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_29) 
                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                   << 6U))) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_24) 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_19) 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                  << 4U))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_14) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                << 3U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_9) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_4) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                     << 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_40) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_35) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_30) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_25) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_20) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_15) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_10) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_5) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_40) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
              << 8U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_35) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                         << 7U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_30) 
                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                   << 6U))) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_25) 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_20) 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                  << 4U))) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_15) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                << 3U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_10) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                          << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____VdfgRegularize_h67c73ff2_0_5) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                     << 1U)));
    if (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
    } else {
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))))
                                   : 0ULL));
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))))
                                   : 0ULL));
    }
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_64 
        = ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 3U))) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_65));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_66 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                    >> 1U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_59));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_56 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_55));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_70 
        = ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 2U))) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_71));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_68 
        = ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 2U))) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_69));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_e4_ctl_en 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_225))) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__add 
        = (1U & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff 
                           >> 0x20U)) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__rem_correct)) 
                 ^ (IData)((6U == (6U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))))));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U] 
        = (IData)((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[0U])));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U] 
        = ((vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[1U] 
            << 2U) | (IData)(((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[0U])) 
                              >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U] 
        = ((vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[2U] 
            << 4U) | (vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[1U] 
                      >> 0x1eU));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U] 
        = ((vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[3U] 
            << 6U) | (vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[2U] 
                      >> 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U] 
        = (vlSelfRef.__PVT__rvtop__DOT__ic_premux_data[3U] 
           >> 0x1aU);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_224))) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                      >> 7U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status = 0U;
    if ((0U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]);
    }
    if ((1U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 3U));
    }
    if ((2U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 6U));
    }
    if ((3U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 9U));
    }
    if ((4U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xcU));
    }
    if ((5U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xfU));
    }
    if ((6U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x12U));
    }
    if ((7U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x15U));
    }
    if ((8U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x18U));
    }
    if ((9U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x1bU));
    }
    if ((0xaU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                      << 2U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                                >> 0x1eU)));
    }
    if ((0xbU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 1U));
    }
    if ((0xcU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 4U));
    }
    if ((0xdU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 7U));
    }
    if ((0xeU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xdU));
    }
    if ((0x10U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x10U));
    }
    if ((0x11U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x13U));
    }
    if ((0x12U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x16U));
    }
    if ((0x13U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x19U));
    }
    if ((0x14U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x1cU));
    }
    if ((0x15U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                      << 1U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                                >> 0x1fU)));
    }
    if ((0x16U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 2U));
    }
    if ((0x17U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 5U));
    }
    if ((0x18U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 8U));
    }
    if ((0x19U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xbU));
    }
    if ((0x1aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xeU));
    }
    if ((0x1bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x11U));
    }
    if ((0x1cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x14U));
    }
    if ((0x1dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x17U));
    }
    if ((0x1eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x1aU));
    }
    if ((0x1fU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
               >> 0x1dU);
    }
    if ((0x20U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]);
    }
    if ((0x21U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 3U));
    }
    if ((0x22U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 6U));
    }
    if ((0x23U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 9U));
    }
    if ((0x24U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xcU));
    }
    if ((0x25U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xfU));
    }
    if ((0x26U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x12U));
    }
    if ((0x27U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x15U));
    }
    if ((0x28U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x18U));
    }
    if ((0x29U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x1bU));
    }
    if ((0x2aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                      << 2U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                                >> 0x1eU)));
    }
    if ((0x2bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 1U));
    }
    if ((0x2cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 4U));
    }
    if ((0x2dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 7U));
    }
    if ((0x2eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xaU));
    }
    if ((0x2fU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xdU));
    }
    if ((0x30U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x10U));
    }
    if ((0x31U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x13U));
    }
    if ((0x32U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x16U));
    }
    if ((0x33U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x19U));
    }
    if ((0x34U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x1cU));
    }
    if ((0x35U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                      << 1U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                                >> 0x1fU)));
    }
    if ((0x36U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 2U));
    }
    if ((0x37U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 5U));
    }
    if ((0x38U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 8U));
    }
    if ((0x39U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xbU));
    }
    if ((0x3aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xeU));
    }
    if ((0x3bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x11U));
    }
    if ((0x3cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x14U));
    }
    if ((0x3dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x17U));
    }
    if ((0x3eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x1aU));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr[0U] 
        = (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_66);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr[1U] 
        = (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_66 
                   >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))) 
                   >> 0x20U));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_19 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_18) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                      >> 1U)));
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
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_21 
        = (1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                   >> 1U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_141)) 
                 | (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_140 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                        >> 1U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_141))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_18 
        = ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
             >> 2U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_143)) 
           | (IData)(((4U == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_142))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_19 
        = (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                >> 2U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_143)) 
           | ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff) 
                  >> 2U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_142)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg)));
        }
    }
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_67 
        = ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 3U))) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_15));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_21 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_15) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                      >> 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_25 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((7U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_22 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((6U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_19 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((5U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_16 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((4U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_13 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((3U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_10 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((2U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_7 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((1U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_2 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgRegularize_h77783397_0_89) 
           & ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((0U == (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_39 
        = (1U == (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_32) 
                   << 1U) | (IData)(rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_34)));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_52 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_32) 
            << 2U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_34) 
                       << 1U) | (((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                              >> 0x20U))) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                             >> 8U))))) 
                                 | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                             >> 0x20U)) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                            >> 8U))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 7U) | (IData)(((0U == (0x210U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5004U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5008U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c500cU == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5010U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5014U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5018U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c501cU == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
           | ((~ (IData)(((0xf00c5020U == (0xfffffffcU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgRegularize_h61fc55e2_0_0));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_261 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_227));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb0 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_15) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_28 
        = (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_25)) 
            & (0U != (0xffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x10U))))) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_25) 
              & (0xffU != (0xffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0xfU))))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_27 
        = (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_25)) 
            & (0U != (0xffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x18U))))) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_25) 
              & (0x1ffU != (0x1ffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 0x17U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                 >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_9 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
           & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_25 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
           & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_34 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
           & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_43 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
           & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_any 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                 >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_266 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x18U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_275) 
                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_264)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_265 
        = (IData)(((0x2000000U == (0x3000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_264)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_137 
        = ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_in_pic_any 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                 >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any 
        = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 4U)))
                        ? 0U : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                                (((IData)(0xfU) + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 4U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 4U))))) 
                      | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                         (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 4U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr), 4U)))));
    if (rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_105) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                     >> 2U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 3U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb 
            = (3U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 6U));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 2U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb 
            = (3U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 4U));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err 
        = ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rresp_ff)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_c1_clken 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & ((6U & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                     >> 2U)) == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_c1_clken 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & ((1U | (6U & (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U))) == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_wo_err 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr 
        = (((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new)) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__aout 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
           + (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__bm 
              + (1U & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                       >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_wen_wb 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_load_kill_wen)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_wen_wb));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                  >> 0x19U) & ((~ ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                   & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_load_kill_wen)) 
                                      & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                          >> 0x19U) 
                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_235))))) 
                               & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 1U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__aout 
        = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
           + (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__bm 
              + (1U & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                       >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_dc3 
        = (0xfU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
                   << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
                    << (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__store_byteen_dc3 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
           & (- (IData)((1U & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                               >> 0xcU)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_1 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_1 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_5 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_5 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_9 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_9 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_13 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
        = (rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_13 
           & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3)));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_data) 
                                           >> 4U)))));
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq = 0U;
    if ((0U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       << 3U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 2U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       << 1U)) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U])));
    }
    if ((1U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       << 2U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 1U))) | 
               ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
                | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                         >> 1U))));
    }
    if ((2U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       << 1U)) | (4U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U])) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 1U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                          >> 2U))));
    }
    if ((3U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
                | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                         >> 1U))) | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                            >> 2U)) 
                                     | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                              >> 3U))));
    }
    if ((4U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 1U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 2U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 3U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 4U))));
    }
    if ((5U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 2U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 3U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 4U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 5U))));
    }
    if ((6U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 3U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 4U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 5U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 6U))));
    }
    if ((7U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 4U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 5U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 6U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 7U))));
    }
    if ((8U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 5U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 6U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 7U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 8U))));
    }
    if ((9U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 6U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 7U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 8U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 9U))));
    }
    if ((0xaU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 7U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 8U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 9U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                        >> 0xaU))));
    }
    if ((0xbU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 8U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 9U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                       >> 0xaU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                          >> 0xbU))));
    }
    if ((0xcU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 9U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 0xaU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0xbU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                            >> 0xcU))));
    }
    if ((0xdU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xaU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xbU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0xcU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                            >> 0xdU))));
    }
    if ((0xeU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xbU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xcU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0xdU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                            >> 0xeU))));
    }
    if ((0xfU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xcU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xdU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0xeU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                            >> 0xfU))));
    }
    if ((0x10U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xdU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xeU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0xfU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                            >> 0x10U))));
    }
    if ((0x11U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xeU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xfU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x10U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x11U))));
    }
    if ((0x12U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0xfU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0x10U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x11U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x12U))));
    }
    if ((0x13U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x10U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x11U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x12U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x13U))));
    }
    if ((0x14U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x11U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x12U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x13U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x14U))));
    }
    if ((0x15U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x12U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x13U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x14U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x15U))));
    }
    if ((0x16U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x13U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x14U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x15U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x16U))));
    }
    if ((0x17U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x14U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x15U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x16U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x17U))));
    }
    if ((0x18U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x15U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x16U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x17U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x18U))));
    }
    if ((0x19U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x16U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x17U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x18U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x19U))));
    }
    if ((0x1aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x17U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x18U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x19U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x1aU))));
    }
    if ((0x1bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x18U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x19U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x1aU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x1bU))));
    }
    if ((0x1cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x19U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1aU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x1bU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x1cU))));
    }
    if ((0x1dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x1aU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1bU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x1cU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x1dU))));
    }
    if ((0x1eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x1bU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1cU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x1dU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 0x1eU))));
    }
    if ((0x1fU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                       >> 0x1cU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1dU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                         >> 0x1eU)) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                       >> 0x1fU)));
    }
    if ((0x20U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       << 3U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 2U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       << 1U)) | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U])));
    }
    if ((0x21U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       << 2U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 1U))) | 
               ((2U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
                | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                         >> 1U))));
    }
    if ((0x22U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       << 1U)) | (4U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U])) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 1U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                          >> 2U))));
    }
    if ((0x23U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
                | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                         >> 1U))) | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                            >> 2U)) 
                                     | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                              >> 3U))));
    }
    if ((0x24U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 1U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 2U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 3U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 4U))));
    }
    if ((0x25U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 2U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 3U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 4U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 5U))));
    }
    if ((0x26U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 3U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 4U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 5U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 6U))));
    }
    if ((0x27U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 4U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 5U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 6U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 7U))));
    }
    if ((0x28U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 5U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 6U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 7U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 8U))));
    }
    if ((0x29U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 6U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 7U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 8U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 9U))));
    }
    if ((0x2aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 7U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 8U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 9U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                        >> 0xaU))));
    }
    if ((0x2bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 8U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 9U))) | 
               ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                       >> 0xaU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                          >> 0xbU))));
    }
    if ((0x2cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 9U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 0xaU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0xbU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                            >> 0xcU))));
    }
    if ((0x2dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xaU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xbU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0xcU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                            >> 0xdU))));
    }
    if ((0x2eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xbU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xcU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0xdU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                            >> 0xeU))));
    }
    if ((0x2fU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xcU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xdU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0xeU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                            >> 0xfU))));
    }
    if ((0x30U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xdU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xeU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0xfU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                            >> 0x10U))));
    }
    if ((0x31U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xeU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xfU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x10U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x11U))));
    }
    if ((0x32U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0xfU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0x10U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x11U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x12U))));
    }
    if ((0x33U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x10U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x11U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x12U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x13U))));
    }
    if ((0x34U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x11U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x12U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x13U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x14U))));
    }
    if ((0x35U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x12U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x13U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x14U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x15U))));
    }
    if ((0x36U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x13U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x14U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x15U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x16U))));
    }
    if ((0x37U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x14U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x15U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x16U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x17U))));
    }
    if ((0x38U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x15U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x16U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x17U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x18U))));
    }
    if ((0x39U == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x16U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x17U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x18U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x19U))));
    }
    if ((0x3aU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x17U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x18U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x19U)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x1aU))));
    }
    if ((0x3bU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x18U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x19U))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x1aU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x1bU))));
    }
    if ((0x3cU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x19U)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1aU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x1bU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x1cU))));
    }
    if ((0x3dU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x1aU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1bU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x1cU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x1dU))));
    }
    if ((0x3eU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x1bU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1cU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x1dU)) | (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 0x1eU))));
    }
    if ((0x3fU == (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
               >> 0x1dU);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                       >> 0x1cU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1dU))) 
               | ((2U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                         >> 0x1eU)) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                       >> 0x1fU)));
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_222 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_218) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x15U));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_data) 
                                           >> 4U)))));
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_data) 
                                           >> 4U)))));
    if (vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & (((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state)) 
                  | ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state)) 
                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_wb) 
                        & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state))))) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout) 
                    >> 2U)));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_35 
        = ((((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                      >> 5U) ^ VL_REDXOR_32((0x1c000000U 
                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                    ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_37))) 
             << 5U) | (((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                 >> 4U) ^ VL_REDXOR_32(
                                                       (0x3f800U 
                                                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                               ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_38))) 
                        << 4U) | ((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                           >> 3U) ^ 
                                          VL_REDXOR_16(
                                                       (0x7f0U 
                                                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                                         ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_38))) 
                                  << 3U))) | (((1U 
                                                & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                     >> 2U) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 (0x3c3c78eU 
                                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                                                   ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgRegularize_h51c721b5_0_37))) 
                                               << 2U) 
                                              | (((1U 
                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                       >> 1U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (0x9b33366dU 
                                                                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                       ^ 
                                                       VL_REDXOR_32(
                                                                    (0x56aaad5bU 
                                                                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_35 
        = ((((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                      >> 5U) ^ VL_REDXOR_32((0x1c000000U 
                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                    ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_37))) 
             << 5U) | (((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                 >> 4U) ^ VL_REDXOR_32(
                                                       (0x3f800U 
                                                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                               ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_38))) 
                        << 4U) | ((1U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                           >> 3U) ^ 
                                          VL_REDXOR_16(
                                                       (0x7f0U 
                                                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                                         ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_38))) 
                                  << 3U))) | (((1U 
                                                & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                     >> 2U) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 (0x3c3c78eU 
                                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                                                   ^ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgRegularize_h51c721b5_0_37))) 
                                               << 2U) 
                                              | (((1U 
                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                       >> 1U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (0x9b33366dU 
                                                                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                       ^ 
                                                       VL_REDXOR_32(
                                                                    (0x56aaad5bU 
                                                                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mtvec 
        = (IData)(((0x500000U == (0x1500000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_215)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x14U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_259));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_225) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x17U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl1 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_13) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_237));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_67) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vld))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_priority)
            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_67));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_fifo_ready) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_67) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vld)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_512 
        = ((~ vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_19));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_nodma_dc1todc3 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT____VdfgRegularize_h27cf76bb_0_2) 
           | (((~ (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                   >> 0xaU)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout)) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgRegularize_hc5491226_0_15)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt1 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_13) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_260));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mepc 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_218) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_260));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_253 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1aU)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_254));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_279) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_260));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_278) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_237));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_271 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_278) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_247));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl0 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_16) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_233));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_215) 
           & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_233)));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_203 = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0x16U) 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_233));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mfdc 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_270) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_274 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_234) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt0 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_15) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb1 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgRegularize_ha30351db_0_16) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_279) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_246 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_248) 
           & (IData)((0x2000000U == (0x6000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_231 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_248) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x1aU));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_18 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_517) 
           & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_516 
        = ((~ vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____VdfgRegularize_he0ca2633_0_517));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_251 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1eU)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_250));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x14U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 >> 1U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                           >> 3U)) 
                               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb) 
                                  | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                      >> 3U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                >> 0xcU))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_fail 
        = (0U != (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                        >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr), 1U)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_50 
        = (0U != (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                        >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 1U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_slv_write 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ldst_dc3 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & ((IData)(__VdfgRegularize_h13057dbc_1_36) 
              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT____VdfgRegularize_hc2d89e63_0_7)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__is_ldst_dc3 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & ((IData)(__VdfgRegularize_h13057dbc_1_36) 
              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc3) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_dccm_rden_dc3))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | (((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffeU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffdU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (2U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 1U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffbU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (4U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 2U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffff7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (8U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 3U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 1U) & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 1U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 1U)) << 1U)) & ((0xfffffffeU 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 1U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffefU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 3U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffdfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 4U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffbfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 5U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffff7fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 6U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 2U) & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 2U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 2U)) << 2U)) & ((0xfffffffcU 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 2U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 2U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffeffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 6U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 8U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffdffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 7U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffbffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 8U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffff7ffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 9U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 3U) & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 3U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 3U)) << 3U)) & ((0xfffffff8U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 3U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 3U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffefffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 9U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffdfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xaU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffbfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xbU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffff7fffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xcU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xefU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffeffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xcU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x10U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffdffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xdU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffbffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xeU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfff7ffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xfU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffefffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0xfU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x14U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffdfffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x10U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffbfffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x11U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xff7fffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x12U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfeffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x12U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x18U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfdffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x13U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfbffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x14U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xf7ffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x15U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xf8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xefffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x1cU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xdfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xbfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0x7fffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | ((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                        >> 3U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x1fU))) << 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 = 0U;
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | (((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffeU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffdU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (2U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 1U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffbU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (4U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 2U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffff7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (8U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 3U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 1U) & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 1U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 1U)) << 1U)) & ((0xfffffffeU 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 1U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffefU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 3U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffdfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 4U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffbfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 5U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffff7fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 6U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 2U) & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 2U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 2U)) << 2U)) & ((0xfffffffcU 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 2U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 2U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffeffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 6U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 8U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffdffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 7U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffbffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 8U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffff7ffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 9U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 3U) & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 3U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 3U)) << 3U)) & ((0xfffffff8U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 3U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 3U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffefffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 9U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffdfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xaU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffbfffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xbU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffff7fffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xcU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xefU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffeffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xcU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x10U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffdffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xdU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffbffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xeU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfff7ffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xfU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffefffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0xfU) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x14U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffdfffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x10U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffbfffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x11U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xff7fffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x12U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xff8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfeffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x12U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x18U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfdffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x13U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfbffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x14U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xf7ffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000000U & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x15U) & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xf8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xefffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x1cU))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xdfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xeU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xbfffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xcU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0x7fffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | ((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                        >> 3U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x1fU))) << 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 2U))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vveerwolf_core_tb__Syms.h"


void Vveerwolf_core_tb___024root__trace_chg_0_sub_3(Vveerwolf_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root__trace_chg_0_sub_3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 10233);
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x37U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar));
        bufp->chgCData(oldp+2,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                                 ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw))),2);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                                 ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar))),2);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar));
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw))),2);
        bufp->chgCData(oldp+13,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar))),2);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+18,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar));
        bufp->chgCData(oldp+22,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw))),2);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar))),2);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+28,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
        bufp->chgCData(oldp+38,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibvalid),4);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))));
        bufp->chgCData(oldp+41,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en)))),4);
        bufp->chgCData(oldp+42,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en)))),4);
        bufp->chgCData(oldp+43,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en)))),4);
        bufp->chgCData(oldp+44,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en)))),4);
        bufp->chgCData(oldp+45,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din) 
                                   << 6U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din) 
                                             << 4U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din) 
                                     << 2U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)))),8);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in),32);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in),3);
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                     | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error));
        bufp->chgBit(oldp+52,((0xf004U == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0x10U))));
        bufp->chgBit(oldp+53,((0x1e018U == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                            >> 0xfU))));
        bufp->chgBit(oldp+54,((0xfU == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                        >> 0x1cU))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din));
        bufp->chgCData(oldp+59,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+64,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+74,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x38U])) {
        bufp->chgCData(oldp+76,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns),4);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                     >> 3U))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left));
        bufp->chgBit(oldp+82,((1U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state))));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state),2);
        bufp->chgCData(oldp+86,(((0x10U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                           << 1U)) 
                                 | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns))),5);
        bufp->chgCData(oldp+87,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en) 
                                  << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns))),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x39U])) {
        bufp->chgBit(oldp+88,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_wb));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4),31);
        bufp->chgCData(oldp+92,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4), 1U))),6);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4));
        bufp->chgCData(oldp+101,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4),5);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
        bufp->chgCData(oldp+117,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din) 
                                    << 6U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din) 
                                              << 4U)) 
                                  | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din) 
                                      << 2U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din)))),8);
        bufp->chgSData(oldp+118,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din),14);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din),2);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din),2);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din),2);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din),2);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    }
    bufp->chgBit(oldp+129,(vlSelfRef.clk));
    bufp->chgBit(oldp+130,(vlSelfRef.rst));
    bufp->chgBit(oldp+131,(vlSelfRef.i_jtag_tck));
    bufp->chgBit(oldp+132,(vlSelfRef.i_jtag_tms));
    bufp->chgBit(oldp+133,(vlSelfRef.i_jtag_tdi));
    bufp->chgBit(oldp+134,(vlSelfRef.i_jtag_trst_n));
    bufp->chgBit(oldp+135,(vlSelfRef.o_jtag_tdo));
    bufp->chgBit(oldp+136,(vlSelfRef.o_uart_tx));
    bufp->chgIData(oldp+137,(vlSelfRef.i_gpio),32);
    bufp->chgSData(oldp+138,(vlSelfRef.o_gpio),16);
    bufp->chgBit(oldp+139,(vlSymsp->TOP__veerwolf_core_tb.o_jtag_tdo));
    bufp->chgBit(oldp+140,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_hard_reset));
    bufp->chgBit(oldp+141,(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n));
    bufp->chgBit(oldp+142,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__dmireset));
    bufp->chgQData(oldp+143,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr),41);
    bufp->chgCData(oldp+145,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate),4);
    bufp->chgQData(oldp+146,((QData)((IData)(vlSelfRef.i_gpio))),64);
    bufp->chgBit(oldp+148,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)))));
    __Vtemp_2[0U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    __Vtemp_2[1U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    __Vtemp_2[2U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      << 0x14U) | vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    __Vtemp_2[3U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      >> 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                  << 0x14U));
    __Vtemp_2[4U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                      >> 0xcU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                  << 0x14U));
    __Vtemp_2[5U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      << 8U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                >> 0xcU));
    __Vtemp_2[6U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      >> 0x18U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                   << 8U));
    __Vtemp_2[7U] = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                      >> 0x18U) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                   << 8U));
    bufp->chgWData(oldp+149,(__Vtemp_2),252);
    bufp->chgWData(oldp+157,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgWData(oldp+160,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgWData(oldp+163,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgCData(oldp+166,((((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4) 
                                 ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                << 3U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3) 
                                           ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi0_irq) 
                                << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart_irq)))),8);
    bufp->chgBit(oldp+167,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__core_rst_l));
    bufp->chgCData(oldp+168,((0xffU & (- (IData)((IData)(vlSelfRef.clk))))),8);
    bufp->chgSData(oldp+169,((0xffffU & (- (IData)((IData)(vlSelfRef.clk))))),16);
    bufp->chgCData(oldp+170,((0xfU & (- (IData)((IData)(vlSelfRef.clk))))),4);
    bufp->chgBit(oldp+171,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req));
    bufp->chgBit(oldp+172,(((~ ((0U != ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid_en) 
                                        | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid))) 
                                | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                                   | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_slv_sent_q)))) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble))));
    bufp->chgIData(oldp+173,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg),32);
    bufp->chgIData(oldp+174,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg),32);
    bufp->chgIData(oldp+175,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtrEn)
                                      ? ((0xffU & (
                                                   (- (IData)(
                                                              (0U 
                                                               == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & VL_SHIFTR_III(32,32,32, vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr), 3U)))) 
                                         | ((0xffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                & VL_SHIFTR_III(32,32,32, vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                                                >> 1U)), 4U)))) 
                                            | ((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                               & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                      : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_wb)) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))),32);
    bufp->chgBit(oldp+176,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))));
    bufp->chgBit(oldp+177,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0));
    bufp->chgIData(oldp+178,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                 & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
    bufp->chgBit(oldp+179,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))));
    bufp->chgBit(oldp+180,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0));
    bufp->chgCData(oldp+181,((((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                     & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                         & ((0x16U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                            | (0x17U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                        | ((0x18U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))) 
                                           | ((4U == 
                                               (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))) 
                                              | (5U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U))))))))))
                               ? 1U : (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                        & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                           & ((~ ((0U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                       >> 8U))) 
                                                  | (2U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                         >> 8U))))) 
                                              | ((IData)(
                                                         ((0x200U 
                                                           == 
                                                           (0xff00U 
                                                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                          & ((3U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                  >> 4U))) 
                                                             | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                >> 6U)))) 
                                                 | (((2U 
                                                      != 
                                                      (7U 
                                                       & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                          >> 4U))) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (0xff02U 
                                                                 & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                                    | (IData)(
                                                              (4U 
                                                               == 
                                                               (0xff04U 
                                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                                        ? 2U : (((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                 & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                                     & ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                            >> 0xfU)) 
                                                        | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_fail))) 
                                                    | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                       & (IData)(
                                                                 ((0U 
                                                                   == 
                                                                   (0xff00U 
                                                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                  & ((IData)(
                                                                             ((0x1000U 
                                                                               == 
                                                                               (0xf000U 
                                                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                                              & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                                >> 5U))))) 
                                                                     | (0U 
                                                                        != 
                                                                        (7U 
                                                                         & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                            >> 0xdU)))))))))
                                                 ? 3U
                                                 : 
                                                (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                     & (2U 
                                                        != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))))
                                                  ? 4U
                                                  : 
                                                 (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))
                                                   ? 5U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (IData)(
                                                              ((0x200U 
                                                                == 
                                                                (0xff00U 
                                                                 & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                  & ((IData)(
                                                                             ((0x10U 
                                                                               == 
                                                                               (0x70U 
                                                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                              & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)) 
                                                                     | (IData)(
                                                                               ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(
                                                            ((0x5800000000ULL 
                                                              == 
                                                              (0x1fc00000000ULL 
                                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                             & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)))
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0xaU))) 
                                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))))),3);
    bufp->chgBit(oldp+182,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                            & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                  & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                      & ((0x16U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))) 
                                     | ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                        | ((4U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                           | (5U == 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U))))))))))));
    bufp->chgBit(oldp+183,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                            & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                & ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                     >> 5U) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 0xfU)) 
                                   | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_fail))) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                  & (IData)(((0U == 
                                              (0xff00U 
                                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                             & ((IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0xf000U 
                                                           & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                         & (0U 
                                                            != 
                                                            (0x7fU 
                                                             & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                >> 5U))))) 
                                                | (0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                       >> 0xdU)))))))))));
    bufp->chgBit(oldp+184,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (2U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))))));
    bufp->chgBit(oldp+185,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))));
    bufp->chgBit(oldp+186,((IData)(((0x5800000000ULL 
                                     == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)))));
    bufp->chgBit(oldp+187,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                            & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                               & (0x6000000000ULL == 
                                  (0x1fc00000000ULL 
                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))));
    bufp->chgBit(oldp+188,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->chgBit(oldp+189,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din));
    bufp->chgBit(oldp+190,((IData)(((((0x4040000000ULL 
                                       == (0x1fc40000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->chgBit(oldp+191,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail));
    bufp->chgBit(oldp+192,((1U & (~ ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                     | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->chgBit(oldp+193,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                               & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                  & ((IData)(((0x1000000000ULL 
                                               == (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                              & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg))) 
                                     | (IData)(((0x1400000000ULL 
                                                 == 
                                                 (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg) 
                                                   >> 1U)))))))));
    bufp->chgBit(oldp+194,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                            | (IData)((((8U == (0xff08U 
                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                        & (8U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))));
    bufp->chgIData(oldp+195,((((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x1aU)) 
                               << 0x18U) | (((0x780000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x15U)) 
                                                 << 0x13U)) 
                                             | (((IData)(
                                                         (0x100000ULL 
                                                          == 
                                                          (0x3fc100000ULL 
                                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                 << 0x12U) 
                                                | (((IData)(
                                                            (0x80000ULL 
                                                             == 
                                                             (0x3fc080000ULL 
                                                              & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                    << 0x11U) 
                                                   | (0x10000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x12U)) 
                                                         << 0x10U))))) 
                                            | (0xffffU 
                                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 2U))
                                                   : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))))),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din),32);
    bufp->chgBit(oldp+197,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren));
    bufp->chgBit(oldp+198,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                  & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                      & (0xe400000000ULL 
                                         == (0x1fc00000000ULL 
                                             & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                     | ((0x3cU == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                        | (0x3dU == 
                                           (0x7fU & (IData)(
                                                            (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))))))));
    bufp->chgBit(oldp+199,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3)))));
    bufp->chgCData(oldp+200,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din),3);
    bufp->chgBit(oldp+201,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->chgIData(oldp+202,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                               & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                 & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
    bufp->chgBit(oldp+203,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->chgIData(oldp+204,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                 & (IData)((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                            >> 0x20U))))),32);
    bufp->chgBit(oldp+205,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))));
    bufp->chgIData(oldp+206,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                    + ((1U & (- (IData)(
                                                        (0U 
                                                         == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                       | ((2U & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                          | ((4U & 
                                              (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))),32);
    bufp->chgBit(oldp+207,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))));
    bufp->chgBit(oldp+208,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                            & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                               & (IData)(((0xf000000000ULL 
                                           == (0x1fc00000000ULL 
                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))));
    bufp->chgBit(oldp+209,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
                            & (7U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))));
    bufp->chgBit(oldp+210,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l));
    bufp->chgBit(oldp+211,((1U & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                   | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                  | ((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
                                     | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                                        | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                              >> 0x11U))))))));
    bufp->chgBit(oldp+212,((((((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                              | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
                             | (0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                               >> 8U))));
    bufp->chgCData(oldp+213,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken)
                                     ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                           >> 0xaU))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bresp_q)))),2);
    bufp->chgCData(oldp+214,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken)
                                     ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                         << 0x1eU) 
                                        | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                           >> 2U)) : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rresp_q)))),2);
    bufp->chgCData(oldp+215,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                                     & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                        & (0x6000000000ULL 
                                           == (0x1fc00000000ULL 
                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                                     ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)))),2);
    bufp->chgIData(oldp+216,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtrEn)
                                          ? ((0xffU 
                                              & ((- (IData)(
                                                            (0U 
                                                             == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                 & VL_SHIFTR_III(32,32,32, vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                 VL_SHIFTL_III(32,32,32, (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr), 3U)))) 
                                             | ((0xffffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & VL_SHIFTR_III(32,32,32, vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                    VL_SHIFTL_III(32,32,32, 
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                                                >> 1U)), 4U)))) 
                                                | ((- (IData)(
                                                              (2U 
                                                               == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                          : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_wb)) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)),32);
    bufp->chgIData(oldp+217,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                     & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)),32);
    bufp->chgIData(oldp+218,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                        + ((1U & (- (IData)(
                                                            (0U 
                                                             == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                           | ((2U & 
                                               (- (IData)(
                                                          (1U 
                                                           == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                              | ((4U 
                                                  & (- (IData)(
                                                               (2U 
                                                                == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                 | (8U 
                                                    & (- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg)),32);
    bufp->chgIData(oldp+219,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                                   & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)),32);
    bufp->chgIData(oldp+220,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                     & (IData)((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                >> 0x20U))))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg)),32);
    bufp->chgBit(oldp+221,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l));
    bufp->chgCData(oldp+222,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
                               ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))),4);
    bufp->chgBit(oldp+223,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
                             : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
    bufp->chgSData(oldp+224,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                               ? ((0xff00U & ((IData)(
                                                      (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x1aU)) 
                                              << 8U)) 
                                  | ((0x78U & ((IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x15U)) 
                                               << 3U)) 
                                     | (((IData)((0x100000ULL 
                                                  == 
                                                  (0x3fc100000ULL 
                                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                         << 2U) | (
                                                   ((IData)(
                                                            (0x80000ULL 
                                                             == 
                                                             (0x3fc080000ULL 
                                                              & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x12U)))))))
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))),16);
    bufp->chgSData(oldp+225,((0xffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                          ? (IData)(
                                                    (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))
                                          : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),16);
    bufp->chgSData(oldp+226,((0xffffU & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                          | (IData)(
                                                    (((8U 
                                                       == 
                                                       (0xff08U 
                                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                      & (8U 
                                                         == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                                          ? ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                              ? (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 2U))
                                              : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr)
                                          : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)))),16);
    bufp->chgBit(oldp+227,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                   ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                                   : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->chgCData(oldp+228,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                               ? ((0xcU & ((IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x20U)) 
                                           << 2U)) 
                                  | ((2U & ((IData)(
                                                    (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x1eU)) 
                                            << 1U)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 3U)))))
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))),4);
    bufp->chgIData(oldp+229,(((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)
                               ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__dmi_reg_rdata)),32);
    bufp->chgBit(oldp+230,(((IData)(((((0x4040000000ULL 
                                        == (0x1fc40000000ULL 
                                            & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                       & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))));
    bufp->chgBit(oldp+231,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
                             | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din)
                             : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))));
    bufp->chgBit(oldp+232,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                             : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done))));
    bufp->chgBit(oldp+233,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
                             : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done))));
    bufp->chgCData(oldp+234,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
                               ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))),4);
    bufp->chgCData(oldp+235,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
                               ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
    bufp->chgCData(oldp+236,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                               ? ((0x10U & ((IData)(
                                                    (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x15U)) 
                                            << 4U)) 
                                  | ((8U & ((~ (IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x14U))) 
                                            << 3U)) 
                                     | (7U & (IData)(
                                                     (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x11U)))))
                               : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout))),5);
    bufp->chgBit(oldp+237,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
                             : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
    bufp->chgBit(oldp+238,((1U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3) 
                                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                         & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                             & (0xe400000000ULL 
                                                == 
                                                (0x1fc00000000ULL 
                                                 & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                            | ((0x3cU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                               | (0x3dU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))))))
                                   ? (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3))
                                   : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)))));
    bufp->chgBit(oldp+239,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                   ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 0x16U))
                                   : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
    bufp->chgBit(oldp+240,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                             & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal) 
                                | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                   | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_jal)) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall) 
                                  & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)))))));
    bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)
                             ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall)
                             : (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                 & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal) 
                                    | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                       | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                                | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_jal)) 
                                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall) 
                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                         & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4))))))));
    bufp->chgIData(oldp+242,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid)
                                   ? (((- (IData)(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                       & (0x6033U | 
                                          (0xf8000U 
                                           & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                              << 0xfU)))) 
                                      | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                          & (0x6033U 
                                             | (0xf80U 
                                                & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                   << 7U)))) 
                                         | (((- (IData)(
                                                        ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                             & (0x2073U 
                                                | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                   << 0x14U))) 
                                            | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                               & (0x1073U 
                                                  | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                     << 0x14U))))))
                                   : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr)) 
                              | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                                    & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2)))),32);
    bufp->chgCData(oldp+243,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en) 
                                << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en) 
                                << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)))),4);
    bufp->chgIData(oldp+244,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)
                               ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                                   & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid)
                                       ? (((- (IData)(
                                                      ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                       & (0U 
                                                          == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                           & (0x6033U 
                                              | (0xf8000U 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                    << 0xfU)))) 
                                          | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                              & (0x6033U 
                                                 | (0xf80U 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                       << 7U)))) 
                                             | (((- (IData)(
                                                            ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                             & (1U 
                                                                == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                                 & (0x2073U 
                                                    | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                       << 0x14U))) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                                   & (0x1073U 
                                                      | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                         << 0x14U))))))
                                       : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr)) 
                                  | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                                        & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2)))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)),32);
    bufp->chgBit(oldp+245,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                            | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                  | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))));
    bufp->chgIData(oldp+246,((0x7fffffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                              ? (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__nmi_vec 
                                                 >> 1U)
                                              : ((1U 
                                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                                  ? 
                                                 ((0x7ffffffeU 
                                                   & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                  + 
                                                  (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4), 1U)))
                                                  : 
                                                 (0x7ffffffeU 
                                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec))))),31);
    bufp->chgBit(oldp+247,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                            | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4))))));
    bufp->chgBit(oldp+248,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                            & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))));
    bufp->chgBit(oldp+249,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                            & (((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                               | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns))))));
    bufp->chgBit(oldp+250,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                            & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                  & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
                                     & (0x7cbU == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0x14U))))))));
    bufp->chgCData(oldp+251,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                                   & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
                                         & (0x7cbU 
                                            == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                >> 0x14U)))))) 
                               << 1U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
                                         & (0x3e580000U 
                                            == (0x7ff80000U 
                                                & vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))))),2);
    bufp->chgBit(oldp+252,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 3U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))));
    bufp->chgSData(oldp+253,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                << 0xeU) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                             << 0xdU) 
                                            | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                                                 | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                    | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                                       | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4)))) 
                                                << 0xcU) 
                                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                  << 7U)))) 
                              | (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_321) 
                                    << 6U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                              << 5U)) 
                                  | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4) 
                                      << 4U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                << 3U))) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                     << 2U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_e4)))))),15);
    bufp->chgSData(oldp+254,(((((0x600U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                           << 9U)) 
                                | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                   << 8U)) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                               << 7U) 
                                              | (((((0x7fffffc0U 
                                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                        >> 1U)) 
                                                    | (0x3ffffc0U 
                                                       & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                          >> 6U))) 
                                                   | (0xffffffc0U 
                                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                  & (((~ 
                                                       (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 1U)) 
                                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                     << 6U)) 
                                                 | (0x1fffffe0U 
                                                    & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                        >> 3U) 
                                                       & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           << 2U) 
                                                          & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                              << 4U) 
                                                             & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                                << 5U)))))))) 
                              | (((0x10U & (((IData)(
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                                      & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)))) 
                                             << 4U) 
                                            | (0xfffffff0U 
                                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                     << 4U))))) 
                                  | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                      << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                << 2U))) 
                                 | ((2U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                           >> 2U)) 
                                    | (IData)((0x100U 
                                               == (0x108U 
                                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))),11);
    bufp->chgIData(oldp+255,((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_8 
                              | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                  & vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                 | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                     & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1) 
                                    | ((- (IData)((1U 
                                                   & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                         & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                       & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))))),31);
    bufp->chgBit(oldp+256,((1U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                     | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                    | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                      >> 1U)) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                 & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                                    & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))));
    bufp->chgBit(oldp+257,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                  & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                     & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))));
    bufp->chgIData(oldp+258,(((1U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                        | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                       | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                      | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                         & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))
                               ? (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_8 
                                  | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                      & vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                     | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                         & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                          & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                             & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                           & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))))
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout)),31);
    bufp->chgIData(oldp+259,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en)
                               ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
                               : vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)),31);
    bufp->chgCData(oldp+260,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any) 
                               << 2U) | ((2U & ((0xfffeU 
                                                 & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 0x10U)) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                      >> 1U)))) 
                                         | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)))),3);
    bufp->chgBit(oldp+261,(((~ ((7U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                            & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_43) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)))));
    bufp->chgBit(oldp+262,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                  & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))))));
    bufp->chgCData(oldp+263,((7U & ((6U & (- (IData)(
                                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                                    | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                                        & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count))) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                                         & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)))))) 
                                          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)))))),3);
    bufp->chgCData(oldp+264,((7U & ((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))
                                     ? ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                        + (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))
                                     : (6U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                              >> 2U))))),3);
    bufp->chgBit(oldp+265,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_43))));
    bufp->chgCData(oldp+266,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                << 4U) | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
                                            << 1U) 
                                           | (0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2))) 
                                          << 2U)) | 
                              ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arvalid_ff) 
                                 & ((~ ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arready_unq_ff))) 
                                    & (0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)))) 
                                << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)))),5);
    bufp->chgSData(oldp+267,((((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4) 
                                 ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                << 4U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3) 
                                           ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                          << 3U)) | 
                              (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi0_irq) 
                                << 2U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart_irq) 
                                          << 1U)))),9);
    bufp->chgBit(oldp+268,((((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                      >> 0x10U)) > 
                             (0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                       ? (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt))
                                       : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt)))) 
                            & ((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)) 
                               > (0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                           ? (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl))
                                           : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl)))))));
    bufp->chgBit(oldp+269,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pl_in_q) 
                            == ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                 ? 0U : 0xfU))));
    bufp->chgCData(oldp+270,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 8U))
                                        : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]))),8);
    bufp->chgCData(oldp+271,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 4U))
                                       : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]))),4);
    bufp->chgCData(oldp+272,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+273,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0xcU))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 8U))))),4);
    bufp->chgCData(oldp+274,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 8U))
                                        : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]))),8);
    bufp->chgCData(oldp+275,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0x14U))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0x10U))))),4);
    bufp->chgCData(oldp+276,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+277,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           >> 0x1cU))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           >> 0x18U))))),4);
    bufp->chgCData(oldp+278,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                              >> 8U))
                                        : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]))),8);
    bufp->chgCData(oldp+279,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 4U))
                                       : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]))),4);
    bufp->chgCData(oldp+280,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                              >> 0x18U))))),8);
    bufp->chgCData(oldp+281,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0x10U))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0xcU))))),4);
    bufp->chgCData(oldp+282,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 0x10U))
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 8U))))),8);
    bufp->chgCData(oldp+283,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           >> 0x18U))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0x14U))))),4);
    bufp->chgCData(oldp+284,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 0x18U))))),8);
    bufp->chgCData(oldp+285,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           >> 0x1cU))))),4);
    bufp->chgCData(oldp+286,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+287,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           >> 0x1cU))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           >> 0x18U))))),4);
    bufp->chgCData(oldp+288,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                              >> 8U))
                                        : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]))),8);
    bufp->chgCData(oldp+289,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                             >> 4U))
                                       : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]))),4);
    bufp->chgCData(oldp+290,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                              >> 0x10U))
                                        : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                              >> 8U))))),8);
    bufp->chgCData(oldp+291,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                             >> 8U))
                                       : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                             >> 4U))))),4);
    bufp->chgCData(oldp+292,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__spif) 
                               << 7U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wcol) 
                                          << 6U) | 
                                         ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wffull) 
                                            << 3U) 
                                           | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfempty) 
                                              << 2U)) 
                                          | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.spi__DOT__rfifo__DOT____VdfgRegularize_hb3f13ae0_0_0) 
                                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.spi__DOT__rfifo__DOT____VdfgRegularize_hb3f13ae0_0_0))))))),8);
    bufp->chgCData(oldp+293,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem
                             [vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
    bufp->chgBit(oldp+294,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__tcnt)))) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfwe))));
    bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfwe) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wffull))));
    bufp->chgBit(oldp+296,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                             >> 2U) & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_stb) 
                                       & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_ack)) 
                                          & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_we))))));
    bufp->chgCData(oldp+297,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart16550_0__DOT__wb_dat8_o),8);
    bufp->chgCData(oldp+298,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
    __Vtemp_4[0U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart_rdt;
    __Vtemp_4[1U] = vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi_rdt;
    __Vtemp_4[2U] = (IData)((((QData)((IData)(((1U 
                                                & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
                                                ? (IData)(
                                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                           >> 0x20U))
                                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                              << 0x20U) | (QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_rdt))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)(((1U 
                                                 & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_adr))
                                                 ? (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                            >> 0x20U))
                                                 : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_rdt))) 
                             >> 0x20U));
    bufp->chgWData(oldp+299,(__Vtemp_4),128);
    bufp->chgCData(oldp+303,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__PVT__o_wb_ack) 
                                << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_ack) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_spi_flash_ack) 
                                << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_uart_ack)))),4);
    bufp->chgCData(oldp+304,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgCData(oldp+305,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->chgBit(oldp+306,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+307,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+308,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+309,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+310,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+311,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+312,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->chgCData(oldp+314,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+315,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+316,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+317,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+318,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+319,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+320,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+321,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+322,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+323,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+324,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+325,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+326,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                      >> 4U)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+327,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+328,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+329,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+330,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+331,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+332,((3U & ((1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                           & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+333,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+334,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+335,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+336,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+337,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+338,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+339,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+340,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+341,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+342,((1U & ((~ vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+343,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+344,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgCData(oldp+345,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->chgBit(oldp+346,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+347,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+348,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+349,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+350,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+351,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+352,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgIData(oldp+353,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->chgCData(oldp+354,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+355,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+356,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+357,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+358,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+359,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+360,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+361,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+362,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+363,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+364,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+365,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+366,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                      >> 0x1dU)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+367,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+368,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+369,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+370,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+371,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+372,((3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                            >> 0x19U) 
                                           & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+373,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+374,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+375,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+376,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+377,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+378,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+379,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+380,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+381,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+382,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                      >> 0x19U)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+383,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+384,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgCData(oldp+385,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->chgBit(oldp+386,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+387,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+388,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+389,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+390,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+391,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+392,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgIData(oldp+393,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->chgCData(oldp+394,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+395,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+396,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+397,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+398,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+399,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+400,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+401,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+402,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+403,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+404,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+405,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+406,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                      >> 0x16U)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+407,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+408,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+409,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+410,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+411,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+412,((3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                            >> 0x12U) 
                                           & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+413,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+414,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+415,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+416,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+417,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+418,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+419,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+420,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+421,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+422,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                      >> 0x12U)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+423,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+424,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                              | ((0xfffffffeU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                 & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 1U)))))),3);
    bufp->chgCData(oldp+425,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                              | ((0xfffffffeU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                 & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 1U)))))),3);
    bufp->chgBit(oldp+426,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+427,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+428,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 1U)))));
    bufp->chgBit(oldp+429,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 1U)))));
    bufp->chgBit(oldp+430,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+431,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+432,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  >> 2U))));
    bufp->chgBit(oldp+433,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  >> 2U))));
    bufp->chgCData(oldp+434,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+435,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+436,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+437,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+438,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+439,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+440,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+441,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+442,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+443,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+444,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+445,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+446,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+447,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+448,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+449,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+450,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->chgBit(oldp+451,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                               >> 0x16U))));
    bufp->chgCData(oldp+452,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+453,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+454,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+455,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+456,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+457,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+458,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+459,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+460,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+461,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+462,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+463,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+464,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+465,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+466,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+467,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                               >> 0x17U))));
    bufp->chgBit(oldp+468,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                          >> 0x12U))) 
                            && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                              >> 0x14U)) 
                                       | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                 >> 0x1cU)) 
                                          | (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                   >> 4U)))) 
                                      >> (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                >> 0x12U)))))));
    bufp->chgBit(oldp+469,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                          >> 8U))) 
                            && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                              >> 0x10U)) 
                                       | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                 >> 0x18U)) 
                                          | (1U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                      >> (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                >> 8U)))))));
    bufp->chgCData(oldp+470,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->chgCData(oldp+471,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                              | ((0xfffffffeU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                 & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 1U)))))),3);
    bufp->chgCData(oldp+472,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                              | ((0xfffffffeU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                 & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 1U)))))),3);
    bufp->chgBit(oldp+473,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+474,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+475,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 1U)))));
    bufp->chgBit(oldp+476,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 1U)))));
    bufp->chgBit(oldp+477,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+478,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+479,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  >> 2U))));
    bufp->chgBit(oldp+480,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  >> 2U))));
    bufp->chgCData(oldp+481,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+482,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+483,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+484,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+485,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+486,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+487,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+488,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+489,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+490,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+491,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+492,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+493,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+494,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+495,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+496,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+497,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->chgBit(oldp+498,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                               >> 0xeU))));
    bufp->chgCData(oldp+499,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+500,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+501,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+502,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+503,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+504,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+505,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+506,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+507,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+508,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+509,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+510,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+511,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+512,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+513,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                  & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+514,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                               >> 0xfU))));
    bufp->chgBit(oldp+515,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                          >> 0xaU))) 
                            && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                              >> 0x14U)) 
                                       | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                 >> 0x1cU)) 
                                          | (1U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                   >> 4U)))) 
                                      >> (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                >> 0xaU)))))));
    bufp->chgBit(oldp+516,(((2U >= (3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                            && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                              >> 0x10U)) 
                                       | ((2U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                 >> 0x18U)) 
                                          | (1U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                      >> (3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    bufp->chgCData(oldp+517,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->chgCData(oldp+518,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                      >> 3U))),4);
    bufp->chgBit(oldp+519,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+520,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 1U))))));
    bufp->chgCData(oldp+521,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                      >> 3U))),4);
    bufp->chgBit(oldp+522,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+523,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                      >> 0x19U) & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                                   >> 1U))))));
    bufp->chgCData(oldp+524,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                      >> 3U))),4);
    bufp->chgBit(oldp+525,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+526,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                      >> 0x12U) & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                                   >> 1U))))));
}

void Vveerwolf_core_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root__trace_cleanup\n"); );
    // Init
    Vveerwolf_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vveerwolf_core_tb___024root*>(voidSelf);
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x4dU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

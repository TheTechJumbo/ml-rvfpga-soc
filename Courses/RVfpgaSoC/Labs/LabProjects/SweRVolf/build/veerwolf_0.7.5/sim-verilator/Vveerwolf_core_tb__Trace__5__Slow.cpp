// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vveerwolf_core_tb__Syms.h"


VL_ATTR_COLD void Vveerwolf_core_tb___024root__trace_full_0_sub_3(Vveerwolf_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root__trace_full_0_sub_3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    bufp->fullBit(oldp+10233,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw));
    bufp->fullBit(oldp+10234,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar));
    bufp->fullCData(oldp+10235,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw))),2);
    bufp->fullCData(oldp+10236,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar))),2);
    bufp->fullBit(oldp+10237,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10238,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10239,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10240,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10241,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10242,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10243,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw));
    bufp->fullBit(oldp+10244,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar));
    bufp->fullCData(oldp+10245,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw))),2);
    bufp->fullCData(oldp+10246,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar))),2);
    bufp->fullBit(oldp+10247,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10248,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10249,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10250,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10251,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10252,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10253,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw));
    bufp->fullBit(oldp+10254,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar));
    bufp->fullCData(oldp+10255,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw))),2);
    bufp->fullCData(oldp+10256,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar))),2);
    bufp->fullBit(oldp+10257,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10258,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10259,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10260,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10261,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10262,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10263,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in));
    bufp->fullBit(oldp+10264,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1));
    bufp->fullBit(oldp+10265,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0));
    bufp->fullBit(oldp+10266,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid));
    bufp->fullBit(oldp+10267,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read));
    bufp->fullBit(oldp+10268,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write));
    bufp->fullBit(oldp+10269,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr));
    bufp->fullBit(oldp+10270,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
    bufp->fullCData(oldp+10271,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibvalid),4);
    bufp->fullBit(oldp+10272,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en));
    bufp->fullBit(oldp+10273,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))));
    bufp->fullCData(oldp+10274,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en)))),4);
    bufp->fullCData(oldp+10275,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en)))),4);
    bufp->fullCData(oldp+10276,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en)))),4);
    bufp->fullCData(oldp+10277,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en)))),4);
    bufp->fullCData(oldp+10278,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din) 
                                   << 6U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din) 
                                             << 4U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din) 
                                     << 2U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)))),8);
    bufp->fullBit(oldp+10279,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in));
    bufp->fullIData(oldp+10280,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in),32);
    bufp->fullCData(oldp+10281,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in),3);
    bufp->fullBit(oldp+10282,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                     | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))));
    bufp->fullBit(oldp+10283,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error));
    bufp->fullBit(oldp+10284,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error));
    bufp->fullBit(oldp+10285,((0xf004U == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0x10U))));
    bufp->fullBit(oldp+10286,((0x1e018U == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                            >> 0xfU))));
    bufp->fullBit(oldp+10287,((0xfU == (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                        >> 0x1cU))));
    bufp->fullBit(oldp+10288,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10289,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10290,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullBit(oldp+10291,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din));
    bufp->fullCData(oldp+10292,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10293,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10294,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10295,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10296,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10297,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10298,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10299,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10300,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10301,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10302,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10303,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10304,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10305,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10306,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10307,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10308,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en));
    bufp->fullCData(oldp+10309,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns),4);
    bufp->fullBit(oldp+10310,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en));
    bufp->fullBit(oldp+10311,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                     >> 3U))));
    bufp->fullBit(oldp+10312,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right));
    bufp->fullBit(oldp+10313,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2));
    bufp->fullBit(oldp+10314,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left));
    bufp->fullBit(oldp+10315,((1U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state))));
    bufp->fullBit(oldp+10316,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns));
    bufp->fullBit(oldp+10317,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1));
    bufp->fullCData(oldp+10318,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state),2);
    bufp->fullCData(oldp+10319,(((0x10U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                           << 1U)) 
                                 | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns))),5);
    bufp->fullCData(oldp+10320,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en) 
                                  << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns))),2);
    bufp->fullBit(oldp+10321,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_wb));
    bufp->fullBit(oldp+10322,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
    bufp->fullBit(oldp+10323,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4));
    bufp->fullIData(oldp+10324,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4),31);
    bufp->fullCData(oldp+10325,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4), 1U))),6);
    bufp->fullBit(oldp+10326,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int));
    bufp->fullBit(oldp+10327,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int));
    bufp->fullBit(oldp+10328,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int));
    bufp->fullBit(oldp+10329,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
    bufp->fullBit(oldp+10330,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    bufp->fullBit(oldp+10331,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi));
    bufp->fullBit(oldp+10332,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid));
    bufp->fullBit(oldp+10333,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4));
    bufp->fullCData(oldp+10334,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_e4),5);
    bufp->fullBit(oldp+10335,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts));
    bufp->fullBit(oldp+10336,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt));
    bufp->fullBit(oldp+10337,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
    bufp->fullBit(oldp+10338,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
    bufp->fullBit(oldp+10339,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty));
    bufp->fullBit(oldp+10340,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
    bufp->fullBit(oldp+10341,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
    bufp->fullBit(oldp+10342,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
    bufp->fullBit(oldp+10343,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
    bufp->fullBit(oldp+10344,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
    bufp->fullBit(oldp+10345,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
    bufp->fullBit(oldp+10346,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
    bufp->fullBit(oldp+10347,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
    bufp->fullBit(oldp+10348,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req));
    bufp->fullBit(oldp+10349,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
    bufp->fullCData(oldp+10350,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din) 
                                   << 6U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din) 
                                             << 4U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din) 
                                     << 2U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din)))),8);
    bufp->fullSData(oldp+10351,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din),14);
    bufp->fullCData(oldp+10352,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din),2);
    bufp->fullCData(oldp+10353,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din),2);
    bufp->fullCData(oldp+10354,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din),2);
    bufp->fullCData(oldp+10355,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din),2);
    bufp->fullBit(oldp+10356,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10357,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10358,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10359,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10360,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10361,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10362,(vlSelfRef.clk));
    bufp->fullBit(oldp+10363,(vlSelfRef.rst));
    bufp->fullBit(oldp+10364,(vlSelfRef.i_jtag_tck));
    bufp->fullBit(oldp+10365,(vlSelfRef.i_jtag_tms));
    bufp->fullBit(oldp+10366,(vlSelfRef.i_jtag_tdi));
    bufp->fullBit(oldp+10367,(vlSelfRef.i_jtag_trst_n));
    bufp->fullBit(oldp+10368,(vlSelfRef.o_jtag_tdo));
    bufp->fullBit(oldp+10369,(vlSelfRef.o_uart_tx));
    bufp->fullIData(oldp+10370,(vlSelfRef.i_gpio),32);
    bufp->fullSData(oldp+10371,(vlSelfRef.o_gpio),16);
    bufp->fullBit(oldp+10372,(vlSymsp->TOP__veerwolf_core_tb.o_jtag_tdo));
    bufp->fullBit(oldp+10373,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_hard_reset));
    bufp->fullBit(oldp+10374,(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n));
    bufp->fullBit(oldp+10375,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__dmireset));
    bufp->fullQData(oldp+10376,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr),41);
    bufp->fullCData(oldp+10378,(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate),4);
    bufp->fullQData(oldp+10379,((QData)((IData)(vlSelfRef.i_gpio))),64);
    bufp->fullBit(oldp+10381,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)))));
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
    bufp->fullWData(oldp+10382,(__Vtemp_2),252);
    bufp->fullWData(oldp+10390,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullWData(oldp+10393,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullWData(oldp+10396,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullCData(oldp+10399,((((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4) 
                                    ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                   << 3U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3) 
                                              ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi0_irq) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart_irq)))),8);
    bufp->fullBit(oldp+10400,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__core_rst_l));
    bufp->fullCData(oldp+10401,((0xffU & (- (IData)((IData)(vlSelfRef.clk))))),8);
    bufp->fullSData(oldp+10402,((0xffffU & (- (IData)((IData)(vlSelfRef.clk))))),16);
    bufp->fullCData(oldp+10403,((0xfU & (- (IData)((IData)(vlSelfRef.clk))))),4);
    bufp->fullBit(oldp+10404,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req));
    bufp->fullBit(oldp+10405,(((~ ((0U != ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid_en) 
                                           | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid))) 
                                   | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                                      | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_slv_sent_q)))) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble))));
    bufp->fullIData(oldp+10406,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg),32);
    bufp->fullIData(oldp+10407,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg),32);
    bufp->fullIData(oldp+10408,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
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
                                       & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))),32);
    bufp->fullBit(oldp+10409,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))));
    bufp->fullBit(oldp+10410,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0));
    bufp->fullIData(oldp+10411,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                    & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
    bufp->fullBit(oldp+10412,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))));
    bufp->fullBit(oldp+10413,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0));
    bufp->fullCData(oldp+10414,((((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                        & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                            & ((0x16U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                           | ((0x18U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                              | ((4U 
                                                  == 
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
                                              & ((~ 
                                                  ((0U 
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
                                           ? 2U : (
                                                   ((~ (IData)(
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
    bufp->fullBit(oldp+10415,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
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
                                                             >> 0x22U))))))))))));
    bufp->fullBit(oldp+10416,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                   & ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                        >> 5U) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                  >> 0xfU)) 
                                      | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_fail))) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                     & (IData)(((0U 
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
                                                          >> 0xdU)))))))))));
    bufp->fullBit(oldp+10417,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                               & ((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                  & (2U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))))));
    bufp->fullBit(oldp+10418,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))));
    bufp->fullBit(oldp+10419,((IData)(((0x5800000000ULL 
                                        == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                       & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11)))));
    bufp->fullBit(oldp+10420,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                               & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                  & (0x6000000000ULL 
                                     == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))));
    bufp->fullBit(oldp+10421,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->fullBit(oldp+10422,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din));
    bufp->fullBit(oldp+10423,((IData)(((((0x4040000000ULL 
                                          == (0x1fc40000000ULL 
                                              & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                         & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                                       & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->fullBit(oldp+10424,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail));
    bufp->fullBit(oldp+10425,((1U & (~ ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                        | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->fullBit(oldp+10426,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                  & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                     & ((IData)(((0x1000000000ULL 
                                                  == 
                                                  (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                 & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg))) 
                                        | (IData)((
                                                   (0x1400000000ULL 
                                                    == 
                                                    (0x1fc00000000ULL 
                                                     & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                   & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg) 
                                                      >> 1U)))))))));
    bufp->fullBit(oldp+10427,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                               | (IData)((((8U == (0xff08U 
                                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                           & (8U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))));
    bufp->fullIData(oldp+10428,((((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
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
    bufp->fullIData(oldp+10429,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din),32);
    bufp->fullBit(oldp+10430,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren));
    bufp->fullBit(oldp+10431,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                     & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en) 
                                         & (0xe400000000ULL 
                                            == (0x1fc00000000ULL 
                                                & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                        | ((0x3cU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))) 
                                           | (0x3dU 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))))))));
    bufp->fullBit(oldp+10432,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3)))));
    bufp->fullCData(oldp+10433,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din),3);
    bufp->fullBit(oldp+10434,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->fullIData(oldp+10435,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                                  & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
    bufp->fullBit(oldp+10436,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->fullIData(oldp+10437,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                    & (IData)((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                               >> 0x20U))))),32);
    bufp->fullBit(oldp+10438,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))));
    bufp->fullIData(oldp+10439,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
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
                                                                 == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))),32);
    bufp->fullBit(oldp+10440,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))));
    bufp->fullBit(oldp+10441,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                  & (IData)(((0xf000000000ULL 
                                              == (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                             & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))));
    bufp->fullBit(oldp+10442,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
                               & (7U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))));
    bufp->fullBit(oldp+10443,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l));
    bufp->fullBit(oldp+10444,((1U & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                      | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                     | ((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
                                        | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                                           | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0x11U))))))));
    bufp->fullBit(oldp+10445,((((((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                 | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
                                | (0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                  >> 8U))));
    bufp->fullCData(oldp+10446,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            << 0x16U) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                              >> 0xaU))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_bresp_q)))),2);
    bufp->fullCData(oldp+10447,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__bus_clken)
                                        ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                            << 0x1eU) 
                                           | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                              >> 2U))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_rresp_q)))),2);
    bufp->fullCData(oldp+10448,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_11) 
                                        & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                           & (0x6000000000ULL 
                                              == (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                                        ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 2U))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)))),2);
    bufp->fullIData(oldp+10449,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
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
    bufp->fullIData(oldp+10450,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                        & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
                                  : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)),32);
    bufp->fullIData(oldp+10451,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                           + ((1U & 
                                               (- (IData)(
                                                          (0U 
                                                           == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                              | ((2U 
                                                  & (- (IData)(
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
    bufp->fullIData(oldp+10452,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                                      & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
                                  : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)),32);
    bufp->fullIData(oldp+10453,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                   >> 0x20U))))
                                  : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg)),32);
    bufp->fullBit(oldp+10454,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l));
    bufp->fullCData(oldp+10455,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
                                  ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
                                  : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))),4);
    bufp->fullBit(oldp+10456,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
                                ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
    bufp->fullSData(oldp+10457,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                  ? ((0xff00U & ((IData)(
                                                         (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x1aU)) 
                                                 << 8U)) 
                                     | ((0x78U & ((IData)(
                                                          (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x15U)) 
                                                  << 3U)) 
                                        | (((IData)(
                                                    (0x100000ULL 
                                                     == 
                                                     (0x3fc100000ULL 
                                                      & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                            << 2U) 
                                           | (((IData)(
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
    bufp->fullSData(oldp+10458,((0xffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                             ? (IData)(
                                                       (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 2U))
                                             : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),16);
    bufp->fullSData(oldp+10459,((0xffffU & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
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
    bufp->fullBit(oldp+10460,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                      ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))
                                      : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->fullCData(oldp+10461,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
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
    bufp->fullIData(oldp+10462,(((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)
                                  ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
                                  : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__dmi_reg_rdata)),32);
    bufp->fullBit(oldp+10463,(((IData)(((((0x4040000000ULL 
                                           == (0x1fc40000000ULL 
                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                          & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                                         & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_wr_en)) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
                               | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))));
    bufp->fullBit(oldp+10464,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
                                | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                   & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                                      & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))
                                ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din)
                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))));
    bufp->fullBit(oldp+10465,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                                ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done))));
    bufp->fullBit(oldp+10466,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
                                ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done))));
    bufp->fullCData(oldp+10467,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
                                  ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
                                  : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))),4);
    bufp->fullCData(oldp+10468,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
                                  ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
                                  : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
    bufp->fullCData(oldp+10469,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
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
    bufp->fullBit(oldp+10470,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
                                ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
    bufp->fullBit(oldp+10471,((1U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_3) 
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
    bufp->fullBit(oldp+10472,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                      ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x16U))
                                      : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
    bufp->fullBit(oldp+10473,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal) 
                                   | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                      | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                               | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_jal)) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall) 
                                     & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)))))));
    bufp->fullBit(oldp+10474,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)
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
    bufp->fullIData(oldp+10475,((((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
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
                                       & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2)))),32);
    bufp->fullCData(oldp+10476,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)))),4);
    bufp->fullIData(oldp+10477,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)
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
    bufp->fullBit(oldp+10478,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                               | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                     | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))));
    bufp->fullIData(oldp+10479,((0x7fffffffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                 ? 
                                                (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__nmi_vec 
                                                 >> 1U)
                                                 : 
                                                ((1U 
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
    bufp->fullBit(oldp+10480,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                               | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                     | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4))))));
    bufp->fullBit(oldp+10481,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                               & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0x11U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))));
    bufp->fullBit(oldp+10482,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                               & (((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                  | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns))))));
    bufp->fullBit(oldp+10483,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                                  & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                     & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
                                        & (0x7cbU == 
                                           (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U))))))));
    bufp->fullCData(oldp+10484,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
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
    bufp->fullBit(oldp+10485,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                     | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 3U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))));
    bufp->fullSData(oldp+10486,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
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
    bufp->fullSData(oldp+10487,(((((0x600U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
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
                                                  == 
                                                  (0x108U 
                                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))),11);
    bufp->fullIData(oldp+10488,((vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_8 
                                 | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                     & vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                    | (((- (IData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                        & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                         & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                            & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                          & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))))),31);
    bufp->fullBit(oldp+10489,((1U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                        | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                       | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                      | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                      & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                         & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))));
    bufp->fullBit(oldp+10490,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                        & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))));
    bufp->fullIData(oldp+10491,(((1U & (((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                           | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                          | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                         | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                            >> 1U)) 
                                        | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
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
    bufp->fullIData(oldp+10492,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en)
                                  ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
                                  : vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)),31);
    bufp->fullCData(oldp+10493,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any) 
                                  << 2U) | ((2U & (
                                                   (0xfffeU 
                                                    & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                       >> 0x10U)) 
                                                   | (0x7ffffffeU 
                                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 1U)))) 
                                            | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)))),3);
    bufp->fullBit(oldp+10494,(((~ ((7U == (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                                   & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                               & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_43) 
                                  | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)))));
    bufp->fullBit(oldp+10495,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                     & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))))));
    bufp->fullCData(oldp+10496,((7U & ((6U & (- (IData)(
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
    bufp->fullCData(oldp+10497,((7U & ((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))
                                        ? ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                           + (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))
                                        : (6U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                 >> 2U))))),3);
    bufp->fullBit(oldp+10498,(((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_43))));
    bufp->fullCData(oldp+10499,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                   << 4U) | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2))) 
                                             << 2U)) 
                                 | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arvalid_ff) 
                                      & ((~ ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
                                             & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arready_unq_ff))) 
                                         & (0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)))) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)))),5);
    bufp->fullSData(oldp+10500,((((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4) 
                                    ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3) 
                                              ^ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                             << 3U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi0_irq) 
                                     << 2U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart_irq) 
                                               << 1U)))),9);
    bufp->fullBit(oldp+10501,((((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                         >> 0x10U)) 
                                > (0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                            ? (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt))
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt)))) 
                               & ((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                           >> 0x10U)) 
                                  > (0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                              ? (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl))
                                              : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl)))))));
    bufp->fullBit(oldp+10502,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pl_in_q) 
                               == ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                    ? 0U : 0xfU))));
    bufp->fullCData(oldp+10503,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]))),8);
    bufp->fullCData(oldp+10504,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 4U))
                                          : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]))),4);
    bufp->fullCData(oldp+10505,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10506,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0xcU))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 8U))))),4);
    bufp->fullCData(oldp+10507,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]))),8);
    bufp->fullCData(oldp+10508,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x14U))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x10U))))),4);
    bufp->fullCData(oldp+10509,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10510,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x1cU))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x18U))))),4);
    bufp->fullCData(oldp+10511,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]))),8);
    bufp->fullCData(oldp+10512,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 4U))
                                          : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]))),4);
    bufp->fullCData(oldp+10513,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+10514,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x10U))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0xcU))))),4);
    bufp->fullCData(oldp+10515,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 0x10U))
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+10516,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x18U))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x14U))))),4);
    bufp->fullCData(oldp+10517,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+10518,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x1cU))))),4);
    bufp->fullCData(oldp+10519,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10520,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                >> 0x1cU))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                >> 0x18U))))),4);
    bufp->fullCData(oldp+10521,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]))),8);
    bufp->fullCData(oldp+10522,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                                >> 4U))
                                          : vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]))),4);
    bufp->fullCData(oldp+10523,((0xffU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                                 >> 0x10U))
                                           : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+10524,((0xfU & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                                >> 8U))
                                          : ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                                >> 4U))))),4);
    bufp->fullCData(oldp+10525,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__spif) 
                                  << 7U) | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wcol) 
                                             << 6U) 
                                            | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wffull) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfempty) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.spi__DOT__rfifo__DOT____VdfgRegularize_hb3f13ae0_0_0) 
                                                    & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                   << 1U) 
                                                  | ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.spi__DOT__rfifo__DOT____VdfgRegularize_hb3f13ae0_0_0))))))),8);
    bufp->fullCData(oldp+10526,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem
                                [vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
    bufp->fullBit(oldp+10527,(((~ (IData)((0U != (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__tcnt)))) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__rfwe))));
    bufp->fullBit(oldp+10528,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wfwe) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__spi__DOT__wffull))));
    bufp->fullBit(oldp+10529,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                >> 2U) & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_stb) 
                                          & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_ack)) 
                                             & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_io_we))))));
    bufp->fullCData(oldp+10530,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart16550_0__DOT__wb_dat8_o),8);
    bufp->fullCData(oldp+10531,(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
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
    bufp->fullWData(oldp+10532,(__Vtemp_4),128);
    bufp->fullCData(oldp+10536,(((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__PVT__o_wb_ack) 
                                   << 3U) | ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_sys_ack) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_spi_flash_ack) 
                                     << 1U) | (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__wb_uart_ack)))),4);
    bufp->fullCData(oldp+10537,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullCData(oldp+10538,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->fullBit(oldp+10539,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+10540,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+10541,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10542,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+10543,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+10544,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10545,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullIData(oldp+10546,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->fullCData(oldp+10547,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10548,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10549,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10550,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10551,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10552,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10553,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10554,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10555,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10556,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10557,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10558,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10559,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                         >> 4U)) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10560,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10561,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10562,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10563,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10564,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10565,((3U & ((1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                              & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10566,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10567,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10568,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10569,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10570,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10571,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10572,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10573,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10574,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10575,((1U & ((~ vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10576,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10577,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullCData(oldp+10578,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->fullBit(oldp+10579,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+10580,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+10581,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10582,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+10583,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+10584,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10585,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullIData(oldp+10586,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->fullCData(oldp+10587,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10588,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10589,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10590,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10591,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10592,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10593,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10594,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10595,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10596,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10597,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10598,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10599,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                         >> 0x1dU)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10600,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10601,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10602,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10603,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10604,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10605,((3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0x19U) 
                                              & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10606,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10607,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10608,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10609,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10610,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10611,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10612,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10613,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10614,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10615,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                         >> 0x19U)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10616,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10617,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullCData(oldp+10618,((0x7fU & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes)),7);
    bufp->fullBit(oldp+10619,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+10620,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+10621,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10622,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+10623,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+10624,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10625,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullIData(oldp+10626,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes),21);
    bufp->fullCData(oldp+10627,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10628,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10629,((3U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10630,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10631,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10632,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10633,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10634,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10635,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10636,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10637,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10638,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10639,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                         >> 0x16U)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10640,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10641,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10642,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10643,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10644,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10645,((3U & ((1U & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                               >> 0x12U) 
                                              & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10646,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10647,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10648,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10649,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10650,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10651,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10652,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10653,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10654,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10655,((1U & ((~ (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 0x12U)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10656,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10657,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullCData(oldp+10658,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullBit(oldp+10659,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10660,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10661,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10662,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10663,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+10664,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+10665,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullBit(oldp+10666,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullCData(oldp+10667,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10668,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10669,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10670,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10671,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10672,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10673,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10674,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10675,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10676,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10677,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10678,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10679,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10680,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10681,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10682,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+10683,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10684,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                  >> 0x16U))));
    bufp->fullCData(oldp+10685,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10686,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10687,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10688,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10689,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10690,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10691,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10692,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10693,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10694,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10695,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10696,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10697,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10698,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10699,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10700,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                  >> 0x17U))));
    bufp->fullBit(oldp+10701,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                             >> 0x12U))) 
                               && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                 >> 0x14U)) 
                                          | ((2U & 
                                              (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                               >> 0x1cU)) 
                                             | (1U 
                                                & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                   >> 4U)))) 
                                         >> (3U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+10702,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                             >> 8U))) 
                               && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                 >> 0x10U)) 
                                          | ((2U & 
                                              (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                               >> 0x18U)) 
                                             | (1U 
                                                & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                         >> (3U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 8U)))))));
    bufp->fullCData(oldp+10703,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->fullCData(oldp+10704,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullCData(oldp+10705,(((4U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullBit(oldp+10706,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10707,((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10708,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10709,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10710,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+10711,((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+10712,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullBit(oldp+10713,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullCData(oldp+10714,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10715,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10716,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10717,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10718,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10719,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10720,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10721,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10722,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10723,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10724,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10725,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10726,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10727,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10728,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10729,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+10730,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10731,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                  >> 0xeU))));
    bufp->fullCData(oldp+10732,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10733,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10734,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10735,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10736,((3U & (((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                        & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10737,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10738,((3U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10739,((3U & ((1U & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10740,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10741,((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10742,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10743,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10744,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10745,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10746,((1U & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                     & (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10747,(((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+10748,(((2U >= (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                             >> 0xaU))) 
                               && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                 >> 0x14U)) 
                                          | ((2U & 
                                              (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                               >> 0x1cU)) 
                                             | (1U 
                                                & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                   >> 4U)))) 
                                         >> (3U & (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+10749,(((2U >= (3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                               && (1U & (((4U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                 >> 0x10U)) 
                                          | ((2U & 
                                              (vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                               >> 0x18U)) 
                                             | (1U 
                                                & vlSymsp->TOP__veerwolf_core_tb__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                         >> (3U & vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    bufp->fullCData(oldp+10750,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->fullCData(oldp+10751,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                         >> 3U))),4);
    bufp->fullBit(oldp+10752,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+10753,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
    bufp->fullCData(oldp+10754,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                         >> 3U))),4);
    bufp->fullBit(oldp+10755,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+10756,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                         >> 0x19U) 
                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
    bufp->fullCData(oldp+10757,((0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                         >> 3U))),4);
    bufp->fullBit(oldp+10758,(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+10759,((1U & ((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 0x12U) 
                                        & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
}

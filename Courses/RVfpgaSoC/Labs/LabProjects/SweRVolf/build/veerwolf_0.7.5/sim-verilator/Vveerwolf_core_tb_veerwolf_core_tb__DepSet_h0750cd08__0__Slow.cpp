// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"

VL_ATTR_COLD void Vveerwolf_core_tb_veerwolf_core_tb___eval_initial__TOP__veerwolf_core_tb(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___eval_initial__TOP__veerwolf_core_tb\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x61626c65U;
    __Vtemp_1[1U] = 0x695f656eU;
    __Vtemp_1[2U] = 0x675f7670U;
    __Vtemp_1[3U] = 0x6a7461U;
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(4, __Vtemp_1))))) {
        VL_WRITEF_NX("JTAG VPI enabled. Not loading RAM\n",0);
    } else {
        __Vtemp_2[0U] = 0x653d2573U;
        __Vtemp_2[1U] = 0x5f66696cU;
        __Vtemp_2[2U] = 0x696e6974U;
        __Vtemp_2[3U] = 0x72616d5fU;
        if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024, 
                                             VL_CVT_PACK_STR_NW(4, __Vtemp_2), 
                                             vlSelfRef.__PVT__ram_init_file))) {
            VL_WRITEF_NX("Loading RAM contents from %0s\n",0,
                         1024,vlSelfRef.__PVT__ram_init_file.data());
            VL_READMEM_N(true, 64, 131072, 0, VL_CVT_PACK_STR_NW(32, vlSelfRef.__PVT__ram_init_file)
                         ,  &(vlSelfRef.__PVT__ram__DOT__mem)
                         , 0, ~0ULL);
        }
    }
    __Vtemp_3[0U] = 0x653d2573U;
    __Vtemp_3[1U] = 0x5f66696cU;
    __Vtemp_3[2U] = 0x696e6974U;
    __Vtemp_3[3U] = 0x726f6d5fU;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(4, __Vtemp_3), 
                                         vlSelfRef.__PVT__rom_init_file))) {
        VL_WRITEF_NX("Loading ROM contents from %0s\n",0,
                     1024,vlSelfRef.__PVT__rom_init_file.data());
        VL_READMEM_N(true, 64, 512, 0, VL_CVT_PACK_STR_NW(32, vlSelfRef.__PVT__rom_init_file)
                     ,  &(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.mem)
                     , 0, ~0ULL);
    } else {
        vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.mem[0U] = 0x7c029073aaaa02b7ULL;
        vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.mem[1U] = 0x67ULL;
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vveerwolf_core_tb__ConstPool__TABLE_ha282529b_0;

VL_ATTR_COLD void Vveerwolf_core_tb_veerwolf_core_tb___stl_sequent__TOP__veerwolf_core_tb__0(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vveerwolf_core_tb_veerwolf_core_tb___stl_sequent__TOP__veerwolf_core_tb__0\n"); );
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
    vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSelfRef.__Vcellinp__dmi_wrapper__core_rst_n = 
        (1U & (~ (IData)(vlSymsp->TOP.rst)));
    vlSelfRef.__PVT__dmi_reg_wr_en = (IData)((2U == 
                                              (6U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren))));
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
    vlSelfRef.__PVT__dmi_reg_en = ((IData)(vlSelfRef.__PVT__dmi_reg_wr_en) 
                                   | (2U == (6U & (IData)(vlSelfRef.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden))));
}

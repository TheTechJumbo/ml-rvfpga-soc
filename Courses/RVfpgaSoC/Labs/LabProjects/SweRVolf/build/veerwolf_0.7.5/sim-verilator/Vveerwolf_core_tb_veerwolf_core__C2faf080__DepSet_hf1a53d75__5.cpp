// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__9(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_66;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_66 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_67;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_67 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_69;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_69 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_183;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_183 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_184;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_184 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_185;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_185 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_186;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_186 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_194;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_194 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_195;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_195 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_196;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_196 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_197;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_197 = 0;
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00000000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_61)
                                  ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_97))) 
                                      & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                 >> 0x18U))) 
                                     | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_93))) 
                                        & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                   >> 0x38U))))
                                  : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_90) 
                                      | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_87))
                                      ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_90))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                     >> 0x18U))) 
                                         | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_87))) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                       >> 0x38U))))
                                      : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_84) 
                                          | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_81))
                                          ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_84))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                         >> 0x18U))) 
                                             | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_81))) 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                           >> 0x38U))))
                                          : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                             >> 0x18U)))) 
                                << 0x18U) | (0xff0000U 
                                             & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_49)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_123))) 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                              >> 0x10U))) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_119))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                                >> 0x30U))))
                                                  : 
                                                 (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_116) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_113))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_116))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                               >> 0x10U))) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_113))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                 >> 0x30U))))
                                                   : 
                                                  (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_110) 
                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_107))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_110))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                >> 0x10U))) 
                                                    | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_107))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                  >> 0x30U))))
                                                    : 
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                    >> 0x10U)))) 
                                                << 0x10U))) 
                              | ((0xff00U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_37)
                                               ? ((
                                                   (- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_149))) 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                              >> 8U))) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_145))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                                >> 0x28U))))
                                               : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_142) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_139))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_142))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                               >> 8U))) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_139))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                 >> 0x28U))))
                                                   : 
                                                  (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_136) 
                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_133))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_136))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                >> 8U))) 
                                                    | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_133))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                  >> 0x28U))))
                                                    : 
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                    >> 8U)))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_25)
                                              ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_175))) 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_157)) 
                                                 | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_171))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                               >> 0x20U))))
                                              : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_168) 
                                                  | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_165))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_168))) 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_155)) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_165))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                >> 0x20U))))
                                                  : 
                                                 (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_162) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_159))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_162))) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_413)) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_159))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                 >> 0x20U))))
                                                   : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00000000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_62)
                                  ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_95))) 
                                      & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                 >> 0x18U))) 
                                     | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_92))) 
                                        & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                   >> 0x38U))))
                                  : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_89) 
                                      | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_86))
                                      ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_89))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                     >> 0x18U))) 
                                         | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_86))) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                       >> 0x38U))))
                                      : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_83) 
                                          | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_80))
                                          ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_83))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                         >> 0x18U))) 
                                             | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_80))) 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                           >> 0x38U))))
                                          : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                             >> 0x18U)))) 
                                << 0x18U) | (0xff0000U 
                                             & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_50)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_121))) 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                              >> 0x10U))) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_118))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                                >> 0x30U))))
                                                  : 
                                                 (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_115) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_112))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_115))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                               >> 0x10U))) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_112))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                 >> 0x30U))))
                                                   : 
                                                  (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_109) 
                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_106))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_109))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                >> 0x10U))) 
                                                    | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_106))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                  >> 0x30U))))
                                                    : 
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                    >> 0x10U)))) 
                                                << 0x10U))) 
                              | ((0xff00U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_38)
                                               ? ((
                                                   (- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_147))) 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                              >> 8U))) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_144))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                                >> 0x28U))))
                                               : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_141) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_138))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_141))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                               >> 8U))) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_138))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                 >> 0x28U))))
                                                   : 
                                                  (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_135) 
                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_132))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_135))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                >> 8U))) 
                                                    | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_132))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                  >> 0x28U))))
                                                    : 
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                    >> 8U)))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_26)
                                              ? (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_173))) 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_157)) 
                                                 | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_170))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                               >> 0x20U))))
                                              : (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_167) 
                                                  | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_164))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_167))) 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_155)) 
                                                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_164))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                                >> 0x20U))))
                                                  : 
                                                 (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_161) 
                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_158))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_161))) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_413)) 
                                                   | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgRegularize_h91e97e92_0_158))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                                 >> 0x20U))))
                                                   : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_dc2) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_dc2)) 
                    & (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                       >> 0xdU)))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_69 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)))
             ? 0U : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))))) 
           | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
              (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_67 
        = (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                   >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 2U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_66 
        = (1U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                 (7U & (((IData)(2U) + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)) 
                        >> 5U))] >> (0x1fU & ((IData)(2U) 
                                              + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        if ((4U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_dc5)) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_34), 4U));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5, 0x20U);
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5));
        }
    } else if (vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_64) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = (0xffU & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_65) 
                        << 4U));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_68)) 
               << 0x20U);
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = (0xffU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_65));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_68));
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
            != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
           & ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
              & ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_51) 
                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_52) 
                       & ((2U == ((0x17U >= (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                   ? (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> (0x1fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                   : 0U)) & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_59)) 
                                             & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_55)) 
                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_53) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                        >> (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_54)))))))))));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_1 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1) 
                                                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_19 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_18 
        = (IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                    >> 4U) & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
                                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1))))));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_183 
        = ((7U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_182));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_184 
        = ((8U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_182));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_185 
        = ((9U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_182));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_186 
        = ((0xaU == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_182));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_194 
        = ((7U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_193));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_195 
        = ((8U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_193));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_196 
        = ((9U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_193));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_197 
        = ((0xaU == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_193));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_secondary_d 
        = ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
               >> 7U)) & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                   >> 0x31U)) & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_143) 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
                                                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_144) 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2)) 
                                                    | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_245) 
                                                       | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                           >> 5U) 
                                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__lsu_full_hit_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3));
    if (rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_66) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_69)) 
               << 0x20U);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_67) 
               << 4U);
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_69));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_67;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr_in 
        = ((~ (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
           & ((1U & (- (IData)(((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1))))) 
              | ((2U & (- (IData)(((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1))))) 
                 | ((2U & (- (IData)(((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2))))) 
                    | ((1U & (- (IData)(((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2))))) 
                       | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_1))) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall 
        = ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__state)) 
           | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
               >> 1U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_18) 
                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_176) 
              << 9U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_177) 
                         << 8U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_178) 
                                   << 7U))) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_179) 
                                                << 6U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_180) 
                                                  << 5U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_181) 
                << 4U) | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_183) 
                           << 3U) | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_184) 
                                     << 2U))) | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_185) 
                                                  << 1U) 
                                                 | (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_186))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs1_bypass_data_d 
        = (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_176))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e1) 
           | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_177))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e1) 
              | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_178))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e2) 
                 | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_179))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_result_e2) 
                    | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_180))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e3_final) 
                       | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_181))) 
                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e3_final) 
                          | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_183))) 
                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e4_final) 
                             | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_184))) 
                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e4_final) 
                                | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_185))) 
                                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_wb_raw) 
                                   | ((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_186))) 
                                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_wb))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass 
        = (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_187) 
              << 9U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_188) 
                         << 8U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_189) 
                                   << 7U))) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_190) 
                                                << 6U) 
                                               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_191) 
                                                  << 5U))) 
           | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_192) 
                << 4U) | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_194) 
                           << 3U) | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_195) 
                                     << 2U))) | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_196) 
                                                  << 1U) 
                                                 | (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_197))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs2_bypass_data_d 
        = (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_187))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e1) 
           | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_188))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e1) 
              | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_189))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e2) 
                 | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_190))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_result_e2) 
                    | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_191))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e3_final) 
                       | (((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_192))) 
                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e3_final) 
                          | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_194))) 
                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_e4_final) 
                             | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_195))) 
                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_e4_final) 
                                | (((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_196))) 
                                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_result_wb_raw) 
                                   | ((- (IData)((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_197))) 
                                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_wb))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_256 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
              >> 0x31U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_77 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 7U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_76 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 6U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_75 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 5U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_74 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 4U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_73 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 3U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_72 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 2U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_71 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 1U));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgRegularize_hed7fed4f_0_70 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs1_d 
        = (((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                              & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d) 
           | (((- (IData)(((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____VdfgRegularize_hd5a9dc55_5_6)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs1_d) 
              | (((- (IData)(((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 5U)) & (0U 
                                                  != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs1_bypass_data_d) 
                 | ((- (IData)(((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____VdfgRegularize_hd5a9dc55_5_6)))) 
                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs1_bypass_data_d))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d 
        = (((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
           | (((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
               & (((- (IData)((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x13U))))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rddata_d) 
                  | ((- (IData)((1U & (~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x13U)))))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d))) 
              | ((- (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs2_bypass_data_d)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs2_d 
        = (((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                              & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))))) 
            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
           | (((- (IData)(((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____VdfgRegularize_hd5a9dc55_5_6)))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs2_d) 
              | (((- (IData)(((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 5U)) & (0U 
                                                  != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs2_bypass_data_d) 
                 | ((- (IData)(((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____VdfgRegularize_hd5a9dc55_5_6)))) 
                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs2_bypass_data_d))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_256) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                 & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x28U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__11(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l)
            ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din)
            : 0U);
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
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = ((5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           | ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
              | (7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__0(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
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
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__1(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    // Body
    if (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
        vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q;
        vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q;
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
        vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo;
        vlSelfRef.rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi;
    }
    vlSelfRef.__VdfgRegularize_h13057dbc_1_208 = ((
                                                   (0xfffffU 
                                                    & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                       >> 8U))) 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__ic_tag_valid) 
                                                     >> 3U));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_209 = ((
                                                   (0xfffffU 
                                                    & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                       >> 8U))) 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__ic_tag_valid) 
                                                     >> 2U));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_210 = ((
                                                   (0xfffffU 
                                                    & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                       >> 8U))) 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__ic_tag_valid) 
                                                     >> 1U));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_211 = ((
                                                   (0xfffffU 
                                                    & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                       >> 8U))) 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_tag_valid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2) 
                              << 1U) | ((0U != ((((8U 
                                                   & (VL_REDXOR_32(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (VL_REDXOR_32(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                        << 2U))) 
                                                 | ((2U 
                                                     & (VL_REDXOR_32(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_32(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)))) 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_tag_valid))) 
                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2))))) 
            << 0x30U) | (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_btb_target_f2)) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__fghr))))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo);
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_lo 
                                >> 0x20U)));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi);
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSelfRef.__PVT__rvtop__DOT__dccm_rd_data_hi 
                                >> 0x20U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_lo_dc3;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_dc3));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_hi_dc3;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_dc3));
    }
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_hit = ((((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_208) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_209) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_210) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_211)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_rd_hit)));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_9 
        = (((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_rd_hit)))) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_rd_hit)) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_6)))));
    __Vtemp_29[2U] = (((- (IData)((1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                           : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                << 4U) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                           >> 0x1eU) 
                                          | ((IData)(
                                                     (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                      >> 0x20U)) 
                                             << 2U))) 
                              & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]))) 
                      | ((- (IData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                             ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                             : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                  << 4U) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                        >> 0x20U)) 
                                               << 2U))) 
                                & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]))));
    __Vtemp_29[3U] = (((- (IData)((1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                           : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                >> 0x1cU) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                              << 6U) 
                                             | ((IData)(
                                                        (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                         >> 0x20U)) 
                                                << 4U))) 
                              & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[3U]))) 
                      | ((- (IData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                             ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                             : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                  >> 0x1cU) | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                << 6U) 
                                               | ((IData)(
                                                          (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                           >> 0x20U)) 
                                                  << 4U))) 
                                & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[3U]))));
    __Vtemp_29[4U] = (((- (IData)((1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                           : ((((0xfU & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                         >> 0x1aU)) 
                                | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                            >> 0x20U)) 
                                   >> 0x1cU)) | ((0x30U 
                                                  & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                     >> 0x1aU)) 
                                                 | ((IData)(
                                                            (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                             >> 0x20U)) 
                                                    << 6U))) 
                              & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[4U]))) 
                      | ((- (IData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                             ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                             : ((((0xfU & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                           >> 0x1aU)) 
                                  | ((IData)((vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                              >> 0x20U)) 
                                     >> 0x1cU)) | (
                                                   (0x30U 
                                                    & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                       >> 0x1aU)) 
                                                   | ((IData)(
                                                              (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                               >> 0x20U)) 
                                                      << 6U))) 
                                & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[4U]))));
    __Vtemp_30[1U] = (((- (IData)((1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                           : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                << 2U) | (IData)((vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                  >> 0x20U))) 
                              & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[1U]))) 
                      | (((- (IData)((1U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 2U) 
                                            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                              ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                              : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                   << 2U) | (IData)(
                                                    (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                     >> 0x20U))) 
                                 & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[1U]))) 
                         | ((- (IData)((IData)((((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                 >> 3U) 
                                                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                ? vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                : ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                     << 2U) | (IData)(
                                                      (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                       >> 0x20U))) 
                                   & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[1U])))));
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[0U] = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                        ? 
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                                                        : 
                                                       ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                                                        & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[0U]))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                       >> 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                           ? 
                                                          vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                                                           : 
                                                          ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                                                           & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[0U]))) 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                          >> 2U) 
                                                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                              ? 
                                                             vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                                                              : 
                                                             ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                                                              & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[0U]))) 
                                                         | ((- (IData)((IData)(
                                                                               (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                                >> 3U) 
                                                                                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                                ? 
                                                               vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                                                                : 
                                                               ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[0U]))))));
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[1U] = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                        ? 
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                                        : 
                                                       ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                          << 2U) 
                                                         | (IData)(
                                                                   (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                                    >> 0x20U))) 
                                                        & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[1U]))) 
                                                   | __Vtemp_30[1U]);
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U] = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                        ? 
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                                        : 
                                                       ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                          << 4U) 
                                                         | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                             >> 0x1eU) 
                                                            | ((IData)(
                                                                       (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                                        >> 0x20U)) 
                                                               << 2U))) 
                                                        & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                       >> 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                           ? 
                                                          vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                                           : 
                                                          ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                             << 4U) 
                                                            | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                >> 0x1eU) 
                                                               | ((IData)(
                                                                          (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                                           >> 0x20U)) 
                                                                  << 2U))) 
                                                           & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[2U]))) 
                                                      | __Vtemp_29[2U]));
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U] = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                        ? 
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                                        : 
                                                       ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                          >> 0x1cU) 
                                                         | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                             << 6U) 
                                                            | ((IData)(
                                                                       (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                        >> 0x20U)) 
                                                               << 4U))) 
                                                        & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[3U]))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                       >> 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                           ? 
                                                          vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                                           : 
                                                          ((((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                                                             >> 0x1cU) 
                                                            | (((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                << 6U) 
                                                               | ((IData)(
                                                                          (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                           >> 0x20U)) 
                                                                  << 4U))) 
                                                           & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[3U]))) 
                                                      | __Vtemp_29[3U]));
    vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U] = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                    & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                        ? 
                                                       vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                        : 
                                                       ((((0xfU 
                                                           & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                              >> 0x1aU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                      >> 0x20U)) 
                                                             >> 0x1cU)) 
                                                         | ((0x30U 
                                                             & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                >> 0x1aU)) 
                                                            | ((IData)(
                                                                       (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                                        >> 0x20U)) 
                                                               << 6U))) 
                                                        & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[4U]))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                       >> 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                                       & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                           ? 
                                                          vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                           : 
                                                          ((((0xfU 
                                                              & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                 >> 0x1aU)) 
                                                             | ((IData)(
                                                                        (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                                         >> 0x20U)) 
                                                                >> 0x1cU)) 
                                                            | ((0x30U 
                                                                & ((IData)(vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                                                                   >> 0x1aU)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                                           >> 0x20U)) 
                                                                  << 6U))) 
                                                           & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_1_0[4U]))) 
                                                      | __Vtemp_29[4U]));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_9) 
           & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_9) 
           & ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f2 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
              | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_6)) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
                    & ((~ ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
                           | (5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)))) 
                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_debug_rd_data_in 
        = (0x3ffffffffULL & (((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                     >> 4U))))) 
                              & (((QData)((IData)((
                                                   ((- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff)))) 
                                                    & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                                                      >> 1U)))) 
                                                       & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                                                         >> 2U)))) 
                                                          & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                                                           >> 3U)))) 
                                                            & vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status) 
                                                               << 4U) 
                                                              | (0U 
                                                                 != 
                                                                 ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                                     & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff))))))))))) 
                             | (((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                        >> 8U))))) 
                                 & (((QData)((IData)(
                                                     vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[0U])))) 
                                | (((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                           >> 7U))))) 
                                    & (((QData)((IData)(
                                                        vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[1U])) 
                                           >> 2U)))) 
                                   | (((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                              >> 6U))))) 
                                       & (((QData)((IData)(
                                                           vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U])) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U])) 
                                                >> 4U)))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                                >> 5U))))) 
                                         & (((QData)((IData)(
                                                             vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U])) 
                                                  >> 6U)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_f2 
        = (((0xc0U & vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U]) 
            | (0x30U & vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U])) 
           | ((0xcU & vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U]) 
              | (3U & vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[1U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[0U] 
        = ((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2)))) 
           & vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[0U]);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[1U] 
        = ((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2)))) 
           & ((vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U] 
               << 0x1eU) | (vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[1U] 
                            >> 2U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[2U] 
        = ((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2)))) 
           & (IData)((((QData)((IData)(((vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U] 
                                         << 0x1aU) 
                                        | (vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U] 
                                           >> 6U)))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U] 
                                                     << 0x1cU) 
                                                    | (vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U] 
                                                       >> 4U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[3U] 
        = ((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_icache_fetch_f2)))) 
           & (IData)(((((QData)((IData)(((vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[4U] 
                                          << 0x1aU) 
                                         | (vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[3U] 
                                                      << 0x1cU) 
                                                     | (vlSelfRef.__PVT__rvtop__DOT__ic_rd_data[2U] 
                                                        >> 4U))))) 
                      >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_c1_clken) 
           | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_c1_clken) 
           | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_c1_clken)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err)
            : ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_c1_clken)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err)
            : ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_beat_cnt 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_43 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold));
    if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
            = ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state) 
                         >> 1U))) && ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))
                                       ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0)
                                       : (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2)) 
                                          | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate = 0U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
                = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
                = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                    & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))))
                    ? 2U : 0U);
        } else {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
                = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0) 
                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2));
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
                = (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0)) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2))
                    ? 5U : 0U);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
            = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                  & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                 & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                ? 3U : (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                         ? 0U : (((((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                                    & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                   & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                  ? 4U : ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))))
                                                    ? 2U
                                                    : 0U)))));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))
                ? 1U : 2U);
    }
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xfffffffU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                          & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f2)))
                          ? (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 3U) : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f2)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f2));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_debug_rd_data_in
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt))) 
                  & ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt)) 
                                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_beat_cnt)))))) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = (((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
            & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0)) 
               & (~ ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
              | ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
                 & (4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right3 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val 
        = ((((0xffffff80U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                              << 7U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                         << 1U) & (
                                                   ((~ vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_30)) 
                                                   << 7U)))) 
             | (0xffffffc0U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                                << 6U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                           << 1U) & 
                                          ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_30) 
                                           << 6U))))) 
            | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                                << 5U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                           << 1U) & 
                                          (((IData)(
                                                    (0U 
                                                     == 
                                                     (5U 
                                                      & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                                            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_30)) 
                                           << 5U)))) 
               | (0xfffffff0U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                                  << 4U) & (((~ (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                 >> 2U)) 
                                             << 4U) 
                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                               << 1U)))))) 
           | (((0xfffffff8U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                                << 3U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                           << 1U) & 
                                          (((~ (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                >> 2U)) 
                                            | (IData)(
                                                      (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)))) 
                                           << 3U)))) 
               | (0xfffffffcU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                                  << 2U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                             << 1U) 
                                            & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_32) 
                                               << 2U))))) 
              | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid) 
                   & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                      & ((~ vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout) 
                         | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgRegularize_h3361ad2c_0_32)))) 
                  << 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata2ff__en 
        = ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__wrptr)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata0ff__en 
        = ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__wrptr)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata1ff__en 
        = ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__wrptr)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_51) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2_wr_en 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val) 
               & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val)) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0) 
            | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val)) 
                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val) 
                  & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                     & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val)))))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                  ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
                  : (~ (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_0))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken) {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout
                : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1);
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata2ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off_in 
            = (7U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc_data_in;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2parity;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off_in 
            = (7U & ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2off))));
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc2;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata0ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off_in 
            = (7U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc_data_in;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0parity;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off_in 
            = (7U & ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0off))));
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc0;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata1ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_data_f2[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off_in 
            = (7U & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc_data_in;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1parity;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1[3U];
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off_in 
            = (7U & ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1off))));
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__misc1;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__wrptr_in 
        = ((~ (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
           & ((1U & (- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata0ff__en)))) 
              | ((2U & (- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata1ff__en)))) 
                 | ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__ifvalid))))) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__wrptr)))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_158 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                    & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2_wr_en)
            ? vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((~ (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
           & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2_wr_en))) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
              | ((- (IData)((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2_wr_en)) 
                                   & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
                                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0))))))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f2val))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_54 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0) 
                              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_2))))
                           ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                               & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                              | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                  & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout) 
                                 | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1pc) 
                                    | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_158))) 
                                       & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                           & ((IData)(1U) 
                                              + vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                          | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                              & ((IData)(2U) 
                                                 + vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                             | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                                | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                                   & ((IData)(4U) 
                                                      + vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))))))
                           : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B) 
                  | (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_3))))
            ? (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout) 
                  | ((- (IData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgRegularize_haa700a5e_2_54))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1pc)))
            : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__2(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority)))) 
                              << 0x38U) | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                                            << 0x34U) 
                                           | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority)) 
                                               << 0x30U) 
                                              | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority)) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & ((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                         & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                             ? 
                                                                            (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                             : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                               ? 
                                                                              (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                               : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                          << 0x1cU) 
                                                                         | (0xf000000U 
                                                                            & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                               << 0x18U))) 
                                                                        | ((0xf00000U 
                                                                            & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                               << 0x14U)) 
                                                                           | (0xf0000U 
                                                                              & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x10U)))) 
                                                                       | (((0xf000U 
                                                                            & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                               << 0xcU)) 
                                                                           | (0xf00U 
                                                                              & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 8U))) 
                                                                          | (0xf0U 
                                                                             & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 4U))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority)))) 
                               << 0x38U) | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                                             << 0x34U) 
                                            | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority)) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                              ? 
                                                                             (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                              : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((((((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                ? 
                                                                               (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                           << 0x1cU) 
                                                                          | (0xf000000U 
                                                                             & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x18U))) 
                                                                         | ((0xf00000U 
                                                                             & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x14U)) 
                                                                            | (0xf0000U 
                                                                               & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x10U)))) 
                                                                        | (((0xf000U 
                                                                             & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0xcU)) 
                                                                            | (0xf00U 
                                                                               & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 8U))) 
                                                                           | (0xf0U 
                                                                              & (((- (IData)(
                                                                                ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 4U))))))))))) 
                             >> 0x20U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
        = (0xfffffff0U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pl_in_q 
        = (0xfU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                    ? (~ ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                           << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)))
                    : ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                        << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0x10U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]) 
           < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                      >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 8U)) < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                       >> 0xcU)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x10U)) < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                          >> 0x14U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x18U)) < (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                      >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                    >> 0xcU)) < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                         >> 0x10U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                    >> 0x14U)) < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                          >> 0x18U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
            >> 0x1cU) < (0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                    >> 0x18U)) < (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]) 
           < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                      >> 4U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                    >> 4U)) < (0xfU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                       >> 8U)));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x1cU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 4U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]);
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                   >> 0x18U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x14U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0xcU)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                         << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 0x10U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 8U)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0xcU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                    >> 0x14U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0x10U)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                   >> 0x18U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 4U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 0x10U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                        << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x18U)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x1cU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 4U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]);
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0x10U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                   >> 0x18U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x14U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0xcU)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 0x10U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x18U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0xcU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                    >> 0x14U)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]);
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                   >> 0x18U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 4U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x1cU)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                         << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                   >> 0x18U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 4U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                         << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                      >> 0x10U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 8U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x18U)));
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                        << 0x1cU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                     >> 4U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]);
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]);
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                         << 0x10U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 0x10U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                        << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 8U)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                         << 0x18U) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 8U)));
        vlSelfRef.rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                        << 0x1cU) | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 4U)));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__15(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_328;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_328 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_330;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_330 = 0;
    // Body
    if (vlSelfRef.__PVT__rvtop__DOT__core_rst_l) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout = 0U;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)) 
                 & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 8U) | ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                   >> 0xaU)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                >> 1U)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
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
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_164 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                     >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_168 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                     >> 9U)) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_110 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U)) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 1U)) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xfU) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtrEn)));
    vlSelfRef.__VdfgRegularize_h13057dbc_1_219 = (1U 
                                                  & ((0U 
                                                      != 
                                                      (0x1800U 
                                                       & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                                                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                        >> 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 0xeU)) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 5U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_58 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                            >> 0x11U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4 
        = ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0x11U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_156 
        = (1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                  >> 0x1bU) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 0x11U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_ns) 
                 & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 1U)) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                   >> 9U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                       & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d) 
                              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid) 
                                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid) 
                                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid) 
                                       | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_279) 
                                           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 0x16U)) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap)))))))) 
                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal_csr) 
                             & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc) 
                                       | (((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                               >> 0x15U)) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_224)) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics) 
                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0) 
                                                | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1) 
                                                   | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_259) 
                                                      & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0x14U))))))))) 
                                | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0x11U))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_173) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_319))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_173) 
            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_318))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_173) 
            & ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_164)))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_173) 
            & ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_168)))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
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
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 7U) | (IData)(((0U == (0x210U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb 
        = (1U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x14U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 >> 1U) & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                           >> 3U)) 
                               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb) 
                                  | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                      >> 3U) & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                >> 0xcU))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state_in 
        = ((~ (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb)) 
                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state) 
                              & (0U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                        >> 1U))))) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_90));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4 
        = ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_58) 
               | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U))) & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb 
        = ((0xffffc00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb) 
           | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_156) 
                 << 9U) | (0x180U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                     >> 0xcU))) | (
                                                   (0x3ffffc0U 
                                                    & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_156) 
                                                        << 6U) 
                                                       & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                          >> 6U))) 
                                                   | (0x20U 
                                                      & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
                                                          & ((2U 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))
                                                              ? 
                                                             ((~ 
                                                               ((~ 
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                  >> 0x1bU)) 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                                   >> 9U))) 
                                                              & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                 >> 0xbU))
                                                              : 
                                                             ((~ 
                                                               ((~ 
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                  >> 0x1bU)) 
                                                                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                                   >> 9U))) 
                                                              & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                 >> 0xbU)))) 
                                                         << 5U)))) 
              | (((0x18U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                            >> 3U)) | ((IData)((4U 
                                                == 
                                                (0x80004U 
                                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb))) 
                                       << 2U)) | ((2U 
                                                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                                  | (IData)(
                                                            (1U 
                                                             == 
                                                             (0x80001U 
                                                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_81 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel 
                   + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                           >> 0x20U))) : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                           >> 0x20U))) : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                           >> 0x20U))) : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                           >> 0x20U))) : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
            & (0x3e400000U == (0x7ff80000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])))
            ? ((0x10000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                            >> 8U)) | ((0xc000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U))))
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
           & (0x3e480000U == (0x7ff80000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
           & (0x3e500000U == (0x7ff80000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_wb 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
           & (0x3d880000U == (0x7ff80000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_152) 
           & (0x3d800000U == (0x7ff80000U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4 
        = (1U & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb)) 
                                   & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 2U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_wb)) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb)) 
                 | (IData)((((0x200000U == (0x220000U 
                                            & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                             & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 2U))) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 0xeU))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1 
        = ((((((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
               & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                  >> 1U)) & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_18))) 
             & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_write_stall))) 
           & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_mp_e4 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i0_flush_lower_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_334) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
              & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ns 
        = (0x3ffU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_160) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_319))
                      ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                         | ((0x100U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))) 
                            | (0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ns 
        = (0x3ffU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_160) 
                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_318))
                      ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                         | ((0x100U & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                            | (0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ns 
        = (0x3ffU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_160) 
                      & ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
                         & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_kill_write)) 
                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_164))))
                      ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                         | ((0x100U & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                            | (0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ns 
        = (0x3ffU & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_160) 
                      & ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
                         & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_kill_write)) 
                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_168))))
                      ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                         | ((0x100U & ((0x7fffff00U 
                                        & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 1U)) 
                                       | (0xffffff00U 
                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
                            | (0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip) 
            >> 3U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip) 
            >> 4U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_81) 
           & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns)) 
              >> 5U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_81) 
           & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns)) 
              >> 1U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_81) 
           & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mip) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns)) 
              >> 2U));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data_valid))
            ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data_valid))
                  ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb)
                      ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_wb
                      : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data 
                                 >> 0x20U))) : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1)));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1) {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in) 
                  << 0xeU) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in) 
                              << 0xcU)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in) 
                                            << 0xaU) 
                                           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in) 
                                              << 8U))) 
               | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in) 
                    << 6U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in) 
                              << 4U)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in) 
                                          << 2U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in))));
        vlSelfRef.__PVT__rvtop__DOT__ic_rd_en = vlSelfRef.__VdfgRegularize_h13057dbc_1_0;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2;
        vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout;
        vlSelfRef.__PVT__rvtop__DOT__ic_rd_en = 0U;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
        = (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_8 
           | (((- (IData)((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2)))))))) 
               & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout) 
              | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_btb_target_f2) 
                 | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2)))))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1) 
                    | (0x7ffffff8U & ((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)))) 
                                      & (((IData)(1U) 
                                          + (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                             >> 3U)) 
                                         << 3U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_110) 
           & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__e4_valid)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_110) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4) 
              & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_e4 
        = (IData)(((0xc00U == (0xf00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_e4 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 0x14U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_e4 
        = (IData)(((0x900U == (0xf00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4 
        = ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
               >> 0x19U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_328 
        = (IData)(((0x800U == (0xf00U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4)) 
                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_e4 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 0x16U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 0x15U) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_327));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_89 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_338 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)));
    vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = (IData)((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__ic_rd_en)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_e4 
        = (0x7fffffffU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4))) 
                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_finish_early)
                               ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__exu_i0_flush_path_e1
                               : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_div_finish)
                                   ? vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__npc_any_ff__dout
                                   : (((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout 
                                        >> 0x1fU) & 
                                       (~ ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i0_flush_lower_e4)
                                            : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout))))
                                       ? ((1U & ((1U 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__any_jal)) 
                                                  & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken)) 
                                                      & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                         >> 2U)) 
                                                     | ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken))))
                                                  : 
                                                 ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout) 
                                                  >> 1U)))
                                           ? (IData)(
                                                     (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                      >> 1U))
                                           : ((1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                               ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i1_flush_path_e4
                                               : vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout))
                                       : ((1U & ((2U 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__any_jal)) 
                                                  & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken)) 
                                                      & (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                         >> 2U)) 
                                                     | ((vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken))))
                                                  : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout)))
                                           ? (IData)(
                                                     (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                      >> 1U))
                                           : ((2U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                               ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i0_flush_path_e4
                                               : (IData)(
                                                         (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                          >> 0x20U)))))))) 
                          | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4))) 
                              & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout) 
                             | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4))) 
                                 & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout) 
                                | ((- (IData)((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4) 
                                                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4))))))) 
                                   & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_75 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
              >> 0x11U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_328) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
              >> 0xdU));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_e4 
        = ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
               >> 0xdU)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_328));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_330 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_39) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_e4) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_334) 
                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_e4 
        = (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state)) 
            & (0x10U == (0x204010U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
           & (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_338) 
                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected)))))) 
               & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 0xeU))) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                      >> 3U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_338) 
                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__mhwakeup) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))))) 
                            & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                               >> 7U))));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_16 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
              >> 1U));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_15 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
           & ((~ (IData)((3U == (3U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 1U))))) | 
              ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
               >> 1U)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_14 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
           & ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                  >> 2U)) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                             >> 1U)));
    vlSelfRef.rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgRegularize_ha49ce986_0_13 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
           & ((~ (IData)((0U != (3U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 1U))))) | 
              ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
               >> 1U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed))))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_e4
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeze_rfpc_e4) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_331) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
                 & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_330))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_339 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 2U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_wb 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_e4) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)))) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
              & (~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x11U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw 
        = (IData)((((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                     >> 0x26U) & (~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U))) & (~ 
                                                 ((IData)(
                                                          (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                           >> 0x23U)) 
                                                  & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                        | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                           >> 9U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc1_valid_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                    & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_322 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))
            ? (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc1_valid_e4)) 
                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4)))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_pc_e4) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))) 
                   & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout) 
                  | ((- (IData)((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_e4)) 
                                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc1_valid_e4)))))) 
                     & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout)))
            : vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_valid_e4) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_322) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                 & (IData)(((0U == (0x20008U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                            & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freezerfpc_ff__din 
        = ((2U & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                   << 1U) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeze_rfpc_e4) 
                              << 1U) | (0xfffffffeU 
                                        & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freezerfpc_ff__dout))))) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_dccm_req));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_313 
        = ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 1U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_321 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual 
        = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 8U) & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
               | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) | ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                              >> 9U) | ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0x11U) 
                                        | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            >> 6U) 
                                           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))))))) 
           & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
            & (0U != ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4) 
                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_action)))) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
                 & (0U != ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_action))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_333) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4)) 
                 & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i1_mp_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_i1_flush_lower_e4) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4) 
           & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4)) 
                             & ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                    >> 9U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                               & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
                                                  & ((~ (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_330)) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_40) 
                                                           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_333) 
                                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_189 
        = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
            << 1U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_76 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_i1_valid_e4) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                 & ((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                        >> 9U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                   & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
                                         & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                            & ((~ (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                   >> 3U)) 
                                               & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_175 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
            << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_321));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_188 
        = ((0x7ffffffeU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
                            >> 1U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                      << 1U))) | ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
                                                   >> 3U) 
                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_176 
        = ((((~ (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_p_e4[2U] 
                 >> 6U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
            << 1U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                      & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_pmu_i0_pc4)) 
                         & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_177 
        = ((0x7fffffeU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                           << 1U) & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                     >> 5U))) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_e4)) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_pmu_i0_pc4))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_186 
        = ((0xfffffeU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_p_e4[2U] 
                          >> 8U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                    << 1U))) | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_div_finish)) 
                                                 & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                    >> 9U)) 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_187 
        = ((0x1fffffeU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_p_e4[2U] 
                           >> 7U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                     << 1U))) | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_div_finish)) 
                                                  & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                     >> 8U)) 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual 
        = (0xfU & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 4U) & (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4 
        = ((~ (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                       >> 0x21U))) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
           & (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x21U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
           & (IData)((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x24U)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_297 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_180 
        = (((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
            << 1U) | (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_184 
        = (((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
            << 1U) | (4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_185 
        = ((((0xdU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
             | (0xeU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
            << 1U) | ((0xdU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                      | (0xeU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181 
        = (((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
            << 1U) | (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182 
        = (((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
            << 1U) | (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_283 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_181) 
           & (- (IData)((1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_282 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_182) 
           & (- (IData)((1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_e4))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__3(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_52 
        = ((2U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                  << 1U)) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xc0000000U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                           << 0x1cU)) | ((0x10000000U 
                                          & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                                             << 0x1bU)) 
                                         | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_52)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__4(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_14;
    rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_14 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_15;
    rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_15 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_172;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_172 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_173;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_173 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297;
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
        = (((- (IData)((1U & (~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))))) 
            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg
                : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d)) 
           | (((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                 & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x2aU)))))) 
               & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                           >> 1U)) << 1U)) | ((- (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs1_bypass_data_d)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync 
        = (1U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0xdU)) | (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mfdc) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mtvec) 
                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mstatus) 
                                                | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mepc) 
                                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mtdata1) 
                                                      | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_224) 
                                                         | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_223) 
                                                             & ((~ 
                                                                 (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0x19U)) 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_218))) 
                                                            | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_268) 
                                                               & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0x15U))))))))) 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                        | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freezerfpc_ff__dout) 
                                           >> 1U)) 
                                       | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                             & (0x7c2U 
                                                == 
                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                 >> 0x14U)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_presync 
        = (1U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0xeU)) | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mfdc) 
                                         | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mgpmc) 
                                            | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_228) 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_255)) 
                                               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mtdata1) 
                                                  | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_258) 
                                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_257)) 
                                                     | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_258) 
                                                         & (IData)(
                                                                   (0x400000U 
                                                                    == 
                                                                    (0x600000U 
                                                                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                        | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_256) 
                                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_255)))))))) 
                                        & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d))) 
                                       | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
                                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_stall_dma 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                     >> 0xbU)) & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
                                   & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 3U))) 
                                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_presync) 
           & ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 5U))) ? (IData)((((0U 
                                                   != 
                                                   (0x1000002U 
                                                    & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])) 
                                                  | (0U 
                                                     != 
                                                     (0x1000002U 
                                                      & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U]))) 
                                                 | (0U 
                                                    != 
                                                    (0x1000002U 
                                                     & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U]))))
               : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4) 
                  | (IData)((0U != (0x1000002U & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U]))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_block_d 
        = (1U & ((((((((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal)) 
                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_presync)) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                      | (0ULL != (0x96000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp))) 
                     | (0ULL != (0xf00000000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1))) 
                    | (0ULL != (0x90000ULL & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp))) 
                   | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall)) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                     >> 0xaU)) | (((((((((((((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d)) 
                                             | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_49) 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                       >> 0x29U))) 
                                           | ((IData)(
                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                       >> 0x28U)) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_269))) 
                                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_167) 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1))) 
                                         | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_167) 
                                            & ((~ (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x29U))) 
                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2) 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_246))))) 
                                        | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                            & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                               >> 6U)) 
                                           & (((~ (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x28U))) 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1)) 
                                              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_246))))) 
                                       | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                          & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141) 
                                               >> 7U) 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2)) 
                                             | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                 >> 7U) 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2))))) 
                                      | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                                         & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__non_block_case_d)) 
                                            & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2))))) 
                                     | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U)) 
                                       & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 9U)))) 
                                   | ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x29U)) 
                                      & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_270))) 
                                  | ((~ (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x31U))) 
                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_244) 
                                        | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_243) 
                                           & ((~ (IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x28U))) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                                  >> 7U)))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_d 
        = (1U & (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x13U)) & ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U] 
                                          | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                             | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                                | (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                   | vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])))) 
                                         >> 0x1fU)) 
                 | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__pause_state) 
                    | ((vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xeU) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i0_stall) 
                                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall) 
                                       | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall) 
                                          | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_idle)) 
                                              & ((IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 3U)) 
                                                 | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence))) 
                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
                                                | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_164) 
                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1)) 
                                                    | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_164) 
                                                        & ((~ (IData)(
                                                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                       >> 0x29U))) 
                                                           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2) 
                                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_247)))) 
                                                       | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                                                           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                              >> 6U)) 
                                                          & (((~ (IData)(
                                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                          >> 0x28U))) 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1)) 
                                                             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_247)))))) 
                                                   | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                                                       & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139) 
                                                            >> 7U) 
                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
                                                          | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                              >> 7U) 
                                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2)))) 
                                                      | (((IData)(
                                                                  (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 0x28U)) 
                                                          & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_269)) 
                                                         | (((IData)(
                                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                      >> 0x29U)) 
                                                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_270)) 
                                                            | ((((IData)(
                                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                          >> 0x31U)) 
                                                                 & (((~ (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x31U))) 
                                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                                                                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d) 
                                                                       & (IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (0x2010000000000ULL 
                                                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp)))))) 
                                                                & ((~ 
                                                                    ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                                                     >> 7U)) 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                                               | ((~ 
                                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                                                    >> 7U)) 
                                                                  & ((~ (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x31U))) 
                                                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_245) 
                                                                        | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                            >> 5U) 
                                                                           & ((~ (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x28U))) 
                                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3))))))))))))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_d)) 
                    & ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__flush_final_e3)) 
                                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i0_stall_in 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           | ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i0_stall)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1_data_en 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                        >> 2U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                   >> 7U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d)) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal) 
            & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_lockout)) 
               & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze))))
            ? ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0))
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_illegal_inst))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_illegal_inst);
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_179 
        = ((- (IData)((0x1eU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_192 
        = ((- (IData)((0x1eU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_194 
        = ((- (IData)((0x1eU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgRegularize_hc2207436_0_196 
        = ((- (IData)((0x1eU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_171 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_256) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_256));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_169 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 9U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_170 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x29U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x13U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_172 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_secondary_d) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 5U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_lsu_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 0x27U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
               >> 1U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp) 
                         & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_block_d)) 
                            & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze))))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)((0x1fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rddata_d)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)))) 
                << 0xcU) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)))) 
                >> 0x14U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))) 
                                      >> 0x20U)) << 0xcU));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))) 
                        >> 0x20U)) >> 0x14U);
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__csr_rs1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d
                : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_csr_rs1_e1);
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)
                ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_predict_nt)
                    ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_271)
                    : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_br_offset))
                : ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_nt)
                    ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_272)
                    : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_e1;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__csr_rs1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_csr_rs1_e1;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout;
    }
    __Vtemp_2[1U] = ((0xfffe0000U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset) 
                                      << 0x18U) | (
                                                   (0xf00000U 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                       << 5U)) 
                                                   | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                       << 0x13U) 
                                                      | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                                           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297)) 
                                                          << 0x12U) 
                                                         | (0x3ffe0000U 
                                                            & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                                >> 2U) 
                                                               & ((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297) 
                                                                  << 0x11U)))))))) 
                     | (IData)(((((QData)((IData)((0x7fffffffU 
                                                   & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                         >> 0x10U))))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall) 
                                                                 << 0x11U) 
                                                                | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret) 
                                                                    << 0x10U) 
                                                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja) 
                                                                      << 0xfU))) 
                                                               | ((0x7fc0U 
                                                                   & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                                        >> 0xaU))))))) 
                                >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[0U] 
        = (IData)((((QData)((IData)((0x7fffffffU & 
                                     ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                       << 0x10U) | 
                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                       >> 0x10U))))) 
                    << 0x12U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret) 
                                                      << 0x10U) 
                                                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja) 
                                                        << 0xfU))) 
                                                 | ((0x7fc0U 
                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                                                          >> 0xaU))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[2U] 
        = (0x1ffffU & (((0x40U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0) 
                                  << 6U)) | (0x30U 
                                             & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                >> 0x11U))) 
                       | (0x1ffffU & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset) 
                                       >> 8U) | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                                     & (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_297)) 
                                                    >> 0xeU))))));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellinp__aff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x29U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x28U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 1U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d)) 
             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d) 
             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xcU)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xbU)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 3U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 2U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xaU)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x1cU)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x17U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_242 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x31U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_172));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 7U));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__divpcff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_trigger;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_waddr_wb));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_inst;
    }
    __Vtemp_3[1U] = ((0xfffe0000U & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_br_offset) 
                                      << 0x18U) | (
                                                   (0xf00000U 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                       << 5U)) 
                                                   | ((0xfff80000U 
                                                       & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                                           << 0x10U) 
                                                          & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                                             << 0x13U))) 
                                                      | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_br_error) 
                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
                                                          << 0x12U) 
                                                         | (0x3ffe0000U 
                                                            & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                                >> 2U) 
                                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                                                  << 0x11U)))))))) 
                     | (IData)(((((QData)((IData)((0x7fffffffU 
                                                   & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                         >> 0x10U))))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pcall) 
                                                                 << 0x11U) 
                                                                | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pret) 
                                                                    << 0x10U) 
                                                                   | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pja) 
                                                                      << 0xfU))) 
                                                               | ((0x7fc0U 
                                                                   & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                                        >> 0xaU))))))) 
                                >> 0x20U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[0U] 
        = (IData)((((QData)((IData)((0x7fffffffU & 
                                     ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                       << 0x10U) | 
                                      (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                       >> 0x10U))))) 
                    << 0x12U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pcall) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pret) 
                                                      << 0x10U) 
                                                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_pja) 
                                                        << 0xfU))) 
                                                 | ((0x7fc0U 
                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                                          >> 0xaU))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[2U] 
        = (0x1ffffU & (((0x40U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1) 
                                  << 6U)) | (0x30U 
                                             & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                >> 0x11U))) 
                       | ((0x1ffffU & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_br_offset) 
                                       >> 8U)) | ((0xffffU 
                                                   & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                                       >> 0x10U) 
                                                      & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                                         >> 0xdU))) 
                                                  | (0x1ffffU 
                                                     & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_br_error) 
                                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
                                                        >> 0xeU))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e1_data_en 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 7U))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_240 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x31U)) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_secondary_d)) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 0U;
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) {
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 9U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 1U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x29U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 2U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x28U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 3U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 1U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 4U;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x1cU)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 0xdU;
        }
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x17U)))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype = 0xeU;
        }
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_alu_decode_d 
            = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_secondary_d)) 
               & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U)));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_alu_decode_d = 0U;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_nonblock_load_freeze_dc2 
        = (1U & (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139) 
                      >> 6U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
                    | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                        >> 6U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2))) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d)) 
                  | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141) 
                        >> 6U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2)) 
                      | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                          >> 6U) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2))) 
                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d))) 
                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout) 
                     >> 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
              & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                         >> 5U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_e1_ctl_en 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                     | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                        >> 2U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                   >> 7U))));
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_173 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_secondary_d) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__mul_decode_d 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
            & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 9U))) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                   & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 9U))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0cg0ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_lockout_any_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_lockout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csrmiscff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1cg0ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__postsync_stallff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__e1ghrdecff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__valid_e1_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__valid_e1;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0cg0ff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                << 2U) | (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                                >> 1U)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_lockout_any_ff__DOT____Vcellinp__dffs__din 
            = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__flush_final_e3)) 
               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_lockout)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csrmiscff__DOT____Vcellinp__dffs__din 
            = ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d) 
                 << 4U) | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x12U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                            << 3U) | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x11U)) 
                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write) 
                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                >> 0xfU)))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1cg0ff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                << 2U) | (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                                >> 1U)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__postsync_stallff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal) 
                   | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)) 
                      | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
               | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_jal)) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ps_stall) 
                     & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)))));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_alu_decode_d));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
                << 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_alu_decode_d));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__valid_e1_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__mul_decode_d;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
            << 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_decode_d 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_lsu_decode_d) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
              & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                         >> 0x27U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift2 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[0U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[0U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[1U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[2U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = ((0x37fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                                >> 1U)) << 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xff0fffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0xf00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_predict_p_d[1U]));
    if (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellinp__aff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d))))) 
               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d);
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__b_ff;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__a_ff;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[0U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[0U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[1U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[2U];
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = ((0x37fU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                                >> 1U)) << 7U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xff0fffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0xf00000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_predict_p_d[1U]));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e1_data_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs2_d)))) 
                << 0xcU) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_br_immed_d));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs2_d)))) 
                >> 0x14U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs1_d)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs2_d))) 
                                      >> 0x20U)) << 0xcU));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs1_d)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs2_d))) 
                        >> 0x20U)) >> 0x14U);
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1))
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1
                : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst1));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_inst_e1;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_nonblock_load_freeze_dc2)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freezeff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst)) 
           & ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_nonblock_load_freeze_dc2) 
                | ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                       >> 0xbU)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_dc2))) 
               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_dc2) 
                  & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                     & ((vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                         >> 0xdU) & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_dc2_up)) 
                                     & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2))))))) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_in 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_decode_d) 
            | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_state)) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_div_finish)) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_decode_d) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)(((~ (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_197)) 
                                 & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs2_d 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs2_d)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__miscf__DOT____Vcellinp__dffs__din 
            = (((8U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs1_d 
                       >> 0x1cU)) | (4U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs2_d 
                                           >> 0x1dU))) 
               | ((((~ (IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_197)) 
                    & (0U != vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs2_d)) 
                   << 1U) | (1U & ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 5U)))
                                    ? (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 4U))
                                    : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 4U))))));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__m_ff;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__miscf__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_decode_d) 
            | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_53) 
                & (0x21U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__count))) 
               | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__rem_correct)))
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_in
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_ff);
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x1ffffffffULL & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__div_decode_d) 
                              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_53))
                              ? (((- (QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_state)))))) 
                                  & (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_rs1_d))) 
                                 | (((- (QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_45))))) 
                                     & ((((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__dividend_eff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                        << (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff))) 
                                    | ((- (QData)((IData)(
                                                          ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT____VdfgRegularize_hf95ff21f_0_45)) 
                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__run_state))))) 
                                       & (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                           << 1U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U))))))))))
                              : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellinp__aff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_e1_ctl_en) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_alu_decode_d));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_241 
        = ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x31U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_173));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_e1_ctl_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1 
                                      >> 1U)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i1_br_immed_d;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_predict_newp_d[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_241) 
                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_240)) 
                   | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 0x31U)) << 0x13U) | (0x78000U 
                                              & ((IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x21U)) 
                                                 << 0xfU))) 
                | (((0x4000U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x1fU)) 
                                << 0xeU)) | (0x2000U 
                                             & ((IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                         >> 0x20U)) 
                                                << 0xdU))) 
                   | ((0x1800U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                           >> 0x1aU)) 
                                  << 0xbU)) | (0x400U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x18U)) 
                                                  << 0xaU))))) 
               | (((0x200U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x19U)) << 9U)) 
                   | ((0x180U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                          >> 0x25U)) 
                                 << 7U)) | (0x60U & 
                                            ((IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x1dU)) 
                                             << 5U)))) 
                  | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_jal) 
                      << 4U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_13) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_predict_br)) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_predict_nt) 
                                           << 2U)))));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[0U] 
        = (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d)) 
             << 0x1fU) | ((0x7ff80000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 1U)) | 
                          (((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_173) 
                            << 0x12U) | ((((IData)(
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (0x25U 
                                                      == 
                                                      (0x2fU 
                                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))))) 
                                          << 0x11U) 
                                         | (((IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x31U)) 
                                             & (IData)(
                                                       (0x26U 
                                                        == 
                                                        (0x2fU 
                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))))) 
                                            << 0x10U))))) 
           | ((((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x31U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_251)) 
                 << 0xfU) | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x31U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_249)) 
                             << 0xeU)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1rs1_intra) 
                                           << 0xbU) 
                                          | ((((IData)(
                                                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                        >> 0x31U)) 
                                               & ((1U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))) 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_259))) 
                                              << 0xaU) 
                                             | ((((IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x31U)) 
                                                  & ((2U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))) 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_259))) 
                                                 << 9U) 
                                                | (((IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 0x31U)) 
                                                    & ((3U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))) 
                                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_259))) 
                                                   << 8U))))) 
              | (((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                             >> 0x31U)) & ((4U == (0xfU 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_259))) 
                   << 7U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1rs2_intra) 
                             << 4U)) | (((((IData)(
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x31U)) 
                                           & ((1U == 
                                               (0xfU 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_257))) 
                                          << 3U) | 
                                         (((IData)(
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x31U)) 
                                           & ((2U == 
                                               (0xfU 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_257))) 
                                          << 2U)) | 
                                        ((((IData)(
                                                   (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x31U)) 
                                           & ((3U == 
                                               (0xfU 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142))) 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_257))) 
                                          << 1U) | 
                                         ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                   >> 0x31U)) 
                                          & ((4U == 
                                              (0xfU 
                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142))) 
                                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_257))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffe0000U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | ((((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x31U)) & ((3U == (0xfU 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_263))) 
                 << 0x10U) | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x31U)) 
                                & ((4U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_263))) 
                               << 0xfU) | (((IData)(
                                                    (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 0x31U)) 
                                            & ((1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
                                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_261))) 
                                           << 0xeU))) 
               | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0x31U)) & ((2U == (0xfU 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_261))) 
                   << 0xdU) | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x31U)) 
                                 & ((3U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_261))) 
                                << 0xcU) | (((IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x31U)) 
                                             & ((4U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))) 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_261))) 
                                            << 0xbU)))) 
              | (((0x7c0U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                             >> 1U)) | (0x20U & ((IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 9U)) 
                                                 << 5U))) 
                 | (((0x18U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x28U)) 
                               << 3U)) | ((((IData)(
                                                    (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x2dU)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                                   >> 7U)))) 
                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
                                          << 2U)) | 
                    (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                      << 1U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfc01ffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffe0000U & (((((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x2dU)) 
                                  & (0U != (0x1fU & 
                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 7U)))) 
                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                << 0x19U) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                              << 0x18U) 
                                             | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_172) 
                                                << 0x17U))) 
                              | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x31U)) 
                                   & (IData)((0x25U 
                                              == (0x2fU 
                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))))) 
                                  << 0x16U) | (((IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x31U)) 
                                                & (IData)(
                                                          (0x26U 
                                                           == 
                                                           (0x2fU 
                                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))))) 
                                               << 0x15U))) 
                             | (((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x31U)) 
                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_250)) 
                                  << 0x14U) | (((IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x31U)) 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_248)) 
                                               << 0x13U)) 
                                | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x31U)) 
                                     & ((1U == (0xfU 
                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
                                        & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_263))) 
                                    << 0x12U) | (((IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x31U)) 
                                                  & ((2U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139))) 
                                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_263))) 
                                                 << 0x11U))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xc3ffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfc000000U & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_169) 
                               << 0x1dU) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_170) 
                                            << 0x1cU)) 
                             | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U)) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                 << 0x1bU) | (((IData)(
                                                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 5U)) 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                              << 0x1aU)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xc0000000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                             << 0x17U)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[2U] 
        = (7U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                 >> 9U));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1loadff__DOT____Vcellinp__dffs__din 
            = ((0x7fffffeU & ((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_139) 
                                  >> 5U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1) 
                                            << 1U)) 
                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                    >> 5U) & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1) 
                                              << 1U))) 
                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d) 
                                  << 1U)) | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_141) 
                                                >> 5U) 
                                               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1) 
                                                  << 1U)) 
                                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                  >> 5U) 
                                                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1) 
                                                    << 1U))) 
                                             & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d) 
                                                << 1U)))) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                  & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                              >> 0x29U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1c_ff__DOT____Vcellinp__dffs__din 
            = ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_169) 
                 << 3U) | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_170) 
                           << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_242) 
                                       << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_171)));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_242) 
                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_171)) 
                   | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 0x31U)) << 0x13U) | (0x78000U 
                                              & ((IData)(
                                                         (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x21U)) 
                                                 << 0xfU))) 
                | (((0x4000U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x1fU)) 
                                << 0xeU)) | (0x2000U 
                                             & ((IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x20U)) 
                                                << 0xdU))) 
                   | ((0x1800U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x1aU)) 
                                  << 0xbU)) | (0x400U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x18U)) 
                                                  << 0xaU))))) 
               | (((0x200U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x19U)) << 9U)) 
                   | ((0x180U & ((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x25U)) 
                                 << 7U)) | (0x60U & 
                                            ((IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x1dU)) 
                                             << 5U)))) 
                  | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_jal) 
                       << 4U) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_10) 
                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                                  << 3U) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_nt) 
                                            << 2U))) 
                     | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                         << 1U) | (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0xfU)))))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                   << 0x19U) | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                 << 0x18U) | (((IData)(
                                                       (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                                                        >> 0x24U)) 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                              << 0x17U))) 
                 | ((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                               >> 0x21U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                     << 0x16U) | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0 
                                            >> 0x22U)) 
                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                  << 0x15U))) | (((
                                                   ((IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 2U)) 
                                                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d) 
                                                     & (- (IData)(
                                                                  ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d)) 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d))))) 
                                                    << 0x10U))) 
               | ((((((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_15) 
                        & (0xffffffffU == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i1_match__DOT__matchvec)) 
                       << 0xfU) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_11) 
                                    & (0xffffffffU 
                                       == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i1_match__DOT__matchvec)) 
                                   << 0xeU)) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_7) 
                                                  & (0xffffffffU 
                                                     == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i1_match__DOT__matchvec)) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT____VdfgRegularize_h438dd6a8_0_3) 
                                                    & (0xffffffffU 
                                                       == vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i1_match__DOT__matchvec)) 
                                                   << 0xcU))) 
                    & ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d))) 
                       << 0xcU)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype) 
                                    << 8U)) | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_itype) 
                                                << 4U) 
                                               | ((((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_49)) 
                                                   << 3U) 
                                                  | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_predict_br)) 
                                                      & (0ULL 
                                                         != 
                                                         (0x10800000ULL 
                                                          & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp))) 
                                                     << 2U)))));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e1c_ff__DOT____Vcellinp__dffs__din 
            = (((((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 9U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
                 << 3U) | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 0x29U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i1_decode_d)) 
                           << 2U)) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_241) 
                                       << 1U) | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_240)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__dd[2U];
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1loadff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_e1c_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_e1c_ff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__mul_decode_d) 
                    | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 6U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_decode_d) 
                 | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout) 
                    | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout) 
                       | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
                          | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout) 
                             | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_empty_any)) 
                                | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc5ff__dout) 
                                   | ((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any)) 
                                      | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                         >> 4U))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_p = 
        ((0x40000U & (((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x27U))) ? (IData)(
                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x16U))
                        : (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                   >> 0x16U))) << 0x12U)) 
         | ((0x20000U & (((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x27U)))
                           ? (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x15U)) : (IData)(
                                                           (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x15U))) 
                         << 0x11U)) | ((0x10000U & 
                                        (((1U & (IData)(
                                                        (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)))
                                           ? (IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x14U))
                                           : (IData)(
                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x14U))) 
                                         << 0x10U)) 
                                       | ((0x4000U 
                                           & (((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x27U)))
                                                ? (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x29U))
                                                : (IData)(
                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x29U))) 
                                              << 0xeU)) 
                                          | (((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_196) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U)))
                                                      ? (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x1dU))
                                                      : (IData)(
                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                 >> 0x1dU))) 
                                                    << 0xcU)) 
                                                | ((((0xfffffc00U 
                                                      & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                                          << 0xaU) 
                                                         & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_155) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                << 4U)) 
                                                            | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_156) 
                                                                 << 0xaU) 
                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                   << 4U)) 
                                                               | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_157) 
                                                                    | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_158)) 
                                                                   << 0xaU) 
                                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                     << 4U)))))) 
                                                     | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_159) 
                                                           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_255)) 
                                                          | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_159) 
                                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_254)) 
                                                             | (((~ (IData)(
                                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                             >> 0x27U))) 
                                                                 & (IData)(
                                                                           (0ULL 
                                                                            != 
                                                                            (0x30000000000ULL 
                                                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp)))) 
                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_253) 
                                                                   | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_252))))) 
                                                         << 9U) 
                                                        | (0xffffff00U 
                                                           & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                                               << 8U) 
                                                              & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_150) 
                                                                   << 8U) 
                                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_151) 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                        << 2U)) 
                                                                    | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_153) 
                                                                         | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_154)) 
                                                                        << 8U) 
                                                                       & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                          << 2U)))))))) 
                                                    | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2) 
                                                        << 7U) 
                                                       | (((~ 
                                                            (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                                           << 5U) 
                                                          & (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_152) 
                                                                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_251)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                           >> 0x28U)) 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_250))) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_152) 
                                                                  & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_249)) 
                                                                 | ((IData)(
                                                                            (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                             >> 0x28U)) 
                                                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_248))) 
                                                                << 5U))))) 
                                                   | ((((~ 
                                                         (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                                        << 3U) 
                                                       & ((0x7ffffff0U 
                                                           & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_157) 
                                                                << 4U) 
                                                               & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                  >> 1U)) 
                                                              | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_155) 
                                                                  << 4U) 
                                                                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                    >> 1U)))) 
                                                          | (0x3ffffff8U 
                                                             & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_158) 
                                                                  << 3U) 
                                                                 & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                    >> 2U)) 
                                                                | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_156) 
                                                                    << 3U) 
                                                                   & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                      >> 2U)))))) 
                                                      | ((((~ 
                                                            (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                                           << 1U) 
                                                          & ((0x1ffffffcU 
                                                              & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_153) 
                                                                   << 2U) 
                                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                     >> 3U)) 
                                                                 | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_150) 
                                                                     << 2U) 
                                                                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                       >> 3U)))) 
                                                             | (0xffffffeU 
                                                                & ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_154) 
                                                                     << 1U) 
                                                                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                                                                       >> 4U)) 
                                                                   | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_151) 
                                                                       << 1U) 
                                                                      & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140) 
                                                                         >> 4U)))))) 
                                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_decode_d))))))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req 
        = ((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_decode_d) 
               | ((6U < (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any)) 
                  | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze) 
                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_nodma_dc1todc3))))) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_dccm_req));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 1U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval 
        = (0xfU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift1))) 
                    & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval), 1U)) 
                   | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift2))) 
                       & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval), 2U)) 
                      | ((- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_decode_d))))) 
                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval)))));
    if (vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT____Vcellinp__aff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs1_d;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_rs2_d;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__a_ff;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i1_alu_e1__DOT__b_ff;
    }
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken) {
        if ((1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U)))) {
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 8U)));
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 7U)));
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 6U)));
        } else {
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 8U)));
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 7U)));
            vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
                = (1U & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 6U)));
        }
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 9U)) & (IData)((0x43U == 
                                            (0x4fU 
                                             & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))))) 
               | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 9U)) & (IData)((0x44U 
                                               == (0x4fU 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_140))))) 
                  | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162) 
                     & (((3U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142))) 
                         | (4U == (0xfU & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142)))) 
                        & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_142) 
                           >> 6U)))));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 9U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_255)) 
               | (((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 9U)) & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_254)) 
                  | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162) 
                     & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_253) 
                        | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_252)))));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                  & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d) 
               | (((- (IData)(((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162)))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs1_d) 
                  | (((- (IData)(((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 9U)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs1_bypass_data_d) 
                     | ((- (IData)(((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162)))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs1_bypass_data_d))));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                  & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
               | (((- (IData)(((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                               & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162)))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs2_d) 
                  | (((- (IData)(((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 9U)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs2_bypass_data_d) 
                     | ((- (IData)(((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                    & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_162)))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs2_bypass_data_d))));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__low_e1));
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__load_mul_rs2_bypass_e1;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__load_mul_rs1_bypass_e1;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__a_ff_e1;
        vlSelfRef.rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_e1__DOT__b_ff_e1;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)
            ? (0x800U | (((((0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                            << 0x12U) | (((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                                          << 0x11U) 
                                         | ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                                            << 0x10U))) 
                          | (((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                              << 0xfU) | ((0x4000U 
                                           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
                                              << 0xeU)) 
                                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write) 
                                             << 0xdU)))) 
                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_p);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((0x7fffeU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in) 
           | (1U & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu_p 
                     & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_dc2_up))) 
                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken 
        = (1U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_decode_d) 
                 | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3 
        = (IData)(((4U == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval))) 
                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_14 
        = (IData)((2U == (6U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval))));
    rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_15 
        = (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval))));
    vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                  & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken) 
                      & ((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_196) 
                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                        >> 4U)))) ? ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[
                                                           (((IData)(0x3fU) 
                                                             + 
                                                             (0xffU 
                                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U)))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data[
                                                                (7U 
                                                                 & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr), 6U))))) 
                                         >> (0x38U 
                                             & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr 
                                                << 3U)))
                                      : (QData)((IData)(
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                                                         & (IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))))) 
                                                          & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
                                                         | (((- (IData)(
                                                                        ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                                                         & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69)))) 
                                                             & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs2_d) 
                                                            | (((- (IData)(
                                                                           ((IData)(
                                                                                (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)) 
                                                                            & (0U 
                                                                               != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))) 
                                                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs2_bypass_data_d) 
                                                               | ((- (IData)(
                                                                             ((0U 
                                                                               != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69)))) 
                                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs2_bypass_data_d)))))))
            : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr) 
                 + ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13) 
                    | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_51) 
                       & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_50)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_61)
                      ? ((- (IData)((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13))))) 
                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13)) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req))
                          ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_77 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_18 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_13) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_write));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_14) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_14) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_15) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_15) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                           >> 1U));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & ((~ (- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)))) 
                         & (((- (IData)((IData)((0x28000000000ULL 
                                                 == 
                                                 (0x28000000000ULL 
                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                             & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                >> 0x14U)) | (((- (IData)(
                                                          ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69) 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                      >> 0x29U))))) 
                                               & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                                  >> 0x14U)) 
                                              | (((- (IData)((IData)(
                                                                     (0x18000000000ULL 
                                                                      == 
                                                                      (0x18000000000ULL 
                                                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp))))) 
                                                  & ((0xfe0U 
                                                      & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 7U)))) 
                                                 | ((- (IData)(
                                                               ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69) 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                           >> 0x28U))))) 
                                                    & ((0xfe0U 
                                                        & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1 
                                                             >> 7U)))))))));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)
                ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr
                : (((- (IData)((1U & ((~ (IData)((0U 
                                                  != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                      & (IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U)))))) 
                    & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d) 
                   | (((- (IData)(((~ (IData)((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69)))) 
                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__gpr_i1_rs1_d) 
                      | (((- (IData)(((IData)((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 0x27U)) 
                                      & (0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))) 
                          & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_rs1_bypass_data_d) 
                         | ((- (IData)(((0U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                        & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgRegularize_hd62609c9_0_69)))) 
                            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_rs1_bypass_data_d)))));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout);
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1_raw;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) 
                    | (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                        >> 4U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_77) 
               & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_77) 
               & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_77) 
               & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_77) 
               & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout)) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_18)) 
             & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_43)) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout)) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_18)) 
             & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_34)) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout)) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_18)) 
             & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_25)) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_18)) 
             & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
            | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_9)) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2)));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1) 
                 | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken) {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in);
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_i0_lsu_decode_d;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q;
        vlSelfRef.rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_dc1;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout)));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_cinst))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | ((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[0U]) 
               | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[0U]));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[1U]) 
               | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[1U]));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[2U]) 
               | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[2U]));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr) 
               | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_instr));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst3));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc3;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib3;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_cinst)) 
                             | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst3)))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata) 
                  | ((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc3)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[0U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[0U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[0U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[1U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[1U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[1U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[2U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[2U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[2U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_instr) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib3)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst2));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc2;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2;
    }
    if (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_cinst)) 
                             | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst2)) 
                                | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst3))))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata) 
                  | (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc2) 
                     | ((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc3))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[0U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[0U]) 
                  | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[0U]) 
                     | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[0U]))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[1U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[1U]) 
                  | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[1U]) 
                     | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[1U]))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[2U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i1_brp[2U]) 
                  | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[2U]) 
                     | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp3[2U]))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i1_instr) 
                  | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2) 
                     | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib3))));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst1));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1;
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__5(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_53;
    rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_53 = 0;
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1 
        = ((8U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (IData)(((0x208U == (0xff08U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                      & (~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble 
        = (((~ (IData)((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
            & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) 
           | (4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
           & ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done)) 
                 & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done)))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_33 
        = ((6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_54 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
           & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)));
    vlSelfRef.__PVT__sb_arvalid = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
                                   | (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_33));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_33));
    vlSelfRef.__PVT__sb_wvalid = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
                                  | ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                     | (6U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))));
    vlSelfRef.__PVT__sb_awvalid = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
                                   | ((4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state)) 
                                      | (5U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state))));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_40 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_wvalid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_40)
            ? (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)))
            : (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg))));
    rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_53 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_40) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
              | ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
                 & (7U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))));
    if (rvtop__DOT__veer__DOT__dbg__DOT____VdfgRegularize_he9fb0944_0_53) {
        vlSelfRef.__PVT__sb_awaddr = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg;
        vlSelfRef.__PVT__sb_awsize = (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                            >> 4U));
    } else {
        vlSelfRef.__PVT__sb_awaddr = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg;
        vlSelfRef.__PVT__sb_awsize = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | ((IData)((QData)((IData)((0x5e0000U | 
                                       (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                         << 0x18U) 
                                        | (0x3c0U & 
                                           (vlSelfRef.__PVT__sb_awaddr 
                                            >> 0x16U))))))) 
              << 4U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x13U] 
        = (((IData)((QData)((IData)((0x5e0000U | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                   << 0x18U) 
                                                  | (0x3c0U 
                                                     & (vlSelfRef.__PVT__sb_awaddr 
                                                        >> 0x16U))))))) 
            >> 0x1cU) | ((vlSelfRef.__PVT__sb_awaddr 
                          << 7U) | ((IData)(((QData)((IData)(
                                                             (0x5e0000U 
                                                              | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                                  << 0x18U) 
                                                                 | (0x3c0U 
                                                                    & (vlSelfRef.__PVT__sb_awaddr 
                                                                       >> 0x16U)))))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x14U] 
        = (0x7ffU & (((0xfU & (vlSelfRef.__PVT__sb_awaddr 
                               >> 0x19U)) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (0x5e0000U 
                                                                       | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                                           << 0x18U) 
                                                                          | (0x3c0U 
                                                                             & (vlSelfRef.__PVT__sb_awaddr 
                                                                                >> 0x16U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x1cU)) 
                     | (0x70U & (vlSelfRef.__PVT__sb_awaddr 
                                 >> 0x19U))));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0x1fffffU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.__PVT__sb_awaddr)) 
                        << 0x1dU) | (QData)((IData)(
                                                    (0x10000U 
                                                     | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                         << 0x12U) 
                                                        | (vlSelfRef.__PVT__sb_awaddr 
                                                           >> 0x1cU))))))) 
              << 0x15U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xeU] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__sb_awaddr)) 
                      << 0x1dU) | (QData)((IData)((0x10000U 
                                                   | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                       << 0x12U) 
                                                      | (vlSelfRef.__PVT__sb_awaddr 
                                                         >> 0x1cU))))))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__sb_awaddr)) 
                                   << 0x1dU) | (QData)((IData)(
                                                               (0x10000U 
                                                                | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                                    << 0x12U) 
                                                                   | (vlSelfRef.__PVT__sb_awaddr 
                                                                      >> 0x1cU)))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xffc00000U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__sb_awaddr)) 
                         << 0x1dU) | (QData)((IData)(
                                                     (0x10000U 
                                                      | (((IData)(vlSelfRef.__PVT__sb_awsize) 
                                                          << 0x12U) 
                                                         | (vlSelfRef.__PVT__sb_awaddr 
                                                            >> 0x1cU)))))) 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xff3fffffU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (0xffc00000U & (0x400000U | ((IData)(vlSelfRef.__PVT__sb_wvalid) 
                                          << 0x17U))));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = (0x2000000U | vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU]);
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0x3ffffffU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | ((((- (IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                & ((IData)(1U) << (7U & vlSelfRef.__PVT__sb_awaddr))) 
               | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                   & ((IData)(3U) << (6U & vlSelfRef.__PVT__sb_awaddr))) 
                  | (((- (IData)((2U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                      & ((IData)(0xfU) << (4U & vlSelfRef.__PVT__sb_awaddr))) 
                     | (- (IData)((3U == (IData)(vlSelfRef.__PVT__sb_awsize))))))) 
              << 0x1aU));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x10U] 
        = ((0xfffffffcU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x10U]) 
           | (3U & ((((- (IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                      & ((IData)(1U) << (7U & vlSelfRef.__PVT__sb_awaddr))) 
                     | (((- (IData)((1U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                         & ((IData)(3U) << (6U & vlSelfRef.__PVT__sb_awaddr))) 
                        | (((- (IData)((2U == (IData)(vlSelfRef.__PVT__sb_awsize)))) 
                            & ((IData)(0xfU) << (4U 
                                                 & vlSelfRef.__PVT__sb_awaddr))) 
                           | (- (IData)((3U == (IData)(vlSelfRef.__PVT__sb_awsize))))))) 
                    >> 6U)));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x10U] 
        = ((3U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x10U]) 
           | ((IData)((((- (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                        & (((QData)((IData)((0xffU 
                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                            << 0x38U) | (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                   << 0x18U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                      << 0x10U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                       | (((- (QData)((IData)((1U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                           & (((QData)((IData)((0xffffU 
                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                               << 0x30U) | (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))) 
                          | (((- (QData)((IData)((2U 
                                                  == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                              & (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                             | ((- (QData)((IData)(
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata))))) 
              << 2U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x11U] 
        = (((IData)((((- (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                      & (((QData)((IData)((0xffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                          << 0x38U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                               << 0x18U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x10U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                     | (((- (QData)((IData)((1U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                         & (((QData)((IData)((0xffffU 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                           << 0x20U) 
                                          | (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))) 
                        | (((- (QData)((IData)((2U 
                                                == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                            & (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                           | ((- (QData)((IData)((3U 
                                                  == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                              & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata))))) 
            >> 0x1eU) | ((IData)(((((- (QData)((IData)(
                                                       (0U 
                                                        == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                    & (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                   | (((- (QData)((IData)(
                                                          (1U 
                                                           == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                       & (((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                              << 0x20U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))) 
                                      | (((- (QData)((IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                          & (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                         | ((- (QData)((IData)(
                                                               (3U 
                                                                == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                            & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffcU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | ((IData)(((((- (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                         & (((QData)((IData)((0xffU 
                                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                             << 0x38U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x18U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x10U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                        | (((- (QData)((IData)((1U 
                                                == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                            & (((QData)((IData)((0xffffU 
                                                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                              << 0x20U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))) 
                           | (((- (QData)((IData)((2U 
                                                   == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                               & (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                              | ((- (QData)((IData)(
                                                    (3U 
                                                     == (IData)(vlSelfRef.__PVT__sb_awsize))))) 
                                 & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                       >> 0x20U)) >> 0x1eU));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffbU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | ((IData)(vlSelfRef.__PVT__sb_awvalid) 
              << 2U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__11(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din 
        = ((9U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
              >> 0x10U));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__12(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7;
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7 = 0;
    CData/*1:0*/ rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21;
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21 = 0;
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
           & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
              & (4U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in 
        = ((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)) 
           & ((~ ((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)) 
                  | ((IData)((0U == (0xff02U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))) 
                     | (IData)(((0x200U == (0xff00U 
                                            & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                & (0xfU != (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg 
                                            >> 0x1cU))))))) 
              & ((~ ((0U != ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid_en) 
                             | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid))) 
                     | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                        | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_slv_sent_q)))) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble))));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0x7ffU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | ((IData)((QData)((IData)((0x400000U | 
                                       (((IData)(vlSelfRef.__PVT__lsu_awsize) 
                                         << 0x18U) 
                                        | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                              ? 0U : 0xfU) 
                                            << 0x11U) 
                                           | (0x3c0U 
                                              & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                 >> 0x16U)))))))) 
              << 0xbU));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU] 
        = ((0xffffc000U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU]) 
           | (((IData)((QData)((IData)((0x400000U | 
                                        (((IData)(vlSelfRef.__PVT__lsu_awsize) 
                                          << 0x18U) 
                                         | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                               ? 0U
                                               : 0xfU) 
                                             << 0x11U) 
                                            | (0x3c0U 
                                               & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                  >> 0x16U)))))))) 
               >> 0x15U) | ((IData)(((QData)((IData)(
                                                     (0x400000U 
                                                      | (((IData)(vlSelfRef.__PVT__lsu_awsize) 
                                                          << 0x18U) 
                                                         | ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                               ? 0U
                                                               : 0xfU) 
                                                             << 0x11U) 
                                                            | (0x3c0U 
                                                               & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                                  >> 0x16U))))))) 
                                     >> 0x20U)) << 0xbU)));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU] 
        = ((0x3fffU & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU]) 
           | ((IData)((0x1000000000ULL | (((QData)((IData)(vlSelfRef.__PVT__sb_arvalid)) 
                                           << 0x25U) 
                                          | (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__lsu_awaddr)))))) 
              << 0xeU));
    vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfff00000U & vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (((IData)((0x1000000000ULL | (((QData)((IData)(vlSelfRef.__PVT__sb_arvalid)) 
                                            << 0x25U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.__PVT__lsu_awaddr)))))) 
               >> 0x12U) | ((IData)(((0x1000000000ULL 
                                      | (((QData)((IData)(vlSelfRef.__PVT__sb_arvalid)) 
                                          << 0x25U) 
                                         | (((QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.__PVT__lsu_awaddr))))) 
                                     >> 0x20U)) << 0xeU)));
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din) 
            | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
               & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq) 
                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_din)
            : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack));
    if (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in) {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                     >> 4U));
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22 
            = (((QData)((IData)((((- (IData)((0U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))))) 
                                  & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))))) 
                                 | (((- (IData)((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))))) 
                                     & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))) 
                                    | ((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                       >> 4U))))) 
                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))))) 
                << 0x20U) | (QData)((IData)((((- (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                              >> 4U))))) 
                                              & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))))) 
                                             | (((- (IData)(
                                                            (1U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                 >> 4U))))) 
                                                 & ((vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))) 
                                                | ((- (IData)(
                                                              (2U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                   >> 4U))))) 
                                                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg))))));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid 
            = (2U != (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type));
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_5 
            = (0x200U == (0xff00U & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
    } else {
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write));
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write) 
                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_2))
                ? 2U : (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size));
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data;
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
            = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write) 
                & (0xf0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen)))
                ? (4U | (0xfffffffbU & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))
                : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr);
        vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid = 0U;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_5 = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw = 0U;
    }
    if (((0x80000000U <= ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > vlSelfRef.__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar = 0U;
    }
    if (((0x80000000U <= vlSelfRef.__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSelfRef.__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw = 0U;
    }
    if (((0x80000000U <= ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar = 0U;
    }
    if (((0x80000000U <= ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw = 0U;
    }
    if (((0x80000000U <= ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw = 0U;
    }
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 0U;
    vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar = 1U;
    } else {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar = 0U;
    }
    if (((0x80000000U <= ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSelfRef.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
        vlSelfRef.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar = 0U;
    }
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_7 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_6 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_5));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din 
        = ((0xf004U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                        >> 0x10U)) | (0x1e018U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                                   >> 0xfU)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error 
        = ((0xf004U != (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                        >> 0x10U)) & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibvalid 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval) 
           | (((((IData)(((4U == (0xcU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval))) 
                          & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val))) 
                 << 3U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_16) 
                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)) 
                           << 2U)) | ((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_17) 
                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_val)) 
                                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval)) 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_7)))) 
              | (((((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_16) 
                    & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)) 
                   << 3U) | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_17) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)) 
                             << 2U)) | (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ibval)) 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i1_val)) 
                                        << 1U))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____VdfgRegularize_h35f6aa78_0_7));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_6) 
           & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_6) 
           & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_6) 
           & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_6) 
           & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error)) 
              & (((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr) 
                 | (((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                     & (0U != (3U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))) 
                    | (((3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                        & (0U != (7U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))) 
                       | (((0xf004U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                        >> 0x10U)) 
                           & ((~ ((2U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size))) 
                                  | (3U == (3U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size))))) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write))) 
                          | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write) 
                             & (((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                                 & (0xfU != (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                              >> (7U 
                                                  & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))))) 
                                | ((~ ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_2) 
                                       | (0xffU == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen)))) 
                                   & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_size)))))))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0) 
           | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0) 
              | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en))) 
           && (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout)));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_76) 
              & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en))) 
           && (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout)));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_76) 
              & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en))) 
           && (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout)));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_76) 
              & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))) 
           && (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout)));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout;
        vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr) 
                 + ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                    | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                       | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                          | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_76) 
              & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_Q3))));
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7 
        = (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_valid) 
            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_write) 
               | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error) 
                  | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error)))) 
           | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_5) 
              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21 
        = ((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error) 
             | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error) 
                | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                   & ((2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)) 
                      & ((~ ((0xf004U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0x10U)) 
                             | (0x1e018U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                             >> 0xfU)))) 
                         | ((0x1e018U == (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0xfU)) 
                            & (2U != (3U & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                            >> 4U))))))))) 
            << 1U) | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error));
    if (vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en) {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst1)) 
                             | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                                & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst2)))));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | (((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc1) 
                  | ((- (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc2)));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[0U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[0U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[0U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[1U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[1U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[1U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__i0_brp[2U]) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp1[2U]) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp2[2U])));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid)
                    ? (((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                    & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                        & (0x6033U | (0xf8000U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                  << 0xfU)))) 
                       | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                           & (0x6033U | (0xf80U & (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                   << 7U)))) 
                          | (((- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                          & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                              & (0x2073U | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                            << 0x14U))) 
                             | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                & (0x1073U | (vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                              << 0x14U))))))
                    : vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu_i0_instr)) 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib1) 
                  | ((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                     & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib2)));
    } else {
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__cinst0));
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__pc0;
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[0U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[1U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__bp0[2U];
        vlSelfRef.rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0;
    }
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en 
        = (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7) 
            & (3U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_43));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en 
        = (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7) 
            & (2U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_34));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en 
        = (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7) 
            & (1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_25));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en 
        = (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_7) 
            & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_9));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_43)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
            : (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_34)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
            : (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_25)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
            : (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_9)
            ? (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
            : (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_21));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en) 
           | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear))))) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din)) 
                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en)) 
               | (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en)
            ? (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din)))
                ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en)
                    ? (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))
                    : (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)))
                : ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_43)
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22))
            : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear))))) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din)) 
                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en)) 
               | (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en)
            ? (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din)))
                ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en)
                    ? (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))
                    : (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout)))
                : ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_34)
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22))
            : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear))))) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)) 
                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en)) 
               | (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en)
            ? (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)))
                ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en)
                    ? (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))
                    : VL_SHIFTR_QQI(64,64,32, vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_66, 0x20U))
                : ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_25)
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22))
            : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear))))) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((((0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)) 
                & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en)) 
               | (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout)));
    vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en)
            ? (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)))
                ? ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en)
                    ? (QData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_addr))
                    : (QData)((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout)))
                : ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_9)
                    ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgRegularize_h58633fd1_0_22))
            : vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__dout)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__clear)) 
           & ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en) 
              | (IData)(vlSelfRef.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__13(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & (((IData)(((((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__state)) 
                              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__reset_delayed))) 
                             & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                            & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb) 
                                  & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                   << 1U) | (0xfffffffeU & (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__reset_delayed)) 
                                             << 1U) 
                                            & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__state) 
                                               & (((~ 
                                                    ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall)) 
                                                     & (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                         | ((0U 
                                                             == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state)) 
                                                            | ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_hf70f508f__0)) 
                                                               & (2U 
                                                                  == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state))))) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                                           & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout)))))) 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb) 
                                                       & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
                                                  << 1U)))))) 
           | (1U & (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb) 
                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                     & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                        & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb)) 
                           & (0U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__state))))) 
                    | (((~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_wb) 
                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__state)) 
                       | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__reset_delayed)))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h13057dbc_1_1) 
              & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_19) 
            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
           & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
              & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                 & ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                    & ((~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)) 
                       & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)))))));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en 
        = ((1U == (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state)) 
           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_crit_word));
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)) 
            & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)) 
               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2))) 
           | (((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_19) 
               & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                  & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
              | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
                 & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns))));
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                     | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                    | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                   | ((IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                      >> 1U)) | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                    & (~ (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))
            ? (vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgRegularize_hbfcf096c_0_8 
               | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                   & vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                  | (((- (IData)((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                      & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_addr_f1) 
                     | ((- (IData)((1U & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                          & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                             & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                        & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))))
            : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_bf_en)
            ? vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & ((1U & (- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                     & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                   | ((2U & (- (IData)(((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                        & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f1))))) 
                      | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                      & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                          & VL_SHIFTR_III(4,4,32, (0xfU 
                                                   & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)), 1U)) 
                         | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                         & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                             & VL_SHIFTR_III(4,4,32, 
                                             (0xfU 
                                              & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)), 2U)) 
                            | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                            & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                                & VL_SHIFTR_III(4,4,32, 
                                                (0xfU 
                                                 & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)), 3U)) 
                               | (((- (IData)(((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                               & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                   & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout), 1U)) 
                                  | ((- (IData)((1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                    & (~ 
                                                       (((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left) 
                                                         | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right3)) 
                                                        | ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right) 
                                                           | (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2)))))))) 
                                     & (IData)(vlSelfRef.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__14(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q) 
           & (0x80000000U == (0x80000002U & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)));
    if ((8U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state))) {
            vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state)))) {
                vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req 
                    = (IData)((0x80000000U == (0x80000002U 
                                               & vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)));
            }
        }
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__17(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__17\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelfRef.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSelfRef.__PVT__rvtop__DOT__core_rst_l));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__18(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__18\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

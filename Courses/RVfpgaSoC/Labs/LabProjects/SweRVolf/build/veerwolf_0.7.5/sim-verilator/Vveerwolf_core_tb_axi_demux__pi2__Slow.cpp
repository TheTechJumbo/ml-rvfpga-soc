// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"

void Vveerwolf_core_tb_axi_demux__pi2___ctor_var_reset(Vveerwolf_core_tb_axi_demux__pi2* vlSelf);

Vveerwolf_core_tb_axi_demux__pi2::Vveerwolf_core_tb_axi_demux__pi2(Vveerwolf_core_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vveerwolf_core_tb_axi_demux__pi2___ctor_var_reset(this);
}

void Vveerwolf_core_tb_axi_demux__pi2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vveerwolf_core_tb_axi_demux__pi2::~Vveerwolf_core_tb_axi_demux__pi2() {
}

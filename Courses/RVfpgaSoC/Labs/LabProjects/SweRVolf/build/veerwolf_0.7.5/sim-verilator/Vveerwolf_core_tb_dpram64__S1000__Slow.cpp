// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_dpram64__S1000.h"

void Vveerwolf_core_tb_dpram64__S1000___ctor_var_reset(Vveerwolf_core_tb_dpram64__S1000* vlSelf);

Vveerwolf_core_tb_dpram64__S1000::Vveerwolf_core_tb_dpram64__S1000(Vveerwolf_core_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vveerwolf_core_tb_dpram64__S1000___ctor_var_reset(this);
}

void Vveerwolf_core_tb_dpram64__S1000::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vveerwolf_core_tb_dpram64__S1000::~Vveerwolf_core_tb_dpram64__S1000() {
}

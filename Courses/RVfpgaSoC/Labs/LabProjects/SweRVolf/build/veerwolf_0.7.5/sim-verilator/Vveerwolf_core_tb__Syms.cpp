// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb.h"
#include "Vveerwolf_core_tb___024root.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"
#include "Vveerwolf_core_tb___024unit.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"
#include "Vveerwolf_core_tb_wb_mem_wrapper__M1000.h"
#include "Vveerwolf_core_tb_dpram64__S1000.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"
#include "Vveerwolf_core_tb_axi_mux__pi4.h"
#include "Vveerwolf_core_tb_axi_demux_id_counters__pi5.h"

// FUNCTIONS
Vveerwolf_core_tb__Syms::~Vveerwolf_core_tb__Syms()
{
}

Vveerwolf_core_tb__Syms::Vveerwolf_core_tb__Syms(VerilatedContext* contextp, const char* namep, Vveerwolf_core_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__veerwolf_core_tb{this, Verilated::catName(namep, "veerwolf_core_tb")}
    , TOP__veerwolf_core_tb__veerwolf{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_mst_port_mux[0].i_axi_mux")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_mst_port_mux[1].i_axi_mux")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux.gen_demux.i_ar_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[0].i_axi_demux.gen_demux.i_aw_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux.gen_demux.i_ar_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[1].i_axi_demux.gen_demux.i_aw_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux.gen_demux.i_ar_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.axi_intercon.axi_xbar.gen_slv_port_demux[2].i_axi_demux.gen_demux.i_aw_id_counter")}
    , TOP__veerwolf_core_tb__veerwolf__bootrom{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.bootrom")}
    , TOP__veerwolf_core_tb__veerwolf__bootrom__ram{this, Verilated::catName(namep, "veerwolf_core_tb.veerwolf.bootrom.ram")}
{
        // Check resources
        Verilated::stackCheck(6413);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.veerwolf_core_tb = &TOP__veerwolf_core_tb;
    TOP__veerwolf_core_tb.veerwolf = &TOP__veerwolf_core_tb__veerwolf;
    TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__veerwolf_core_tb__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_id_counter = &TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    TOP__veerwolf_core_tb__veerwolf.bootrom = &TOP__veerwolf_core_tb__veerwolf__bootrom;
    TOP__veerwolf_core_tb__veerwolf__bootrom.ram = &TOP__veerwolf_core_tb__veerwolf__bootrom__ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__veerwolf_core_tb.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter.__Vconfigure(false);
    TOP__veerwolf_core_tb__veerwolf__bootrom.__Vconfigure(true);
    TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__Vconfigure(true);
    // Setup scopes
    __Vscope_veerwolf_core_tb__veerwolf__bootrom__ram.configure(this, name(), "veerwolf_core_tb.veerwolf.bootrom.ram", "ram", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_veerwolf_core_tb__veerwolf__bootrom__ram.varInsert(__Vfinal,"mem", &(TOP__veerwolf_core_tb__veerwolf__bootrom__ram.mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,63,0 ,0,511);
    }
}

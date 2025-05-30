//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
//Date        : Thu Apr 10 19:29:05 2025
//Host        : ayman-t480 running 64-bit Ubuntu 24.10
//Command     : generate_target BD.bd
//Design      : BD
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "BD,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=BD,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=37,numReposBlks=37,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=37,numPkgbdBlks=0,bdsource=USER,da_clkrst_cnt=2,synth_mode=Hierarchical}" *) (* HW_HANDOFF = "BD.hwdef" *) 
module BD
   (AN_0,
    Digits_Bits_0,
    clk_0,
    dmi_hard_reset_0,
    dmi_reg_addr_0,
    dmi_reg_en_0,
    dmi_reg_rdata_0,
    dmi_reg_wdata_0,
    dmi_reg_wr_en_0,
    i_ram_arready_0,
    i_ram_awready_0,
    i_ram_bid_0,
    i_ram_bresp_0,
    i_ram_bvalid_0,
    i_ram_init_done_0,
    i_ram_init_error_0,
    i_ram_rdata_0,
    i_ram_rid_0,
    i_ram_rlast_0,
    i_ram_rresp_0,
    i_ram_rvalid_0,
    i_ram_wready_0,
    o_ram_araddr_0,
    o_ram_arburst_0,
    o_ram_arcache_0,
    o_ram_arid_0,
    o_ram_arlen_0,
    o_ram_arlock_0,
    o_ram_arprot_0,
    o_ram_arqos_0,
    o_ram_arregion_0,
    o_ram_arsize_0,
    o_ram_arvalid_0,
    o_ram_awaddr_0,
    o_ram_awburst_0,
    o_ram_awcache_0,
    o_ram_awid_0,
    o_ram_awlen_0,
    o_ram_awlock_0,
    o_ram_awprot_0,
    o_ram_awqos_0,
    o_ram_awregion_0,
    o_ram_awsize_0,
    o_ram_awvalid_0,
    o_ram_bready_0,
    o_ram_rready_0,
    o_ram_wdata_0,
    o_ram_wlast_0,
    o_ram_wstrb_0,
    o_ram_wvalid_0,
    rst_0);
  output [7:0]AN_0;
  output [6:0]Digits_Bits_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK_0 CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK_0, ASSOCIATED_BUSIF ifu_axi_0:lsu_axi_0:sb_axi_0, ASSOCIATED_RESET rst_0, CLK_DOMAIN BD_clk_0, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.DMI_HARD_RESET_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.DMI_HARD_RESET_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input dmi_hard_reset_0;
  input [6:0]dmi_reg_addr_0;
  input dmi_reg_en_0;
  output [31:0]dmi_reg_rdata_0;
  input [31:0]dmi_reg_wdata_0;
  input dmi_reg_wr_en_0;
  input i_ram_arready_0;
  input i_ram_awready_0;
  input [5:0]i_ram_bid_0;
  input [1:0]i_ram_bresp_0;
  input i_ram_bvalid_0;
  input i_ram_init_done_0;
  input i_ram_init_error_0;
  input [63:0]i_ram_rdata_0;
  input [5:0]i_ram_rid_0;
  input i_ram_rlast_0;
  input [1:0]i_ram_rresp_0;
  input i_ram_rvalid_0;
  input i_ram_wready_0;
  output [31:0]o_ram_araddr_0;
  output [1:0]o_ram_arburst_0;
  output [3:0]o_ram_arcache_0;
  output [5:0]o_ram_arid_0;
  output [7:0]o_ram_arlen_0;
  output o_ram_arlock_0;
  output [2:0]o_ram_arprot_0;
  output [3:0]o_ram_arqos_0;
  output [3:0]o_ram_arregion_0;
  output [2:0]o_ram_arsize_0;
  output o_ram_arvalid_0;
  output [31:0]o_ram_awaddr_0;
  output [1:0]o_ram_awburst_0;
  output [3:0]o_ram_awcache_0;
  output [5:0]o_ram_awid_0;
  output [7:0]o_ram_awlen_0;
  output o_ram_awlock_0;
  output [2:0]o_ram_awprot_0;
  output [3:0]o_ram_awqos_0;
  output [3:0]o_ram_awregion_0;
  output [2:0]o_ram_awsize_0;
  output o_ram_awvalid_0;
  output o_ram_bready_0;
  output o_ram_rready_0;
  output [63:0]o_ram_wdata_0;
  output o_ram_wlast_0;
  output [7:0]o_ram_wstrb_0;
  output o_ram_wvalid_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input rst_0;

  wire [7:0]AN_0;
  wire [6:0]Digits_Bits_0;
  wire bidirec_0_outp;
  wire bidirec_10_outp;
  wire bidirec_11_outp;
  wire bidirec_12_outp;
  wire bidirec_13_outp;
  wire bidirec_14_outp;
  wire bidirec_15_outp;
  wire bidirec_16_outp;
  wire bidirec_17_outp;
  wire bidirec_18_outp;
  wire bidirec_19_outp;
  wire bidirec_1_outp;
  wire bidirec_20_outp;
  wire bidirec_21_outp;
  wire bidirec_22_outp;
  wire bidirec_23_outp;
  wire bidirec_24_outp;
  wire bidirec_25_outp;
  wire bidirec_26_outp;
  wire bidirec_27_outp;
  wire bidirec_28_outp;
  wire bidirec_29_outp;
  wire bidirec_2_outp;
  wire bidirec_30_outp;
  wire bidirec_31_outp;
  wire bidirec_3_outp;
  wire bidirec_4_outp;
  wire bidirec_5_outp;
  wire bidirec_6_outp;
  wire bidirec_7_outp;
  wire bidirec_8_outp;
  wire bidirec_9_outp;
  wire bootrom_wrapper_0_o_wb_ack;
  wire [31:0]bootrom_wrapper_0_o_wb_rdt;
  wire clk_0;
  wire dmi_hard_reset_0;
  wire [6:0]dmi_reg_addr_0;
  wire dmi_reg_en_0;
  wire [31:0]dmi_reg_rdata_0;
  wire [31:0]dmi_reg_wdata_0;
  wire dmi_reg_wr_en_0;
  wire gpio_wrapper_0_inp_0;
  wire gpio_wrapper_0_inp_1;
  wire gpio_wrapper_0_inp_10;
  wire gpio_wrapper_0_inp_11;
  wire gpio_wrapper_0_inp_12;
  wire gpio_wrapper_0_inp_13;
  wire gpio_wrapper_0_inp_14;
  wire gpio_wrapper_0_inp_15;
  wire gpio_wrapper_0_inp_16;
  wire gpio_wrapper_0_inp_17;
  wire gpio_wrapper_0_inp_18;
  wire gpio_wrapper_0_inp_19;
  wire gpio_wrapper_0_inp_2;
  wire gpio_wrapper_0_inp_20;
  wire gpio_wrapper_0_inp_21;
  wire gpio_wrapper_0_inp_22;
  wire gpio_wrapper_0_inp_23;
  wire gpio_wrapper_0_inp_24;
  wire gpio_wrapper_0_inp_25;
  wire gpio_wrapper_0_inp_26;
  wire gpio_wrapper_0_inp_27;
  wire gpio_wrapper_0_inp_28;
  wire gpio_wrapper_0_inp_29;
  wire gpio_wrapper_0_inp_3;
  wire gpio_wrapper_0_inp_30;
  wire gpio_wrapper_0_inp_31;
  wire gpio_wrapper_0_inp_4;
  wire gpio_wrapper_0_inp_5;
  wire gpio_wrapper_0_inp_6;
  wire gpio_wrapper_0_inp_7;
  wire gpio_wrapper_0_inp_8;
  wire gpio_wrapper_0_inp_9;
  wire gpio_wrapper_0_oe_0;
  wire gpio_wrapper_0_oe_1;
  wire gpio_wrapper_0_oe_10;
  wire gpio_wrapper_0_oe_11;
  wire gpio_wrapper_0_oe_12;
  wire gpio_wrapper_0_oe_13;
  wire gpio_wrapper_0_oe_14;
  wire gpio_wrapper_0_oe_15;
  wire gpio_wrapper_0_oe_16;
  wire gpio_wrapper_0_oe_17;
  wire gpio_wrapper_0_oe_18;
  wire gpio_wrapper_0_oe_19;
  wire gpio_wrapper_0_oe_2;
  wire gpio_wrapper_0_oe_20;
  wire gpio_wrapper_0_oe_21;
  wire gpio_wrapper_0_oe_22;
  wire gpio_wrapper_0_oe_23;
  wire gpio_wrapper_0_oe_24;
  wire gpio_wrapper_0_oe_25;
  wire gpio_wrapper_0_oe_26;
  wire gpio_wrapper_0_oe_27;
  wire gpio_wrapper_0_oe_28;
  wire gpio_wrapper_0_oe_29;
  wire gpio_wrapper_0_oe_3;
  wire gpio_wrapper_0_oe_30;
  wire gpio_wrapper_0_oe_31;
  wire gpio_wrapper_0_oe_4;
  wire gpio_wrapper_0_oe_5;
  wire gpio_wrapper_0_oe_6;
  wire gpio_wrapper_0_oe_7;
  wire gpio_wrapper_0_oe_8;
  wire gpio_wrapper_0_oe_9;
  wire gpio_wrapper_0_wb_ack_o;
  wire [31:0]gpio_wrapper_0_wb_dat_o;
  wire gpio_wrapper_0_wb_err_o;
  wire gpio_wrapper_0_wb_inta_o;
  wire i_ram_arready_0;
  wire i_ram_awready_0;
  wire [5:0]i_ram_bid_0;
  wire [1:0]i_ram_bresp_0;
  wire i_ram_bvalid_0;
  wire i_ram_init_done_0;
  wire i_ram_init_error_0;
  wire [63:0]i_ram_rdata_0;
  wire [5:0]i_ram_rid_0;
  wire i_ram_rlast_0;
  wire [1:0]i_ram_rresp_0;
  wire i_ram_rvalid_0;
  wire i_ram_wready_0;
  wire intcon_wrapper_bd_0_o_ifu_arready;
  wire [63:0]intcon_wrapper_bd_0_o_ifu_rdata;
  wire [2:0]intcon_wrapper_bd_0_o_ifu_rid;
  wire intcon_wrapper_bd_0_o_ifu_rlast;
  wire [1:0]intcon_wrapper_bd_0_o_ifu_rresp;
  wire intcon_wrapper_bd_0_o_ifu_rvalid;
  wire intcon_wrapper_bd_0_o_lsu_arready;
  wire intcon_wrapper_bd_0_o_lsu_awready;
  wire [3:0]intcon_wrapper_bd_0_o_lsu_bid;
  wire [1:0]intcon_wrapper_bd_0_o_lsu_bresp;
  wire intcon_wrapper_bd_0_o_lsu_bvalid;
  wire [63:0]intcon_wrapper_bd_0_o_lsu_rdata;
  wire [3:0]intcon_wrapper_bd_0_o_lsu_rid;
  wire intcon_wrapper_bd_0_o_lsu_rlast;
  wire [1:0]intcon_wrapper_bd_0_o_lsu_rresp;
  wire intcon_wrapper_bd_0_o_lsu_rvalid;
  wire intcon_wrapper_bd_0_o_lsu_wready;
  wire intcon_wrapper_bd_0_o_sb_arready;
  wire intcon_wrapper_bd_0_o_sb_awready;
  wire [0:0]intcon_wrapper_bd_0_o_sb_bid;
  wire [1:0]intcon_wrapper_bd_0_o_sb_bresp;
  wire intcon_wrapper_bd_0_o_sb_bvalid;
  wire [63:0]intcon_wrapper_bd_0_o_sb_rdata;
  wire [0:0]intcon_wrapper_bd_0_o_sb_rid;
  wire intcon_wrapper_bd_0_o_sb_rlast;
  wire [1:0]intcon_wrapper_bd_0_o_sb_rresp;
  wire intcon_wrapper_bd_0_o_sb_rvalid;
  wire intcon_wrapper_bd_0_o_sb_wready;
  wire [7:0]intcon_wrapper_bd_0_wb_gpio_adr_o;
  wire intcon_wrapper_bd_0_wb_gpio_cyc_o;
  wire [31:0]intcon_wrapper_bd_0_wb_gpio_dat_o;
  wire [3:0]intcon_wrapper_bd_0_wb_gpio_sel_o;
  wire intcon_wrapper_bd_0_wb_gpio_stb_o;
  wire intcon_wrapper_bd_0_wb_gpio_we_o;
  wire [31:0]intcon_wrapper_bd_0_wb_rom_adr_o;
  wire intcon_wrapper_bd_0_wb_rom_cyc_o;
  wire [31:0]intcon_wrapper_bd_0_wb_rom_dat_o;
  wire [3:0]intcon_wrapper_bd_0_wb_rom_sel_o;
  wire intcon_wrapper_bd_0_wb_rom_stb_o;
  wire intcon_wrapper_bd_0_wb_rom_we_o;
  wire [31:0]intcon_wrapper_bd_0_wb_sys_adr_o;
  wire intcon_wrapper_bd_0_wb_sys_cyc_o;
  wire [31:0]intcon_wrapper_bd_0_wb_sys_dat_o;
  wire [3:0]intcon_wrapper_bd_0_wb_sys_sel_o;
  wire intcon_wrapper_bd_0_wb_sys_stb_o;
  wire intcon_wrapper_bd_0_wb_sys_we_o;
  wire [31:0]o_ram_araddr_0;
  wire [1:0]o_ram_arburst_0;
  wire [3:0]o_ram_arcache_0;
  wire [5:0]o_ram_arid_0;
  wire [7:0]o_ram_arlen_0;
  wire o_ram_arlock_0;
  wire [2:0]o_ram_arprot_0;
  wire [3:0]o_ram_arqos_0;
  wire [3:0]o_ram_arregion_0;
  wire [2:0]o_ram_arsize_0;
  wire o_ram_arvalid_0;
  wire [31:0]o_ram_awaddr_0;
  wire [1:0]o_ram_awburst_0;
  wire [3:0]o_ram_awcache_0;
  wire [5:0]o_ram_awid_0;
  wire [7:0]o_ram_awlen_0;
  wire o_ram_awlock_0;
  wire [2:0]o_ram_awprot_0;
  wire [3:0]o_ram_awqos_0;
  wire [3:0]o_ram_awregion_0;
  wire [2:0]o_ram_awsize_0;
  wire o_ram_awvalid_0;
  wire o_ram_bready_0;
  wire o_ram_rready_0;
  wire [63:0]o_ram_wdata_0;
  wire o_ram_wlast_0;
  wire [7:0]o_ram_wstrb_0;
  wire o_ram_wvalid_0;
  wire rst_0;
  wire [31:0]swerv_wrapper_verilog_0_ifu_axi_araddr;
  wire [1:0]swerv_wrapper_verilog_0_ifu_axi_arburst;
  wire [3:0]swerv_wrapper_verilog_0_ifu_axi_arcache;
  wire [2:0]swerv_wrapper_verilog_0_ifu_axi_arid;
  wire [7:0]swerv_wrapper_verilog_0_ifu_axi_arlen;
  wire swerv_wrapper_verilog_0_ifu_axi_arlock;
  wire [2:0]swerv_wrapper_verilog_0_ifu_axi_arprot;
  wire [3:0]swerv_wrapper_verilog_0_ifu_axi_arqos;
  wire [3:0]swerv_wrapper_verilog_0_ifu_axi_arregion;
  wire [2:0]swerv_wrapper_verilog_0_ifu_axi_arsize;
  wire swerv_wrapper_verilog_0_ifu_axi_arvalid;
  wire swerv_wrapper_verilog_0_ifu_axi_rready;
  wire [31:0]swerv_wrapper_verilog_0_lsu_axi_araddr;
  wire [1:0]swerv_wrapper_verilog_0_lsu_axi_arburst;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_arcache;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_arid;
  wire [7:0]swerv_wrapper_verilog_0_lsu_axi_arlen;
  wire swerv_wrapper_verilog_0_lsu_axi_arlock;
  wire [2:0]swerv_wrapper_verilog_0_lsu_axi_arprot;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_arqos;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_arregion;
  wire [2:0]swerv_wrapper_verilog_0_lsu_axi_arsize;
  wire swerv_wrapper_verilog_0_lsu_axi_arvalid;
  wire [31:0]swerv_wrapper_verilog_0_lsu_axi_awaddr;
  wire [1:0]swerv_wrapper_verilog_0_lsu_axi_awburst;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_awcache;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_awid;
  wire [7:0]swerv_wrapper_verilog_0_lsu_axi_awlen;
  wire swerv_wrapper_verilog_0_lsu_axi_awlock;
  wire [2:0]swerv_wrapper_verilog_0_lsu_axi_awprot;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_awqos;
  wire [3:0]swerv_wrapper_verilog_0_lsu_axi_awregion;
  wire [2:0]swerv_wrapper_verilog_0_lsu_axi_awsize;
  wire swerv_wrapper_verilog_0_lsu_axi_awvalid;
  wire swerv_wrapper_verilog_0_lsu_axi_bready;
  wire swerv_wrapper_verilog_0_lsu_axi_rready;
  wire [63:0]swerv_wrapper_verilog_0_lsu_axi_wdata;
  wire swerv_wrapper_verilog_0_lsu_axi_wlast;
  wire [7:0]swerv_wrapper_verilog_0_lsu_axi_wstrb;
  wire swerv_wrapper_verilog_0_lsu_axi_wvalid;
  wire [31:0]swerv_wrapper_verilog_0_sb_axi_araddr;
  wire [1:0]swerv_wrapper_verilog_0_sb_axi_arburst;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_arcache;
  wire [0:0]swerv_wrapper_verilog_0_sb_axi_arid;
  wire [7:0]swerv_wrapper_verilog_0_sb_axi_arlen;
  wire swerv_wrapper_verilog_0_sb_axi_arlock;
  wire [2:0]swerv_wrapper_verilog_0_sb_axi_arprot;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_arqos;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_arregion;
  wire [2:0]swerv_wrapper_verilog_0_sb_axi_arsize;
  wire swerv_wrapper_verilog_0_sb_axi_arvalid;
  wire [31:0]swerv_wrapper_verilog_0_sb_axi_awaddr;
  wire [1:0]swerv_wrapper_verilog_0_sb_axi_awburst;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_awcache;
  wire [0:0]swerv_wrapper_verilog_0_sb_axi_awid;
  wire [7:0]swerv_wrapper_verilog_0_sb_axi_awlen;
  wire swerv_wrapper_verilog_0_sb_axi_awlock;
  wire [2:0]swerv_wrapper_verilog_0_sb_axi_awprot;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_awqos;
  wire [3:0]swerv_wrapper_verilog_0_sb_axi_awregion;
  wire [2:0]swerv_wrapper_verilog_0_sb_axi_awsize;
  wire swerv_wrapper_verilog_0_sb_axi_awvalid;
  wire swerv_wrapper_verilog_0_sb_axi_bready;
  wire swerv_wrapper_verilog_0_sb_axi_rready;
  wire [63:0]swerv_wrapper_verilog_0_sb_axi_wdata;
  wire swerv_wrapper_verilog_0_sb_axi_wlast;
  wire [7:0]swerv_wrapper_verilog_0_sb_axi_wstrb;
  wire swerv_wrapper_verilog_0_sb_axi_wvalid;
  wire syscon_wrapper_0_o_nmi_int;
  wire [31:0]syscon_wrapper_0_o_nmi_vec;
  wire syscon_wrapper_0_o_timer_irq;
  wire syscon_wrapper_0_o_wb_ack;
  wire [31:0]syscon_wrapper_0_o_wb_rdt;

  BD_bidirec_0_0 bidirec_0
       (.inp(gpio_wrapper_0_inp_0),
        .oe(gpio_wrapper_0_oe_0),
        .outp(bidirec_0_outp));
  BD_bidirec_0_2 bidirec_1
       (.inp(gpio_wrapper_0_inp_1),
        .oe(gpio_wrapper_0_oe_1),
        .outp(bidirec_1_outp));
  BD_bidirec_1_4 bidirec_10
       (.inp(gpio_wrapper_0_inp_10),
        .oe(gpio_wrapper_0_oe_10),
        .outp(bidirec_10_outp));
  BD_bidirec_2_2 bidirec_11
       (.inp(gpio_wrapper_0_inp_11),
        .oe(gpio_wrapper_0_oe_11),
        .outp(bidirec_11_outp));
  BD_bidirec_3_2 bidirec_12
       (.inp(gpio_wrapper_0_inp_12),
        .oe(gpio_wrapper_0_oe_12),
        .outp(bidirec_12_outp));
  BD_bidirec_4_3 bidirec_13
       (.inp(gpio_wrapper_0_inp_13),
        .oe(gpio_wrapper_0_oe_13),
        .outp(bidirec_13_outp));
  BD_bidirec_5_3 bidirec_14
       (.inp(gpio_wrapper_0_inp_14),
        .oe(gpio_wrapper_0_oe_14),
        .outp(bidirec_14_outp));
  BD_bidirec_7_2 bidirec_15
       (.inp(gpio_wrapper_0_inp_15),
        .oe(gpio_wrapper_0_oe_15),
        .outp(bidirec_15_outp));
  BD_bidirec_6_4 bidirec_16
       (.inp(gpio_wrapper_0_inp_16),
        .oe(gpio_wrapper_0_oe_16),
        .outp(bidirec_16_outp));
  BD_bidirec_0_5 bidirec_17
       (.inp(gpio_wrapper_0_inp_17),
        .oe(gpio_wrapper_0_oe_17),
        .outp(bidirec_17_outp));
  BD_bidirec_1_5 bidirec_18
       (.inp(gpio_wrapper_0_inp_18),
        .oe(gpio_wrapper_0_oe_18),
        .outp(bidirec_18_outp));
  BD_bidirec_2_3 bidirec_19
       (.inp(gpio_wrapper_0_inp_19),
        .oe(gpio_wrapper_0_oe_19),
        .outp(bidirec_19_outp));
  BD_bidirec_1_2 bidirec_2
       (.inp(gpio_wrapper_0_inp_2),
        .oe(gpio_wrapper_0_oe_2),
        .outp(bidirec_2_outp));
  BD_bidirec_3_3 bidirec_20
       (.inp(gpio_wrapper_0_inp_20),
        .oe(gpio_wrapper_0_oe_20),
        .outp(bidirec_20_outp));
  BD_bidirec_4_4 bidirec_21
       (.inp(gpio_wrapper_0_inp_21),
        .oe(gpio_wrapper_0_oe_21),
        .outp(bidirec_21_outp));
  BD_bidirec_5_4 bidirec_22
       (.inp(gpio_wrapper_0_inp_22),
        .oe(gpio_wrapper_0_oe_22),
        .outp(bidirec_22_outp));
  BD_bidirec_7_3 bidirec_23
       (.inp(gpio_wrapper_0_inp_23),
        .oe(gpio_wrapper_0_oe_23),
        .outp(bidirec_23_outp));
  BD_bidirec_6_5 bidirec_24
       (.inp(gpio_wrapper_0_inp_24),
        .oe(gpio_wrapper_0_oe_24),
        .outp(bidirec_24_outp));
  BD_bidirec_0_6 bidirec_25
       (.inp(gpio_wrapper_0_inp_25),
        .oe(gpio_wrapper_0_oe_25),
        .outp(bidirec_25_outp));
  BD_bidirec_1_6 bidirec_26
       (.inp(gpio_wrapper_0_inp_26),
        .oe(gpio_wrapper_0_oe_26),
        .outp(bidirec_26_outp));
  BD_bidirec_2_4 bidirec_27
       (.inp(gpio_wrapper_0_inp_27),
        .oe(gpio_wrapper_0_oe_27),
        .outp(bidirec_27_outp));
  BD_bidirec_3_4 bidirec_28
       (.inp(gpio_wrapper_0_inp_28),
        .oe(gpio_wrapper_0_oe_28),
        .outp(bidirec_28_outp));
  BD_bidirec_4_5 bidirec_29
       (.inp(gpio_wrapper_0_inp_29),
        .oe(gpio_wrapper_0_oe_29),
        .outp(bidirec_29_outp));
  BD_bidirec_2_0 bidirec_3
       (.inp(gpio_wrapper_0_inp_3),
        .oe(gpio_wrapper_0_oe_3),
        .outp(bidirec_3_outp));
  BD_bidirec_5_5 bidirec_30
       (.inp(gpio_wrapper_0_inp_30),
        .oe(gpio_wrapper_0_oe_30),
        .outp(bidirec_30_outp));
  BD_bidirec_7_4 bidirec_31
       (.inp(gpio_wrapper_0_inp_31),
        .oe(gpio_wrapper_0_oe_31),
        .outp(bidirec_31_outp));
  BD_bidirec_3_0 bidirec_4
       (.inp(gpio_wrapper_0_inp_4),
        .oe(gpio_wrapper_0_oe_4),
        .outp(bidirec_4_outp));
  BD_bidirec_4_0 bidirec_5
       (.inp(gpio_wrapper_0_inp_5),
        .oe(gpio_wrapper_0_oe_5),
        .outp(bidirec_5_outp));
  BD_bidirec_5_0 bidirec_6
       (.inp(gpio_wrapper_0_inp_6),
        .oe(gpio_wrapper_0_oe_6),
        .outp(bidirec_6_outp));
  BD_bidirec_6_0 bidirec_7
       (.inp(gpio_wrapper_0_inp_7),
        .oe(gpio_wrapper_0_oe_7),
        .outp(bidirec_7_outp));
  BD_bidirec_6_3 bidirec_8
       (.inp(gpio_wrapper_0_inp_8),
        .oe(gpio_wrapper_0_oe_8),
        .outp(bidirec_8_outp));
  BD_bidirec_0_4 bidirec_9
       (.inp(gpio_wrapper_0_inp_9),
        .oe(gpio_wrapper_0_oe_9),
        .outp(bidirec_9_outp));
  BD_bootrom_wrapper_0_0 bootrom_wrapper_0
       (.i_clk(clk_0),
        .i_rst(rst_0),
        .i_wb_adr(intcon_wrapper_bd_0_wb_rom_adr_o),
        .i_wb_cyc(intcon_wrapper_bd_0_wb_rom_cyc_o),
        .i_wb_dat(intcon_wrapper_bd_0_wb_rom_dat_o),
        .i_wb_sel(intcon_wrapper_bd_0_wb_rom_sel_o),
        .i_wb_stb(intcon_wrapper_bd_0_wb_rom_stb_o),
        .i_wb_we(intcon_wrapper_bd_0_wb_rom_we_o),
        .o_wb_ack(bootrom_wrapper_0_o_wb_ack),
        .o_wb_rdt(bootrom_wrapper_0_o_wb_rdt));
  BD_gpio_wrapper_0_0 gpio_wrapper_0
       (.inp_0(gpio_wrapper_0_inp_0),
        .inp_1(gpio_wrapper_0_inp_1),
        .inp_10(gpio_wrapper_0_inp_10),
        .inp_11(gpio_wrapper_0_inp_11),
        .inp_12(gpio_wrapper_0_inp_12),
        .inp_13(gpio_wrapper_0_inp_13),
        .inp_14(gpio_wrapper_0_inp_14),
        .inp_15(gpio_wrapper_0_inp_15),
        .inp_16(gpio_wrapper_0_inp_16),
        .inp_17(gpio_wrapper_0_inp_17),
        .inp_18(gpio_wrapper_0_inp_18),
        .inp_19(gpio_wrapper_0_inp_19),
        .inp_2(gpio_wrapper_0_inp_2),
        .inp_20(gpio_wrapper_0_inp_20),
        .inp_21(gpio_wrapper_0_inp_21),
        .inp_22(gpio_wrapper_0_inp_22),
        .inp_23(gpio_wrapper_0_inp_23),
        .inp_24(gpio_wrapper_0_inp_24),
        .inp_25(gpio_wrapper_0_inp_25),
        .inp_26(gpio_wrapper_0_inp_26),
        .inp_27(gpio_wrapper_0_inp_27),
        .inp_28(gpio_wrapper_0_inp_28),
        .inp_29(gpio_wrapper_0_inp_29),
        .inp_3(gpio_wrapper_0_inp_3),
        .inp_30(gpio_wrapper_0_inp_30),
        .inp_31(gpio_wrapper_0_inp_31),
        .inp_4(gpio_wrapper_0_inp_4),
        .inp_5(gpio_wrapper_0_inp_5),
        .inp_6(gpio_wrapper_0_inp_6),
        .inp_7(gpio_wrapper_0_inp_7),
        .inp_8(gpio_wrapper_0_inp_8),
        .inp_9(gpio_wrapper_0_inp_9),
        .oe_0(gpio_wrapper_0_oe_0),
        .oe_1(gpio_wrapper_0_oe_1),
        .oe_10(gpio_wrapper_0_oe_10),
        .oe_11(gpio_wrapper_0_oe_11),
        .oe_12(gpio_wrapper_0_oe_12),
        .oe_13(gpio_wrapper_0_oe_13),
        .oe_14(gpio_wrapper_0_oe_14),
        .oe_15(gpio_wrapper_0_oe_15),
        .oe_16(gpio_wrapper_0_oe_16),
        .oe_17(gpio_wrapper_0_oe_17),
        .oe_18(gpio_wrapper_0_oe_18),
        .oe_19(gpio_wrapper_0_oe_19),
        .oe_2(gpio_wrapper_0_oe_2),
        .oe_20(gpio_wrapper_0_oe_20),
        .oe_21(gpio_wrapper_0_oe_21),
        .oe_22(gpio_wrapper_0_oe_22),
        .oe_23(gpio_wrapper_0_oe_23),
        .oe_24(gpio_wrapper_0_oe_24),
        .oe_25(gpio_wrapper_0_oe_25),
        .oe_26(gpio_wrapper_0_oe_26),
        .oe_27(gpio_wrapper_0_oe_27),
        .oe_28(gpio_wrapper_0_oe_28),
        .oe_29(gpio_wrapper_0_oe_29),
        .oe_3(gpio_wrapper_0_oe_3),
        .oe_30(gpio_wrapper_0_oe_30),
        .oe_31(gpio_wrapper_0_oe_31),
        .oe_4(gpio_wrapper_0_oe_4),
        .oe_5(gpio_wrapper_0_oe_5),
        .oe_6(gpio_wrapper_0_oe_6),
        .oe_7(gpio_wrapper_0_oe_7),
        .oe_8(gpio_wrapper_0_oe_8),
        .oe_9(gpio_wrapper_0_oe_9),
        .outp_0(bidirec_0_outp),
        .outp_1(bidirec_1_outp),
        .outp_10(bidirec_10_outp),
        .outp_11(bidirec_11_outp),
        .outp_12(bidirec_12_outp),
        .outp_13(bidirec_13_outp),
        .outp_14(bidirec_14_outp),
        .outp_15(bidirec_15_outp),
        .outp_16(bidirec_16_outp),
        .outp_17(bidirec_17_outp),
        .outp_18(bidirec_18_outp),
        .outp_19(bidirec_19_outp),
        .outp_2(bidirec_2_outp),
        .outp_20(bidirec_20_outp),
        .outp_21(bidirec_21_outp),
        .outp_22(bidirec_22_outp),
        .outp_23(bidirec_23_outp),
        .outp_24(bidirec_24_outp),
        .outp_25(bidirec_25_outp),
        .outp_26(bidirec_26_outp),
        .outp_27(bidirec_27_outp),
        .outp_28(bidirec_28_outp),
        .outp_29(bidirec_29_outp),
        .outp_3(bidirec_3_outp),
        .outp_30(bidirec_30_outp),
        .outp_31(bidirec_31_outp),
        .outp_4(bidirec_4_outp),
        .outp_5(bidirec_5_outp),
        .outp_6(bidirec_6_outp),
        .outp_7(bidirec_7_outp),
        .outp_8(bidirec_8_outp),
        .outp_9(bidirec_9_outp),
        .wb_ack_o(gpio_wrapper_0_wb_ack_o),
        .wb_adr_i(intcon_wrapper_bd_0_wb_gpio_adr_o),
        .wb_clk_i(clk_0),
        .wb_cyc_i(intcon_wrapper_bd_0_wb_gpio_cyc_o),
        .wb_dat_i(intcon_wrapper_bd_0_wb_gpio_dat_o),
        .wb_dat_o(gpio_wrapper_0_wb_dat_o),
        .wb_err_o(gpio_wrapper_0_wb_err_o),
        .wb_inta_o(gpio_wrapper_0_wb_inta_o),
        .wb_rst_i(rst_0),
        .wb_sel_i(intcon_wrapper_bd_0_wb_gpio_sel_o),
        .wb_stb_i(intcon_wrapper_bd_0_wb_gpio_stb_o),
        .wb_we_i(intcon_wrapper_bd_0_wb_gpio_we_o));
  BD_intcon_wrapper_bd_0_0 intcon_wrapper_bd_0
       (.clk_i_wrapper(clk_0),
        .i_ifu_araddr(swerv_wrapper_verilog_0_ifu_axi_araddr),
        .i_ifu_arburst(swerv_wrapper_verilog_0_ifu_axi_arburst),
        .i_ifu_arcache(swerv_wrapper_verilog_0_ifu_axi_arcache),
        .i_ifu_arid(swerv_wrapper_verilog_0_ifu_axi_arid),
        .i_ifu_arlen(swerv_wrapper_verilog_0_ifu_axi_arlen),
        .i_ifu_arlock(swerv_wrapper_verilog_0_ifu_axi_arlock),
        .i_ifu_arprot(swerv_wrapper_verilog_0_ifu_axi_arprot),
        .i_ifu_arqos(swerv_wrapper_verilog_0_ifu_axi_arqos),
        .i_ifu_arregion(swerv_wrapper_verilog_0_ifu_axi_arregion),
        .i_ifu_arsize(swerv_wrapper_verilog_0_ifu_axi_arsize),
        .i_ifu_arvalid(swerv_wrapper_verilog_0_ifu_axi_arvalid),
        .i_ifu_rready(swerv_wrapper_verilog_0_ifu_axi_rready),
        .i_lsu_araddr(swerv_wrapper_verilog_0_lsu_axi_araddr),
        .i_lsu_arburst(swerv_wrapper_verilog_0_lsu_axi_arburst),
        .i_lsu_arcache(swerv_wrapper_verilog_0_lsu_axi_arcache),
        .i_lsu_arid(swerv_wrapper_verilog_0_lsu_axi_arid),
        .i_lsu_arlen(swerv_wrapper_verilog_0_lsu_axi_arlen),
        .i_lsu_arlock(swerv_wrapper_verilog_0_lsu_axi_arlock),
        .i_lsu_arprot(swerv_wrapper_verilog_0_lsu_axi_arprot),
        .i_lsu_arqos(swerv_wrapper_verilog_0_lsu_axi_arqos),
        .i_lsu_arregion(swerv_wrapper_verilog_0_lsu_axi_arregion),
        .i_lsu_arsize(swerv_wrapper_verilog_0_lsu_axi_arsize),
        .i_lsu_arvalid(swerv_wrapper_verilog_0_lsu_axi_arvalid),
        .i_lsu_awaddr(swerv_wrapper_verilog_0_lsu_axi_awaddr),
        .i_lsu_awburst(swerv_wrapper_verilog_0_lsu_axi_awburst),
        .i_lsu_awcache(swerv_wrapper_verilog_0_lsu_axi_awcache),
        .i_lsu_awid(swerv_wrapper_verilog_0_lsu_axi_awid),
        .i_lsu_awlen(swerv_wrapper_verilog_0_lsu_axi_awlen),
        .i_lsu_awlock(swerv_wrapper_verilog_0_lsu_axi_awlock),
        .i_lsu_awprot(swerv_wrapper_verilog_0_lsu_axi_awprot),
        .i_lsu_awqos(swerv_wrapper_verilog_0_lsu_axi_awqos),
        .i_lsu_awregion(swerv_wrapper_verilog_0_lsu_axi_awregion),
        .i_lsu_awsize(swerv_wrapper_verilog_0_lsu_axi_awsize),
        .i_lsu_awvalid(swerv_wrapper_verilog_0_lsu_axi_awvalid),
        .i_lsu_bready(swerv_wrapper_verilog_0_lsu_axi_bready),
        .i_lsu_rready(swerv_wrapper_verilog_0_lsu_axi_rready),
        .i_lsu_wdata(swerv_wrapper_verilog_0_lsu_axi_wdata),
        .i_lsu_wlast(swerv_wrapper_verilog_0_lsu_axi_wlast),
        .i_lsu_wstrb(swerv_wrapper_verilog_0_lsu_axi_wstrb),
        .i_lsu_wvalid(swerv_wrapper_verilog_0_lsu_axi_wvalid),
        .i_ram_arready(i_ram_arready_0),
        .i_ram_awready(i_ram_awready_0),
        .i_ram_bid(i_ram_bid_0),
        .i_ram_bresp(i_ram_bresp_0),
        .i_ram_bvalid(i_ram_bvalid_0),
        .i_ram_rdata(i_ram_rdata_0),
        .i_ram_rid(i_ram_rid_0),
        .i_ram_rlast(i_ram_rlast_0),
        .i_ram_rresp(i_ram_rresp_0),
        .i_ram_rvalid(i_ram_rvalid_0),
        .i_ram_wready(i_ram_wready_0),
        .i_sb_araddr(swerv_wrapper_verilog_0_sb_axi_araddr),
        .i_sb_arburst(swerv_wrapper_verilog_0_sb_axi_arburst),
        .i_sb_arcache(swerv_wrapper_verilog_0_sb_axi_arcache),
        .i_sb_arid(swerv_wrapper_verilog_0_sb_axi_arid),
        .i_sb_arlen(swerv_wrapper_verilog_0_sb_axi_arlen),
        .i_sb_arlock(swerv_wrapper_verilog_0_sb_axi_arlock),
        .i_sb_arprot(swerv_wrapper_verilog_0_sb_axi_arprot),
        .i_sb_arqos(swerv_wrapper_verilog_0_sb_axi_arqos),
        .i_sb_arregion(swerv_wrapper_verilog_0_sb_axi_arregion),
        .i_sb_arsize(swerv_wrapper_verilog_0_sb_axi_arsize),
        .i_sb_arvalid(swerv_wrapper_verilog_0_sb_axi_arvalid),
        .i_sb_awaddr(swerv_wrapper_verilog_0_sb_axi_awaddr),
        .i_sb_awburst(swerv_wrapper_verilog_0_sb_axi_awburst),
        .i_sb_awcache(swerv_wrapper_verilog_0_sb_axi_awcache),
        .i_sb_awid(swerv_wrapper_verilog_0_sb_axi_awid),
        .i_sb_awlen(swerv_wrapper_verilog_0_sb_axi_awlen),
        .i_sb_awlock(swerv_wrapper_verilog_0_sb_axi_awlock),
        .i_sb_awprot(swerv_wrapper_verilog_0_sb_axi_awprot),
        .i_sb_awqos(swerv_wrapper_verilog_0_sb_axi_awqos),
        .i_sb_awregion(swerv_wrapper_verilog_0_sb_axi_awregion),
        .i_sb_awsize(swerv_wrapper_verilog_0_sb_axi_awsize),
        .i_sb_awvalid(swerv_wrapper_verilog_0_sb_axi_awvalid),
        .i_sb_bready(swerv_wrapper_verilog_0_sb_axi_bready),
        .i_sb_rready(swerv_wrapper_verilog_0_sb_axi_rready),
        .i_sb_wdata(swerv_wrapper_verilog_0_sb_axi_wdata),
        .i_sb_wlast(swerv_wrapper_verilog_0_sb_axi_wlast),
        .i_sb_wstrb(swerv_wrapper_verilog_0_sb_axi_wstrb),
        .i_sb_wvalid(swerv_wrapper_verilog_0_sb_axi_wvalid),
        .o_ifu_arready(intcon_wrapper_bd_0_o_ifu_arready),
        .o_ifu_rdata(intcon_wrapper_bd_0_o_ifu_rdata),
        .o_ifu_rid(intcon_wrapper_bd_0_o_ifu_rid),
        .o_ifu_rlast(intcon_wrapper_bd_0_o_ifu_rlast),
        .o_ifu_rresp(intcon_wrapper_bd_0_o_ifu_rresp),
        .o_ifu_rvalid(intcon_wrapper_bd_0_o_ifu_rvalid),
        .o_lsu_arready(intcon_wrapper_bd_0_o_lsu_arready),
        .o_lsu_awready(intcon_wrapper_bd_0_o_lsu_awready),
        .o_lsu_bid(intcon_wrapper_bd_0_o_lsu_bid),
        .o_lsu_bresp(intcon_wrapper_bd_0_o_lsu_bresp),
        .o_lsu_bvalid(intcon_wrapper_bd_0_o_lsu_bvalid),
        .o_lsu_rdata(intcon_wrapper_bd_0_o_lsu_rdata),
        .o_lsu_rid(intcon_wrapper_bd_0_o_lsu_rid),
        .o_lsu_rlast(intcon_wrapper_bd_0_o_lsu_rlast),
        .o_lsu_rresp(intcon_wrapper_bd_0_o_lsu_rresp),
        .o_lsu_rvalid(intcon_wrapper_bd_0_o_lsu_rvalid),
        .o_lsu_wready(intcon_wrapper_bd_0_o_lsu_wready),
        .o_ram_araddr(o_ram_araddr_0),
        .o_ram_arburst(o_ram_arburst_0),
        .o_ram_arcache(o_ram_arcache_0),
        .o_ram_arid(o_ram_arid_0),
        .o_ram_arlen(o_ram_arlen_0),
        .o_ram_arlock(o_ram_arlock_0),
        .o_ram_arprot(o_ram_arprot_0),
        .o_ram_arqos(o_ram_arqos_0),
        .o_ram_arregion(o_ram_arregion_0),
        .o_ram_arsize(o_ram_arsize_0),
        .o_ram_arvalid(o_ram_arvalid_0),
        .o_ram_awaddr(o_ram_awaddr_0),
        .o_ram_awburst(o_ram_awburst_0),
        .o_ram_awcache(o_ram_awcache_0),
        .o_ram_awid(o_ram_awid_0),
        .o_ram_awlen(o_ram_awlen_0),
        .o_ram_awlock(o_ram_awlock_0),
        .o_ram_awprot(o_ram_awprot_0),
        .o_ram_awqos(o_ram_awqos_0),
        .o_ram_awregion(o_ram_awregion_0),
        .o_ram_awsize(o_ram_awsize_0),
        .o_ram_awvalid(o_ram_awvalid_0),
        .o_ram_bready(o_ram_bready_0),
        .o_ram_rready(o_ram_rready_0),
        .o_ram_wdata(o_ram_wdata_0),
        .o_ram_wlast(o_ram_wlast_0),
        .o_ram_wstrb(o_ram_wstrb_0),
        .o_ram_wvalid(o_ram_wvalid_0),
        .o_sb_arready(intcon_wrapper_bd_0_o_sb_arready),
        .o_sb_awready(intcon_wrapper_bd_0_o_sb_awready),
        .o_sb_bid(intcon_wrapper_bd_0_o_sb_bid),
        .o_sb_bresp(intcon_wrapper_bd_0_o_sb_bresp),
        .o_sb_bvalid(intcon_wrapper_bd_0_o_sb_bvalid),
        .o_sb_rdata(intcon_wrapper_bd_0_o_sb_rdata),
        .o_sb_rid(intcon_wrapper_bd_0_o_sb_rid),
        .o_sb_rlast(intcon_wrapper_bd_0_o_sb_rlast),
        .o_sb_rresp(intcon_wrapper_bd_0_o_sb_rresp),
        .o_sb_rvalid(intcon_wrapper_bd_0_o_sb_rvalid),
        .o_sb_wready(intcon_wrapper_bd_0_o_sb_wready),
        .rst_ni_wrapper(rst_0),
        .wb_gpio_ack_i(gpio_wrapper_0_wb_ack_o),
        .wb_gpio_adr_o(intcon_wrapper_bd_0_wb_gpio_adr_o),
        .wb_gpio_cyc_o(intcon_wrapper_bd_0_wb_gpio_cyc_o),
        .wb_gpio_dat_i(gpio_wrapper_0_wb_dat_o),
        .wb_gpio_dat_o(intcon_wrapper_bd_0_wb_gpio_dat_o),
        .wb_gpio_err_i(gpio_wrapper_0_wb_err_o),
        .wb_gpio_sel_o(intcon_wrapper_bd_0_wb_gpio_sel_o),
        .wb_gpio_stb_o(intcon_wrapper_bd_0_wb_gpio_stb_o),
        .wb_gpio_we_o(intcon_wrapper_bd_0_wb_gpio_we_o),
        .wb_ptc_ack_i(1'b0),
        .wb_ptc_dat_i({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .wb_ptc_err_i(1'b0),
        .wb_ptc_rty_i(1'b0),
        .wb_rom_ack_i(bootrom_wrapper_0_o_wb_ack),
        .wb_rom_adr_o(intcon_wrapper_bd_0_wb_rom_adr_o),
        .wb_rom_cyc_o(intcon_wrapper_bd_0_wb_rom_cyc_o),
        .wb_rom_dat_i(bootrom_wrapper_0_o_wb_rdt),
        .wb_rom_dat_o(intcon_wrapper_bd_0_wb_rom_dat_o),
        .wb_rom_sel_o(intcon_wrapper_bd_0_wb_rom_sel_o),
        .wb_rom_stb_o(intcon_wrapper_bd_0_wb_rom_stb_o),
        .wb_rom_we_o(intcon_wrapper_bd_0_wb_rom_we_o),
        .wb_spi_accel_ack_i(1'b0),
        .wb_spi_accel_dat_i({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .wb_spi_accel_err_i(1'b0),
        .wb_spi_accel_rty_i(1'b0),
        .wb_spi_flash_ack_i(1'b0),
        .wb_spi_flash_dat_i({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .wb_spi_flash_err_i(1'b0),
        .wb_spi_flash_rty_i(1'b0),
        .wb_sys_ack_i(syscon_wrapper_0_o_wb_ack),
        .wb_sys_adr_o(intcon_wrapper_bd_0_wb_sys_adr_o),
        .wb_sys_cyc_o(intcon_wrapper_bd_0_wb_sys_cyc_o),
        .wb_sys_dat_i(syscon_wrapper_0_o_wb_rdt),
        .wb_sys_dat_o(intcon_wrapper_bd_0_wb_sys_dat_o),
        .wb_sys_err_i(1'b0),
        .wb_sys_rty_i(1'b0),
        .wb_sys_sel_o(intcon_wrapper_bd_0_wb_sys_sel_o),
        .wb_sys_stb_o(intcon_wrapper_bd_0_wb_sys_stb_o),
        .wb_sys_we_o(intcon_wrapper_bd_0_wb_sys_we_o),
        .wb_uart_ack_i(1'b0),
        .wb_uart_dat_i({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .wb_uart_err_i(1'b0),
        .wb_uart_rty_i(1'b0));
  BD_swerv_wrapper_verilog_0_0 swerv_wrapper_verilog_0
       (.clk(clk_0),
        .dmi_hard_reset(dmi_hard_reset_0),
        .dmi_reg_addr(dmi_reg_addr_0),
        .dmi_reg_en(dmi_reg_en_0),
        .dmi_reg_rdata(dmi_reg_rdata_0),
        .dmi_reg_wdata(dmi_reg_wdata_0),
        .dmi_reg_wr_en(dmi_reg_wr_en_0),
        .ifu_axi_araddr(swerv_wrapper_verilog_0_ifu_axi_araddr),
        .ifu_axi_arburst(swerv_wrapper_verilog_0_ifu_axi_arburst),
        .ifu_axi_arcache(swerv_wrapper_verilog_0_ifu_axi_arcache),
        .ifu_axi_arid(swerv_wrapper_verilog_0_ifu_axi_arid),
        .ifu_axi_arlen(swerv_wrapper_verilog_0_ifu_axi_arlen),
        .ifu_axi_arlock(swerv_wrapper_verilog_0_ifu_axi_arlock),
        .ifu_axi_arprot(swerv_wrapper_verilog_0_ifu_axi_arprot),
        .ifu_axi_arqos(swerv_wrapper_verilog_0_ifu_axi_arqos),
        .ifu_axi_arready(intcon_wrapper_bd_0_o_ifu_arready),
        .ifu_axi_arregion(swerv_wrapper_verilog_0_ifu_axi_arregion),
        .ifu_axi_arsize(swerv_wrapper_verilog_0_ifu_axi_arsize),
        .ifu_axi_arvalid(swerv_wrapper_verilog_0_ifu_axi_arvalid),
        .ifu_axi_rdata(intcon_wrapper_bd_0_o_ifu_rdata),
        .ifu_axi_rid(intcon_wrapper_bd_0_o_ifu_rid),
        .ifu_axi_rlast(intcon_wrapper_bd_0_o_ifu_rlast),
        .ifu_axi_rready(swerv_wrapper_verilog_0_ifu_axi_rready),
        .ifu_axi_rresp(intcon_wrapper_bd_0_o_ifu_rresp),
        .ifu_axi_rvalid(intcon_wrapper_bd_0_o_ifu_rvalid),
        .lsu_axi_araddr(swerv_wrapper_verilog_0_lsu_axi_araddr),
        .lsu_axi_arburst(swerv_wrapper_verilog_0_lsu_axi_arburst),
        .lsu_axi_arcache(swerv_wrapper_verilog_0_lsu_axi_arcache),
        .lsu_axi_arid(swerv_wrapper_verilog_0_lsu_axi_arid),
        .lsu_axi_arlen(swerv_wrapper_verilog_0_lsu_axi_arlen),
        .lsu_axi_arlock(swerv_wrapper_verilog_0_lsu_axi_arlock),
        .lsu_axi_arprot(swerv_wrapper_verilog_0_lsu_axi_arprot),
        .lsu_axi_arqos(swerv_wrapper_verilog_0_lsu_axi_arqos),
        .lsu_axi_arready(intcon_wrapper_bd_0_o_lsu_arready),
        .lsu_axi_arregion(swerv_wrapper_verilog_0_lsu_axi_arregion),
        .lsu_axi_arsize(swerv_wrapper_verilog_0_lsu_axi_arsize),
        .lsu_axi_arvalid(swerv_wrapper_verilog_0_lsu_axi_arvalid),
        .lsu_axi_awaddr(swerv_wrapper_verilog_0_lsu_axi_awaddr),
        .lsu_axi_awburst(swerv_wrapper_verilog_0_lsu_axi_awburst),
        .lsu_axi_awcache(swerv_wrapper_verilog_0_lsu_axi_awcache),
        .lsu_axi_awid(swerv_wrapper_verilog_0_lsu_axi_awid),
        .lsu_axi_awlen(swerv_wrapper_verilog_0_lsu_axi_awlen),
        .lsu_axi_awlock(swerv_wrapper_verilog_0_lsu_axi_awlock),
        .lsu_axi_awprot(swerv_wrapper_verilog_0_lsu_axi_awprot),
        .lsu_axi_awqos(swerv_wrapper_verilog_0_lsu_axi_awqos),
        .lsu_axi_awready(intcon_wrapper_bd_0_o_lsu_awready),
        .lsu_axi_awregion(swerv_wrapper_verilog_0_lsu_axi_awregion),
        .lsu_axi_awsize(swerv_wrapper_verilog_0_lsu_axi_awsize),
        .lsu_axi_awvalid(swerv_wrapper_verilog_0_lsu_axi_awvalid),
        .lsu_axi_bid(intcon_wrapper_bd_0_o_lsu_bid),
        .lsu_axi_bready(swerv_wrapper_verilog_0_lsu_axi_bready),
        .lsu_axi_bresp(intcon_wrapper_bd_0_o_lsu_bresp),
        .lsu_axi_bvalid(intcon_wrapper_bd_0_o_lsu_bvalid),
        .lsu_axi_rdata(intcon_wrapper_bd_0_o_lsu_rdata),
        .lsu_axi_rid(intcon_wrapper_bd_0_o_lsu_rid),
        .lsu_axi_rlast(intcon_wrapper_bd_0_o_lsu_rlast),
        .lsu_axi_rready(swerv_wrapper_verilog_0_lsu_axi_rready),
        .lsu_axi_rresp(intcon_wrapper_bd_0_o_lsu_rresp),
        .lsu_axi_rvalid(intcon_wrapper_bd_0_o_lsu_rvalid),
        .lsu_axi_wdata(swerv_wrapper_verilog_0_lsu_axi_wdata),
        .lsu_axi_wlast(swerv_wrapper_verilog_0_lsu_axi_wlast),
        .lsu_axi_wready(intcon_wrapper_bd_0_o_lsu_wready),
        .lsu_axi_wstrb(swerv_wrapper_verilog_0_lsu_axi_wstrb),
        .lsu_axi_wvalid(swerv_wrapper_verilog_0_lsu_axi_wvalid),
        .nmi_int(syscon_wrapper_0_o_nmi_int),
        .nmi_vec(syscon_wrapper_0_o_nmi_vec),
        .rst(rst_0),
        .sb_axi_araddr(swerv_wrapper_verilog_0_sb_axi_araddr),
        .sb_axi_arburst(swerv_wrapper_verilog_0_sb_axi_arburst),
        .sb_axi_arcache(swerv_wrapper_verilog_0_sb_axi_arcache),
        .sb_axi_arid(swerv_wrapper_verilog_0_sb_axi_arid),
        .sb_axi_arlen(swerv_wrapper_verilog_0_sb_axi_arlen),
        .sb_axi_arlock(swerv_wrapper_verilog_0_sb_axi_arlock),
        .sb_axi_arprot(swerv_wrapper_verilog_0_sb_axi_arprot),
        .sb_axi_arqos(swerv_wrapper_verilog_0_sb_axi_arqos),
        .sb_axi_arready(intcon_wrapper_bd_0_o_sb_arready),
        .sb_axi_arregion(swerv_wrapper_verilog_0_sb_axi_arregion),
        .sb_axi_arsize(swerv_wrapper_verilog_0_sb_axi_arsize),
        .sb_axi_arvalid(swerv_wrapper_verilog_0_sb_axi_arvalid),
        .sb_axi_awaddr(swerv_wrapper_verilog_0_sb_axi_awaddr),
        .sb_axi_awburst(swerv_wrapper_verilog_0_sb_axi_awburst),
        .sb_axi_awcache(swerv_wrapper_verilog_0_sb_axi_awcache),
        .sb_axi_awid(swerv_wrapper_verilog_0_sb_axi_awid),
        .sb_axi_awlen(swerv_wrapper_verilog_0_sb_axi_awlen),
        .sb_axi_awlock(swerv_wrapper_verilog_0_sb_axi_awlock),
        .sb_axi_awprot(swerv_wrapper_verilog_0_sb_axi_awprot),
        .sb_axi_awqos(swerv_wrapper_verilog_0_sb_axi_awqos),
        .sb_axi_awready(intcon_wrapper_bd_0_o_sb_awready),
        .sb_axi_awregion(swerv_wrapper_verilog_0_sb_axi_awregion),
        .sb_axi_awsize(swerv_wrapper_verilog_0_sb_axi_awsize),
        .sb_axi_awvalid(swerv_wrapper_verilog_0_sb_axi_awvalid),
        .sb_axi_bid(intcon_wrapper_bd_0_o_sb_bid),
        .sb_axi_bready(swerv_wrapper_verilog_0_sb_axi_bready),
        .sb_axi_bresp(intcon_wrapper_bd_0_o_sb_bresp),
        .sb_axi_bvalid(intcon_wrapper_bd_0_o_sb_bvalid),
        .sb_axi_rdata(intcon_wrapper_bd_0_o_sb_rdata),
        .sb_axi_rid(intcon_wrapper_bd_0_o_sb_rid),
        .sb_axi_rlast(intcon_wrapper_bd_0_o_sb_rlast),
        .sb_axi_rready(swerv_wrapper_verilog_0_sb_axi_rready),
        .sb_axi_rresp(intcon_wrapper_bd_0_o_sb_rresp),
        .sb_axi_rvalid(intcon_wrapper_bd_0_o_sb_rvalid),
        .sb_axi_wdata(swerv_wrapper_verilog_0_sb_axi_wdata),
        .sb_axi_wlast(swerv_wrapper_verilog_0_sb_axi_wlast),
        .sb_axi_wready(intcon_wrapper_bd_0_o_sb_wready),
        .sb_axi_wstrb(swerv_wrapper_verilog_0_sb_axi_wstrb),
        .sb_axi_wvalid(swerv_wrapper_verilog_0_sb_axi_wvalid),
        .timer_int(syscon_wrapper_0_o_timer_irq));
  BD_syscon_wrapper_0_0 syscon_wrapper_0
       (.AN(AN_0),
        .Digits_Bits(Digits_Bits_0),
        .gpio_irq(gpio_wrapper_0_wb_inta_o),
        .i_clk(clk_0),
        .i_ram_init_done(i_ram_init_done_0),
        .i_ram_init_error(i_ram_init_error_0),
        .i_rst(rst_0),
        .i_wb_adr(intcon_wrapper_bd_0_wb_sys_adr_o),
        .i_wb_cyc(intcon_wrapper_bd_0_wb_sys_cyc_o),
        .i_wb_dat(intcon_wrapper_bd_0_wb_sys_dat_o),
        .i_wb_sel(intcon_wrapper_bd_0_wb_sys_sel_o),
        .i_wb_stb(intcon_wrapper_bd_0_wb_sys_stb_o),
        .i_wb_we(intcon_wrapper_bd_0_wb_sys_we_o),
        .o_nmi_int(syscon_wrapper_0_o_nmi_int),
        .o_nmi_vec(syscon_wrapper_0_o_nmi_vec),
        .o_timer_irq(syscon_wrapper_0_o_timer_irq),
        .o_wb_ack(syscon_wrapper_0_o_wb_ack),
        .o_wb_rdt(syscon_wrapper_0_o_wb_rdt),
        .ptc_irq(1'b0));
endmodule

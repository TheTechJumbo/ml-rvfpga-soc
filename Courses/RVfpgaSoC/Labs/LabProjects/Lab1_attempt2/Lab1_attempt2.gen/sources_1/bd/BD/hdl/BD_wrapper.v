//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
//Date        : Thu Apr 10 19:29:05 2025
//Host        : ayman-t480 running 64-bit Ubuntu 24.10
//Command     : generate_target BD_wrapper.bd
//Design      : BD_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module BD_wrapper
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
  input clk_0;
  input dmi_hard_reset_0;
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
  input rst_0;

  wire [7:0]AN_0;
  wire [6:0]Digits_Bits_0;
  wire clk_0;
  wire dmi_hard_reset_0;
  wire [6:0]dmi_reg_addr_0;
  wire dmi_reg_en_0;
  wire [31:0]dmi_reg_rdata_0;
  wire [31:0]dmi_reg_wdata_0;
  wire dmi_reg_wr_en_0;
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

  BD BD_i
       (.AN_0(AN_0),
        .Digits_Bits_0(Digits_Bits_0),
        .clk_0(clk_0),
        .dmi_hard_reset_0(dmi_hard_reset_0),
        .dmi_reg_addr_0(dmi_reg_addr_0),
        .dmi_reg_en_0(dmi_reg_en_0),
        .dmi_reg_rdata_0(dmi_reg_rdata_0),
        .dmi_reg_wdata_0(dmi_reg_wdata_0),
        .dmi_reg_wr_en_0(dmi_reg_wr_en_0),
        .i_ram_arready_0(i_ram_arready_0),
        .i_ram_awready_0(i_ram_awready_0),
        .i_ram_bid_0(i_ram_bid_0),
        .i_ram_bresp_0(i_ram_bresp_0),
        .i_ram_bvalid_0(i_ram_bvalid_0),
        .i_ram_init_done_0(i_ram_init_done_0),
        .i_ram_init_error_0(i_ram_init_error_0),
        .i_ram_rdata_0(i_ram_rdata_0),
        .i_ram_rid_0(i_ram_rid_0),
        .i_ram_rlast_0(i_ram_rlast_0),
        .i_ram_rresp_0(i_ram_rresp_0),
        .i_ram_rvalid_0(i_ram_rvalid_0),
        .i_ram_wready_0(i_ram_wready_0),
        .o_ram_araddr_0(o_ram_araddr_0),
        .o_ram_arburst_0(o_ram_arburst_0),
        .o_ram_arcache_0(o_ram_arcache_0),
        .o_ram_arid_0(o_ram_arid_0),
        .o_ram_arlen_0(o_ram_arlen_0),
        .o_ram_arlock_0(o_ram_arlock_0),
        .o_ram_arprot_0(o_ram_arprot_0),
        .o_ram_arqos_0(o_ram_arqos_0),
        .o_ram_arregion_0(o_ram_arregion_0),
        .o_ram_arsize_0(o_ram_arsize_0),
        .o_ram_arvalid_0(o_ram_arvalid_0),
        .o_ram_awaddr_0(o_ram_awaddr_0),
        .o_ram_awburst_0(o_ram_awburst_0),
        .o_ram_awcache_0(o_ram_awcache_0),
        .o_ram_awid_0(o_ram_awid_0),
        .o_ram_awlen_0(o_ram_awlen_0),
        .o_ram_awlock_0(o_ram_awlock_0),
        .o_ram_awprot_0(o_ram_awprot_0),
        .o_ram_awqos_0(o_ram_awqos_0),
        .o_ram_awregion_0(o_ram_awregion_0),
        .o_ram_awsize_0(o_ram_awsize_0),
        .o_ram_awvalid_0(o_ram_awvalid_0),
        .o_ram_bready_0(o_ram_bready_0),
        .o_ram_rready_0(o_ram_rready_0),
        .o_ram_wdata_0(o_ram_wdata_0),
        .o_ram_wlast_0(o_ram_wlast_0),
        .o_ram_wstrb_0(o_ram_wstrb_0),
        .o_ram_wvalid_0(o_ram_wvalid_0),
        .rst_0(rst_0));
endmodule

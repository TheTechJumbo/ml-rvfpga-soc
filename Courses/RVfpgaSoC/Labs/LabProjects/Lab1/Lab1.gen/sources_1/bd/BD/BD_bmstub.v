// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// -------------------------------------------------------------------------------

`timescale 1 ps / 1 ps

(* BLOCK_STUB = "true" *)
module BD (
  clk_0,
  rst_0,
  o_ram_arvalid_0,
  o_ram_arcache_0,
  o_ram_awqos_0,
  o_ram_awvalid_0,
  o_ram_arprot_0,
  o_ram_awcache_0,
  o_ram_wdata_0,
  o_ram_awprot_0,
  o_ram_rready_0,
  o_ram_wstrb_0,
  o_ram_arid_0,
  o_ram_wlast_0,
  o_ram_arlock_0,
  o_ram_araddr_0,
  o_ram_awid_0,
  o_ram_wvalid_0,
  o_ram_awlock_0,
  o_ram_awaddr_0,
  o_ram_bready_0,
  o_ram_arburst_0,
  o_ram_awburst_0,
  o_ram_arlen_0,
  o_ram_arsize_0,
  o_ram_awlen_0,
  o_ram_arregion_0,
  o_ram_awsize_0,
  o_ram_arqos_0,
  o_ram_awregion_0,
  i_ram_arready_0,
  i_ram_wready_0,
  i_ram_awready_0,
  i_ram_rdata_0,
  i_ram_rresp_0,
  i_ram_bid_0,
  i_ram_bvalid_0,
  i_ram_rlast_0,
  i_ram_rvalid_0,
  i_ram_rid_0,
  i_ram_bresp_0,
  dmi_hard_reset_0,
  dmi_reg_wr_en_0,
  dmi_reg_en_0,
  dmi_reg_wdata_0,
  dmi_reg_addr_0,
  dmi_reg_rdata_0,
  i_ram_init_done_0,
  i_ram_init_error_0,
  AN_0,
  Digits_Bits_0,
  bidir_0,
  bidir_1,
  bidir_2,
  bidir_3,
  bidir_4,
  bidir_5,
  bidir_6,
  bidir_7,
  bidir_8,
  bidir_9,
  bidir_10,
  bidir_11,
  bidir_12,
  bidir_13,
  bidir_14,
  bidir_15,
  bidir_16,
  bidir_17,
  bidir_18,
  bidir_19,
  bidir_20,
  bidir_21,
  bidir_22,
  bidir_23,
  bidir_24,
  bidir_25,
  bidir_26,
  bidir_27,
  bidir_28,
  bidir_29,
  bidir_30,
  bidir_31
);

  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK_0 CLK" *)
  (* X_INTERFACE_MODE = "slave CLK.CLK_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK_0, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN BD_clk_0, ASSOCIATED_RESET rst_0, INSERT_VIP 0" *)
  input clk_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST_0 RST" *)
  (* X_INTERFACE_MODE = "slave RST.RST_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST_0, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
  input rst_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_arvalid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_arcache_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_awqos_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_awvalid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [2:0]o_ram_arprot_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_awcache_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [63:0]o_ram_wdata_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [2:0]o_ram_awprot_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_rready_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [7:0]o_ram_wstrb_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [5:0]o_ram_arid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_wlast_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_arlock_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [31:0]o_ram_araddr_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [5:0]o_ram_awid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_wvalid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_awlock_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [31:0]o_ram_awaddr_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output o_ram_bready_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [1:0]o_ram_arburst_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [1:0]o_ram_awburst_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [7:0]o_ram_arlen_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [2:0]o_ram_arsize_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [7:0]o_ram_awlen_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_arregion_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [2:0]o_ram_awsize_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_arqos_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [3:0]o_ram_awregion_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_arready_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_wready_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_awready_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [63:0]i_ram_rdata_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [1:0]i_ram_rresp_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [5:0]i_ram_bid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_bvalid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_rlast_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_rvalid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [5:0]i_ram_rid_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [1:0]i_ram_bresp_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.DMI_HARD_RESET_0 RST" *)
  (* X_INTERFACE_MODE = "slave RST.DMI_HARD_RESET_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.DMI_HARD_RESET_0, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
  input dmi_hard_reset_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input dmi_reg_wr_en_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input dmi_reg_en_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [31:0]dmi_reg_wdata_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input [6:0]dmi_reg_addr_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [31:0]dmi_reg_rdata_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_init_done_0;
  (* X_INTERFACE_IGNORE = "true" *)
  input i_ram_init_error_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [7:0]AN_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output [6:0]Digits_Bits_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_0;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_1;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_2;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_3;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_4;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_5;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_6;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_7;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_8;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_9;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_10;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_11;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_12;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_13;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_14;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_15;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_16;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_17;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_18;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_19;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_20;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_21;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_22;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_23;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_24;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_25;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_26;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_27;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_28;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_29;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_30;
  (* X_INTERFACE_IGNORE = "true" *)
  output bidir_31;

  // stub module has no contents

endmodule

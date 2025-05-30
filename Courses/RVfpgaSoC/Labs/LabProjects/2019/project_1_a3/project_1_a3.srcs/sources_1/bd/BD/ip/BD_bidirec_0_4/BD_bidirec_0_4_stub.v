// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Mon Apr 21 16:35:28 2025
// Host        : ayman-t480 running 64-bit Ubuntu 24.10
// Command     : write_verilog -force -mode synth_stub
//               /home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/2019/project_1_a3/project_1_a3.srcs/sources_1/bd/BD/ip/BD_bidirec_0_4/BD_bidirec_0_4_stub.v
// Design      : BD_bidirec_0_4
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "bidirec,Vivado 2019.2" *)
module BD_bidirec_0_4(oe, inp, outp, bidir)
/* synthesis syn_black_box black_box_pad_pin="oe,inp,outp,bidir" */;
  input oe;
  input inp;
  output outp;
  output bidir;
endmodule

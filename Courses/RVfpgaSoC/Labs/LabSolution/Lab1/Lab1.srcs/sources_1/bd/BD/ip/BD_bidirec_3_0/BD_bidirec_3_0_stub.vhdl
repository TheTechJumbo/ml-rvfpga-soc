-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Sun Apr 20 16:05:51 2025
-- Host        : ayman-t480 running 64-bit Ubuntu 24.10
-- Command     : write_vhdl -force -mode synth_stub
--               /home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/bd/BD/ip/BD_bidirec_3_0/BD_bidirec_3_0_stub.vhdl
-- Design      : BD_bidirec_3_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BD_bidirec_3_0 is
  Port ( 
    oe : in STD_LOGIC;
    inp : in STD_LOGIC;
    outp : out STD_LOGIC;
    bidir : out STD_LOGIC
  );

end BD_bidirec_3_0;

architecture stub of BD_bidirec_3_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "oe,inp,outp,bidir";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "bidirec,Vivado 2019.2";
begin
end;

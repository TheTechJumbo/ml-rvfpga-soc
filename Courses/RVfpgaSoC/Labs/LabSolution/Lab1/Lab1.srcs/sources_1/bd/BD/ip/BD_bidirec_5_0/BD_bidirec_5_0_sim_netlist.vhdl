-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Sun Apr 20 16:07:50 2025
-- Host        : ayman-t480 running 64-bit Ubuntu 24.10
-- Command     : write_vhdl -force -mode funcsim
--               /home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/bd/BD/ip/BD_bidirec_5_0/BD_bidirec_5_0_sim_netlist.vhdl
-- Design      : BD_bidirec_5_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity BD_bidirec_5_0 is
  port (
    oe : in STD_LOGIC;
    inp : in STD_LOGIC;
    outp : out STD_LOGIC;
    bidir : out STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of BD_bidirec_5_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of BD_bidirec_5_0 : entity is "BD_bidirec_5_0,bidirec,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of BD_bidirec_5_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of BD_bidirec_5_0 : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of BD_bidirec_5_0 : entity is "bidirec,Vivado 2019.2";
end BD_bidirec_5_0;

architecture STRUCTURE of BD_bidirec_5_0 is
  signal \^bidir\ : STD_LOGIC;
begin
  bidir <= \^bidir\;
  outp <= \^bidir\;
bidir_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => inp,
      I1 => oe,
      O => \^bidir\
    );
end STRUCTURE;

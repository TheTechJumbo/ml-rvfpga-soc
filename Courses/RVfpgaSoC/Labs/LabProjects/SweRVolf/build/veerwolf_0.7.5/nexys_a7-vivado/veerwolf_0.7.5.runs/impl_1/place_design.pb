
Q
Command: %s
53*	vivadotcl2 
place_design2default:defaultZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7a100t2default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7a100t2default:defaultZ17-349h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
place_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
�
�Bank IO standard internal Vref conflict: Conflicting INTERNAL_VREF constraint in Bank %s.  Some ports in this bank, for example, %s   (SSTL18_II, Vref=0.900V) 
 at site %s conflict with constrained INTERNAL_VREF of 0.750V.%s*DRC2.
 "
342default:default2default:default2D
 ".
ddram_dq[0]ddram_dq[0]2default:default2default:default2@
 "*
	IOB_X1Y54
	IOB_X1Y542default:default2default:default24
 DRC|Pin Planning|IO Standard2default:default8ZBIIVRC-1h px� 
�
YReport rule limit reached: REQP-1839 rule limit reached: 20 violations have been found.%s*DRC29
 !DRC|DRC System|Rule limit reached2default:default8ZCHECK-3h px� 
�
YReport rule limit reached: REQP-1840 rule limit reached: 20 violations have been found.%s*DRC29
 !DRC|DRC System|Rule limit reached2default:default8ZCHECK-3h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2V
 "@
ddr2/ldc/mem_1_reg_0	ddr2/ldc/mem_1_reg_02default:default2default:default2d
 "N
ddr2/ldc/mem_1_reg_0/WEA[0]ddr2/ldc/mem_1_reg_0/WEA[0]2default:default2default:default2Z
 "D
ddr2/ldc/ram_we_reg[0]ddr2/ldc/ram_we_reg[0]2default:default2default:default2L
 "6
ddr2/ldc/FDPE_3	ddr2/ldc/FDPE_32default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2V
 "@
ddr2/ldc/mem_1_reg_0	ddr2/ldc/mem_1_reg_02default:default2default:default2d
 "N
ddr2/ldc/mem_1_reg_0/WEA[1]ddr2/ldc/mem_1_reg_0/WEA[1]2default:default2default:default2Z
 "D
ddr2/ldc/ram_we_reg[1]ddr2/ldc/ram_we_reg[1]2default:default2default:default2L
 "6
ddr2/ldc/FDPE_3	ddr2/ldc/FDPE_32default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2V
 "@
ddr2/ldc/mem_1_reg_1	ddr2/ldc/mem_1_reg_12default:default2default:default2d
 "N
ddr2/ldc/mem_1_reg_1/WEA[0]ddr2/ldc/mem_1_reg_1/WEA[0]2default:default2default:default2Z
 "D
ddr2/ldc/ram_we_reg[2]ddr2/ldc/ram_we_reg[2]2default:default2default:default2L
 "6
ddr2/ldc/FDPE_3	ddr2/ldc/FDPE_32default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2V
 "@
ddr2/ldc/mem_1_reg_1	ddr2/ldc/mem_1_reg_12default:default2default:default2d
 "N
ddr2/ldc/mem_1_reg_1/WEA[1]ddr2/ldc/mem_1_reg_1/WEA[1]2default:default2default:default2Z
 "D
ddr2/ldc/ram_we_reg[3]ddr2/ldc/ram_we_reg[3]2default:default2default:default2L
 "6
ddr2/ldc/FDPE_3	ddr2/ldc/FDPE_32default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2�
 "�
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2�
 "�
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2�
 "~
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2\
 "F
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2default:default2default:default2l
 "V
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2default:default2default:default2r
 "\
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2default:default2default:default2�
 "~
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839hpx� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[0]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[1]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[2]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[2]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB36E12default:default8Z	REQP-1839h px� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2`
 "J
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12default:default2default:default2p
 "Z
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN2default:default2default:default2V
 "@
ddr2/ldc/grant_reg_1ddr2/ldc/grant_reg_12default:default2default:default2�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[0]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[1]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "t
.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[2]	.veerwolf/rvtop/veer/dec/tlu/freeff/dout_reg[2]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[15]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[16]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[19]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]	Eveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[1]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[20]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Lveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22default:default2default:default2�
 "�
\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]\veerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2default:default2default:default2�
 "�
Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Eveerwolf/rvtop/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2default:default2default:default2�
 "�
Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[22]	Fveerwolf/rvtop/veer/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[22]2default:default2default:default2B
 *DRC|Netlist|Instance|Required Pin|RAMB18E12default:default8Z	REQP-1840hpx� 
c
DRC finished with %s
79*	vivadotcl2)
0 Errors, 43 Warnings2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
U

Starting %s Task
103*constraints2
Placer2default:defaultZ18-103h px� 
}
BMultithreading enabled for place_design using a maximum of %s CPUs12*	placeflow2
82default:defaultZ30-611h px� 
v

Phase %s%s
101*constraints2
1 2default:default2)
Placer Initialization2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
1.1 2default:default29
%Placer Initialization Netlist Sorting2default:defaultZ18-101h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:002default:default2
3407.0082default:default2
0.0002default:default2
52222default:default2
133802default:defaultZ17-722h px� 
Z
EPhase 1.1 Placer Initialization Netlist Sorting | Checksum: 0f46b9a7
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:00.01 ; elapsed = 00:00:00.03 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5222 ; free virtual = 133802default:defaulth px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3407.0082default:default2
0.0002default:default2
52222default:default2
133802default:defaultZ17-722h px� 
�

Phase %s%s
101*constraints2
1.2 2default:default2F
2IO Placement/ Clock Placement/ Build Placer Device2default:defaultZ18-101h px� 
g
RPhase 1.2 IO Placement/ Clock Placement/ Build Placer Device | Checksum: e86bdca5
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:06 ; elapsed = 00:00:03 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5213 ; free virtual = 133902default:defaulth px� 
}

Phase %s%s
101*constraints2
1.3 2default:default2.
Build Placer Netlist Model2default:defaultZ18-101h px� 
P
;Phase 1.3 Build Placer Netlist Model | Checksum: 1b4cd6f70
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:27 ; elapsed = 00:00:09 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5074 ; free virtual = 132372default:defaulth px� 
z

Phase %s%s
101*constraints2
1.4 2default:default2+
Constrain Clocks/Macros2default:defaultZ18-101h px� 
M
8Phase 1.4 Constrain Clocks/Macros | Checksum: 1b4cd6f70
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:27 ; elapsed = 00:00:09 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5074 ; free virtual = 132372default:defaulth px� 
I
4Phase 1 Placer Initialization | Checksum: 1b4cd6f70
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:27 ; elapsed = 00:00:09 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5074 ; free virtual = 132372default:defaulth px� 
q

Phase %s%s
101*constraints2
2 2default:default2$
Global Placement2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
2.1 2default:default2!
Floorplanning2default:defaultZ18-101h px� 
C
.Phase 2.1 Floorplanning | Checksum: 1a6fc890d
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:37 ; elapsed = 00:00:12 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5029 ; free virtual = 132082default:defaulth px� 
x

Phase %s%s
101*constraints2
2.2 2default:default2)
Global Placement Core2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
2.2.1 2default:default20
Physical Synthesis In Placer2default:defaultZ18-101h px� 
v
7Found %s candidate LUT instances to create LUTNM shape
536*physynth2
14712default:defaultZ32-1018h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
5362default:default2!
nets or cells2default:default2
02default:default2
cell2default:default2
5362default:default2
cells2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
K
)No high fanout nets found in the design.
65*physynthZ32-65h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
j
FNo candidate cells for DSP register optimization found in the design.
274*physynthZ32-456h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
22default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
h
DNo candidate cells for SRL register optimization found in the design349*physynthZ32-677h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
i
ENo candidate cells for BRAM register optimization found in the design297*physynthZ32-526h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
R
.No candidate nets found for HD net replication521*physynthZ32-949h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:00.012default:default2
3407.0082default:default2
0.0002default:default2
50982default:default2
132722default:defaultZ17-722h px� 
B
-
Summary of Physical Synthesis Optimizations
*commonh px� 
B
-============================================
*commonh px� 


*commonh px� 


*commonh px� 
�
�-----------------------------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Optimization                                     |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
-----------------------------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�
|  LUT Combining                                    |            0  |            536  |                   536  |           0  |           1  |  00:00:02  |
|  Very High Fanout                                 |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  DSP Register                                     |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Shift Register to Pipeline                       |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Shift Register                                   |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  BRAM Register                                    |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Dynamic/Static Region Interface Net Replication  |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total                                            |            0  |            536  |                   536  |           0  |           7  |  00:00:02  |
-----------------------------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 


*commonh px� 


*commonh px� 
T
?Phase 2.2.1 Physical Synthesis In Placer | Checksum: 1f5e01df4
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:01 ; elapsed = 00:00:42 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5060 ; free virtual = 132342default:defaulth px� 
K
6Phase 2.2 Global Placement Core | Checksum: 12ab07a1b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:11 ; elapsed = 00:00:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5070 ; free virtual = 132362default:defaulth px� 
D
/Phase 2 Global Placement | Checksum: 12ab07a1b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:11 ; elapsed = 00:00:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5098 ; free virtual = 132642default:defaulth px� 
q

Phase %s%s
101*constraints2
3 2default:default2$
Detail Placement2default:defaultZ18-101h px� 
}

Phase %s%s
101*constraints2
3.1 2default:default2.
Commit Multi Column Macros2default:defaultZ18-101h px� 
P
;Phase 3.1 Commit Multi Column Macros | Checksum: 1f1ac92ab
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:21 ; elapsed = 00:00:48 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5076 ; free virtual = 132422default:defaulth px� 


Phase %s%s
101*constraints2
3.2 2default:default20
Commit Most Macros & LUTRAMs2default:defaultZ18-101h px� 
R
=Phase 3.2 Commit Most Macros & LUTRAMs | Checksum: 206dc03ae
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:37 ; elapsed = 00:00:53 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5053 ; free virtual = 132362default:defaulth px� 
y

Phase %s%s
101*constraints2
3.3 2default:default2*
Area Swap Optimization2default:defaultZ18-101h px� 
L
7Phase 3.3 Area Swap Optimization | Checksum: 1b2108fd2
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:38 ; elapsed = 00:00:54 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5056 ; free virtual = 132392default:defaulth px� 
�

Phase %s%s
101*constraints2
3.4 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.4 Pipeline Register Optimization | Checksum: 1cc9ba7aa
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:38 ; elapsed = 00:00:54 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5056 ; free virtual = 132392default:defaulth px� 
t

Phase %s%s
101*constraints2
3.5 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.5 Fast Optimization | Checksum: 1aec668d1
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:56 ; elapsed = 00:00:59 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5067 ; free virtual = 132342default:defaulth px� 


Phase %s%s
101*constraints2
3.6 2default:default20
Small Shape Detail Placement2default:defaultZ18-101h px� 
R
=Phase 3.6 Small Shape Detail Placement | Checksum: 1cc5f2d5b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:13 ; elapsed = 00:01:15 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5036 ; free virtual = 132032default:defaulth px� 
u

Phase %s%s
101*constraints2
3.7 2default:default2&
Re-assign LUT pins2default:defaultZ18-101h px� 
H
3Phase 3.7 Re-assign LUT pins | Checksum: 21fcfeb83
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:15 ; elapsed = 00:01:17 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5034 ; free virtual = 132102default:defaulth px� 
�

Phase %s%s
101*constraints2
3.8 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.8 Pipeline Register Optimization | Checksum: 19d3f4183
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:15 ; elapsed = 00:01:18 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5040 ; free virtual = 132072default:defaulth px� 
t

Phase %s%s
101*constraints2
3.9 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.9 Fast Optimization | Checksum: 1cec995ad
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:43 ; elapsed = 00:01:27 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5041 ; free virtual = 132082default:defaulth px� 
D
/Phase 3 Detail Placement | Checksum: 1cec995ad
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:43 ; elapsed = 00:01:27 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5041 ; free virtual = 132082default:defaulth px� 
�

Phase %s%s
101*constraints2
4 2default:default2<
(Post Placement Optimization and Clean-Up2default:defaultZ18-101h px� 
{

Phase %s%s
101*constraints2
4.1 2default:default2,
Post Commit Optimization2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�

Phase %s%s
101*constraints2
4.1.1 2default:default2/
Post Placement Optimization2default:defaultZ18-101h px� 
U
@Post Placement Optimization Initialization | Checksum: e06bf2cf
*commonh px� 
u

Phase %s%s
101*constraints2
4.1.1.1 2default:default2"
BUFG Insertion2default:defaultZ18-101h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2,
clk_gen/o_rst_core_reg_02default:defaultZ46-33h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2,
clk_gen/o_rst_core_reg_32default:defaultZ46-33h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2$
clk_gen/rst_core2default:defaultZ46-33h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2%
ddr2/ldc/FDPE_3_02default:defaultZ46-33h px� 
�
�BUFG insertion identified %s candidate nets. Inserted BUFG: %s, Replicated BUFG Driver: %s, Skipped due to Placement/Routing Conflicts: %s, Skipped due to Timing Degradation: %s, Skipped due to Illegal Netlist: %s.43*	placeflow2
42default:default2
02default:default2
02default:default2
42default:default2
02default:default2
02default:defaultZ46-56h px� 
G
2Phase 4.1.1.1 BUFG Insertion | Checksum: e06bf2cf
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:09 ; elapsed = 00:01:34 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5043 ; free virtual = 132102default:defaulth px� 
�
hPost Placement Timing Summary WNS=%s. For the most accurate timing information please run report_timing.610*place2
0.5602default:defaultZ30-746h px� 
S
>Phase 4.1.1 Post Placement Optimization | Checksum: 1582e33d8
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:24 ; elapsed = 00:01:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5043 ; free virtual = 132112default:defaulth px� 
N
9Phase 4.1 Post Commit Optimization | Checksum: 1582e33d8
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:24 ; elapsed = 00:01:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5043 ; free virtual = 132112default:defaulth px� 
y

Phase %s%s
101*constraints2
4.2 2default:default2*
Post Placement Cleanup2default:defaultZ18-101h px� 
L
7Phase 4.2 Post Placement Cleanup | Checksum: 1582e33d8
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:25 ; elapsed = 00:01:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5043 ; free virtual = 132112default:defaulth px� 
s

Phase %s%s
101*constraints2
4.3 2default:default2$
Placer Reporting2default:defaultZ18-101h px� 
F
1Phase 4.3 Placer Reporting | Checksum: 1582e33d8
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:25 ; elapsed = 00:01:45 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5043 ; free virtual = 132112default:defaulth px� 
z

Phase %s%s
101*constraints2
4.4 2default:default2+
Final Placement Cleanup2default:defaultZ18-101h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.022default:default2
00:00:00.022default:default2
3407.0082default:default2
0.0002default:default2
50432default:default2
132112default:defaultZ17-722h px� 
M
8Phase 4.4 Final Placement Cleanup | Checksum: 206d80427
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:26 ; elapsed = 00:01:46 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5020 ; free virtual = 132032default:defaulth px� 
\
GPhase 4 Post Placement Optimization and Clean-Up | Checksum: 206d80427
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:26 ; elapsed = 00:01:46 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5020 ; free virtual = 132032default:defaulth px� 
>
)Ending Placer Task | Checksum: 10874dea3
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:26 ; elapsed = 00:01:46 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5020 ; free virtual = 132032default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
752default:default2
172default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
place_design2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
place_design: 2default:default2
00:04:302default:default2
00:01:482default:default2
3407.0082default:default2
0.0002default:default2
50842default:default2
132672default:defaultZ17-722h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3407.0082default:default2
0.0002default:default2
50842default:default2
132672default:defaultZ17-722h px� 
H
&Writing timing data to binary archive.266*timingZ38-480h px� 
D
Writing placer database...
1603*designutilsZ20-1893h px� 
=
Writing XDEF routing.
211*designutilsZ20-211h px� 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px� 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2)
Write XDEF Complete: 2default:default2
00:00:072default:default2
00:00:022default:default2
3407.0082default:default2
0.0002default:default2
49822default:default2
132112default:defaultZ17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/SweRVolf/build/veerwolf_0.7.5/nexys_a7-vivado/veerwolf_0.7.5.runs/impl_1/veerwolf_nexys_a7_placed.dcp2default:defaultZ17-1381h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:182default:default2
00:00:112default:default2
3407.0082default:default2
0.0002default:default2
50532default:default2
132432default:defaultZ17-722h px� 
l
%s4*runtcl2P
<Executing : report_io -file veerwolf_nexys_a7_io_placed.rpt
2default:defaulth px� 
�
�report_io: Time (s): cpu = 00:00:00.06 ; elapsed = 00:00:00.11 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5046 ; free virtual = 13236
*commonh px� 
�
%s4*runtcl2�
zExecuting : report_utilization -file veerwolf_nexys_a7_utilization_placed.rpt -pb veerwolf_nexys_a7_utilization_placed.pb
2default:defaulth px� 
�
%s4*runtcl2m
YExecuting : report_control_sets -verbose -file veerwolf_nexys_a7_control_sets_placed.rpt
2default:defaulth px� 
�
�report_control_sets: Time (s): cpu = 00:00:00.07 ; elapsed = 00:00:00.12 . Memory (MB): peak = 3407.008 ; gain = 0.000 ; free physical = 5055 ; free virtual = 13244
*commonh px� 


End Record
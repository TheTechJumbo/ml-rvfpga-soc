
Y
Command: %s
53*	vivadotcl2(
&write_bitstream -force rvfpganexys.bitZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
Implementation2

xc7a100tZ17-347h px� 
p
0Got license for feature '%s' and/or device '%s'
310*common2
Implementation2

xc7a100tZ17-349h px� 
f
,Running DRC as a precondition to command %s
1349*	planAhead2
write_bitstreamZ12-1349h px� 
>
IP Catalog is up to date.1232*coregenZ19-1839h px� 
>
Running DRC with %s threads
24*drc2
2Z23-27h px� 
�
�Bank IO standard internal Vref conflict: Conflicting INTERNAL_VREF constraint in Bank %s.  Some ports in this bank, for example, %s   (SSTL18_II, Vref=0.900V) 
 at site %s conflict with constrained INTERNAL_VREF of 0.750V.%s*DRC2

 "
342 
 "
ddram_dq[0]ddram_dq[0]2
 "
	IOB_X1Y54
	IOB_X1Y542"
 DRC|Pin Planning|IO Standard8ZBIIVRC-1h px� 
�
{Input Buffer Connections: Input buffer %s has no loads. It is recommended to have an input buffer drive an internal load.%s*DRC28
 "4
ddr2/ldc/IOBUFDS/IBUFDS	ddr2/ldc/IOBUFDS/IBUFDS2,
 &DRC|Netlist|Instance|Required Pin|IBUF8ZBUFC-1h px� 
�
{Input Buffer Connections: Input buffer %s has no loads. It is recommended to have an input buffer drive an internal load.%s*DRC2<
 "8
ddr2/ldc/IOBUFDS_1/IBUFDS	ddr2/ldc/IOBUFDS_1/IBUFDS2,
 &DRC|Netlist|Instance|Required Pin|IBUF8ZBUFC-1h px� 
�
�Missing CFGBVS and CONFIG_VOLTAGE Design Properties: Neither the CFGBVS nor CONFIG_VOLTAGE voltage property is set in the current_design.  Configuration bank voltage select (CFGBVS) must be set to VCCO or GND, and CONFIG_VOLTAGE must be set to the correct configuration voltage, in order to determine the I/O voltage support for the pins in bank 0.  It is suggested to specify these either using the 'Edit Device Properties' function in the GUI or directly in the XDC file using the following syntax:

 set_property CFGBVS value1 [current_design]
 #where value1 is either VCCO or GND

 set_property CONFIG_VOLTAGE value2 [current_design]
 #where value2 is the voltage provided to configuration bank 0

Refer to the device configuration user guide for more information.%s*DRC2
 DRC|Pin Planning8ZCFGBVS-1h px� 
�
YReport rule limit reached: REQP-1839 rule limit reached: 20 violations have been found.%s*DRC2'
 !DRC|DRC System|Rule limit reached8ZCHECK-3h px� 
�
YReport rule limit reached: REQP-1840 rule limit reached: 20 violations have been found.%s*DRC2'
 !DRC|DRC System|Rule limit reached8ZCHECK-3h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202l
 "h
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/A[29:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/A2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202l
 "h
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/B[17:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/B2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/A2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/B2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/A2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/B2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/A[29:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/A2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
fInput pipelining: DSP %s input %s is not pipelined. Pipelining DSP48 input will improve performance.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/B[17:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/B2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPIP-1h px� 
�
�PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202l
 "h
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P[47:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-1h px� 
�
�PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-1h px� 
�
�PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-1h px� 
�
�PREG Output pipelining: DSP %s output %s is not pipelined (PREG=0). Pipelining the DSP48 output will improve performance and often saves power so it is suggested whenever possible to fully pipeline this function.  If this DSP48 function was inferred, it is suggested to describe an additional register stage after this function.  If the DSP48 was instantiated in the design, it is suggested to set the PREG attribute to 1.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-1h px� 
�
�MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202l
 "h
4swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P[47:0].swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-2h px� 
�
�MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__02r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__0/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-2h px� 
�
�MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__12r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__1/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-2h px� 
�
�MREG Output pipelining: DSP %s multiplier stage %s is not pipelined (MREG=0). Pipelining the multiplier function will improve performance and will save significant power so it is suggested whenever possible to fully pipeline this function.  If this multiplier was inferred, it is suggested to describe an additional register stage after this function.  If there is no registered adder/accumulator following the multiply function, two pipeline stages are suggested to allow both the MREG and PREG registers to be used.  If the DSP48 was instantiated in the design, it is suggested to set both the MREG and PREG attributes to 1 when performing multiply functions.%s*DRC2h
 "d
/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2	/swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__22r
 "n
7swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P[47:0]1swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20__2/P2+
 %DRC|Netlist|Instance|Pipeline|DSP48E18ZDPOP-2h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[0]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[0]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[10]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[10]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[11]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[11]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[12]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[12]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[13]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[13]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[14]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[14]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[15]	Mswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[15]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[1]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[1]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[2]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[2]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[3]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[3]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[4]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[4]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[5]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[5]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[6]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[6]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[7]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[7]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[8]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[8]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�Asynchronous load check: DSP %s output is connected to registers with an asynchronous reset (%s). This is preventing the possibility of merging these registers in to the DSP Block since the DSP block registers only possess synchronous reset capability.  It is suggested to recode or change these registers to remove the reset or use a synchronous reset to get the best optimization for performance, power and area.%s*DRC2b
 "^
,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e20	,swervolf/swerv_eh1/swerv/exu/mul_e1/prod_e202�
 "�
Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[9]	Lswervolf/swerv_eh1/swerv/exu/mul_e1/prod_e3_ff/genblock.dff/dffs/dout_reg[9]27
 1DRC|Netlist|Instance|Synchronous controls|DSP48E18ZDPOR-1h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2<
 "8
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02L
 "H
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN22
 ".
ddr2/ldc/grant_reg_0ddr2/ldc/grant_reg_02�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2<
 "8
ddr2/ldc/storage_10_reg_0	ddr2/ldc/storage_10_reg_02L
 "H
!ddr2/ldc/storage_10_reg_0/ENBWREN!ddr2/ldc/storage_10_reg_0/ENBWREN22
 ".
ddr2/ldc/grant_reg_0ddr2/ldc/grant_reg_02�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC28
 "4
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2H
 "D
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2N
 "J
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2�
 "�
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[0].i_sync/reg_q_reg[1]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC28
 "4
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2H
 "D
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2N
 "J
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2�
 "�
Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]	Ecdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/gen_sync[1].i_sync/reg_q_reg[1]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC28
 "4
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2H
 "D
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2N
 "J
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2p
 "l
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[0]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC28
 "4
ddr2/ldc/storage_13_reg	ddr2/ldc/storage_13_reg2H
 "D
ddr2/ldc/storage_13_reg/ENARDENddr2/ldc/storage_13_reg/ENARDEN2N
 "J
"ddr2/ldc/read_r_buffer_syncfifo_re"ddr2/ldc/read_r_buffer_syncfifo_re2p
 "l
3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]	3cdc/i_axi_cdc/i_cdc_fifo_gray_r/i_src/wptr_q_reg[1]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�	
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[0]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[0]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�	
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[1]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[1]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�	
�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[2]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[2]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�

�RAMB36 async control check: The RAMB36E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_02�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_0/ADDRARDADDR[14]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]20
 *DRC|Netlist|Instance|Required Pin|RAMB36E18Z	REQP-1839h px� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2<
 "8
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12L
 "H
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN22
 ".
ddr2/ldc/grant_reg_0ddr2/ldc/grant_reg_02�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.a_full_q_reg20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2<
 "8
ddr2/ldc/storage_10_reg_1	ddr2/ldc/storage_10_reg_12L
 "H
!ddr2/ldc/storage_10_reg_1/ENBWREN!ddr2/ldc/storage_10_reg_1/ENBWREN22
 ".
ddr2/ldc/grant_reg_0ddr2/ldc/grant_reg_02�
 "�
Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg	Qcdc/i_axi_cdc/i_cdc_fifo_gray_w/i_dst/i_spill_register/gen_spill_reg.b_full_q_reg20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�	
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[0]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[0]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�	
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[1]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[1]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�	
�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2p
 "l
3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[2]	3swervolf/swerv_eh1/swerv/dec/tlu/freeff/dout_reg[2]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[0]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[10]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[11]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[12]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[13]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[14]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[17]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[18]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[21]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[23]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[24]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]	Kswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[25]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[2]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[2]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[3]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[3]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
�

�RAMB18 async control check: The RAMB18E1 %s has an input control pin %s (net: %s) which is driven by a register (%s) that has an active asychronous set or reset. This may cause corruption of the memory contents and/or read values when the set/reset is asserted and is not analyzed by the default static timing analysis. It is suggested to eliminate the use of a set/reset to registers driving this RAMB pin or else use a synchronous reset in which the assertion of the reset is timed by default.%s*DRC2�
 "�
Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2	Pswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_22�
 "�
`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]`swervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ram_core_reg_2/ADDRARDADDR[13]2�
 "�
Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]Iswervolf/swerv_eh1/mem/Gen_dccm_enable.dccm/mem_bank[0].dccm_bank/ADR[10]2�
 "�
Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[6]	Jswervolf/swerv_eh1/swerv/lsu/bus_intf/bus_buffer/ld_bus_dataff/dout_reg[6]20
 *DRC|Netlist|Instance|Required Pin|RAMB18E18Z	REQP-1840h px� 
U
DRC finished with %s
1905*	planAhead2
0 Errors, 78 WarningsZ12-3199h px� 
i
BPlease refer to the DRC report (report_drc) for more information.
1906*	planAheadZ12-3200h px� 
W
)Running write_bitstream with %s threads.
1750*designutils2
2Z20-2272h px� 
?
Loading data files...
1271*designutilsZ12-1165h px� 
>
Loading site data...
1273*designutilsZ12-1167h px� 
?
Loading route data...
1272*designutilsZ12-1166h px� 
?
Processing options...
1362*designutilsZ12-1514h px� 
<
Creating bitmap...
1249*designutilsZ12-1141h px� 
7
Creating bitstream...
7*	bitstreamZ40-7h px� 
P
Writing bitstream %s...
11*	bitstream2
./rvfpganexys.bitZ40-11h px� 
F
Bitgen Completed Successfully.
1606*	planAheadZ12-1842h px� 
�
�WebTalk data collection is mandatory when using a ULT device. To see the specific WebTalk data collected for your design, open the usage_statistics_webtalk.html or usage_statistics_webtalk.xml file in the implementation directory.698*projectZ1-1876h px� 
H
Releasing license: %s
83*common2
ImplementationZ17-83h px� 

G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
142
782
02
0Z4-41h px� 
O
%s completed successfully
29*	vivadotcl2
write_bitstreamZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
write_bitstream: 2

00:01:242

00:00:562

3775.3052	
487.703Z17-268h px� 


End Record
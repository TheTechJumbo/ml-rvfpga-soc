
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
create_project: 2

00:00:082

00:00:082

1619.6882
0.0272
41582
12511Z17-722h px� 
>
Refreshing IP repositories
234*coregenZ19-234h px� 
G
"No user IP repositories specified
1154*coregenZ19-1704h px� 
n
"Loaded Vivado IP repository '%s'.
1332*coregen2%
#/tools/Xilinx/Vivado/2024.2/data/ipZ19-2313h px� 
�
Command: %s
53*	vivadotcl2l
jsynth_design -top BD_bootrom_wrapper_0_0 -part xc7a100tcsg324-1 -incremental_mode off -mode out_of_contextZ4-113h px� 
:
Starting synth_design
149*	vivadotclZ4-321h px� 
{
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2

xc7a100tZ17-347h px� 
k
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2

xc7a100tZ17-349h px� 
Q
!Incremental synthesis strategy %s2274*designutils2
offZ20-5008h px� 
o
HMultithreading enabled for synth_design using a maximum of %s processes.4828*oasys2
7Z8-7079h px� 
a
?Launching helper process for spawning children vivado processes4827*oasysZ8-7078h px� 
N
#Helper process launched with PID %s4824*oasys2
23341Z8-7075h px� 
�
%s*synth2�
�Starting Synthesize : Time (s): cpu = 00:00:11 ; elapsed = 00:00:11 . Memory (MB): peak = 2057.562 ; gain = 381.848 ; free physical = 2153 ; free virtual = 10509
h px� 
�
synthesizing module '%s'%s4497*oasys2
BD_bootrom_wrapper_0_02
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_bootrom_wrapper_0_0/synth/BD_bootrom_wrapper_0_0.v2
538@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2
bootrom_wrapper2
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2
238@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2
wb_mem_wrapper2
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/wb_mem_wrapper.v2
258@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2	
dpram642
 2�
/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/dpram64.v2
248@Z8-6157h px� 
J
%s
*synth22
0	Parameter SIZE bound to: 4096 - type: integer 
h p
x
� 
L
%s
*synth24
2	Parameter mem_clear bound to: 0 - type: integer 
h p
x
� 
N
%s
*synth26
4	Parameter memfile bound to: (null) - type: string 
h p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2	
dpram642
 2
02
12�
/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/dpram64.v2
248@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
wb_mem_wrapper2
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/wb_mem_wrapper.v2
258@Z8-6155h px� 
�
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
322

i_wb_adr2
102
wb_mem_wrapper2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2
398@Z8-689h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
bootrom_wrapper2
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2
238@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BD_bootrom_wrapper_0_02
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_bootrom_wrapper_0_0/synth/BD_bootrom_wrapper_0_0.v2
538@Z8-6155h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

waddr[2]2	
dpram64Z8-7129h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

waddr[1]2	
dpram64Z8-7129h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

waddr[0]2	
dpram64Z8-7129h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

raddr[2]2	
dpram64Z8-7129h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

raddr[1]2	
dpram64Z8-7129h px� 
r
9Port %s in module %s is either unconnected or has no load4866*oasys2

raddr[0]2	
dpram64Z8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[31]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[30]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[29]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[28]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[27]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[26]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[25]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[24]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[23]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[22]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[21]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[20]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[19]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[18]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[17]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[16]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[15]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[14]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[13]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[12]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[11]2
bootrom_wrapperZ8-7129h px� 
~
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[10]2
bootrom_wrapperZ8-7129h px� 
�
%s*synth2�
�Finished Synthesize : Time (s): cpu = 00:00:13 ; elapsed = 00:00:14 . Memory (MB): peak = 2129.500 ; gain = 453.785 ; free physical = 1867 ; free virtual = 10226
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Constraint Validation : Time (s): cpu = 00:00:14 ; elapsed = 00:00:15 . Memory (MB): peak = 2147.312 ; gain = 471.598 ; free physical = 1783 ; free virtual = 10147
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
D
%s
*synth2,
*Start Loading Part and Timing Information
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Loading part: xc7a100tcsg324-1
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:14 ; elapsed = 00:00:15 . Memory (MB): peak = 2147.312 ; gain = 471.598 ; free physical = 1781 ; free virtual = 10146
h px� 
E
Loading part %s157*device2
xc7a100tcsg324-1Z21-403h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:15 ; elapsed = 00:00:15 . Memory (MB): peak = 2156.219 ; gain = 480.504 ; free physical = 1752 ; free virtual = 10127
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
:
%s
*synth2"
 Start RTL Component Statistics 
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Detailed RTL Component Info : 
h p
x
� 
+
%s
*synth2
+---Registers : 
h p
x
� 
H
%s
*synth20
.	               64 Bit    Registers := 1     
h p
x
� 
H
%s
*synth20
.	                1 Bit    Registers := 1     
h p
x
� 
&
%s
*synth2
+---RAMs : 
h p
x
� 
X
%s
*synth2@
>	              32K Bit	(512 X 64 bit)          RAMs := 1     
h p
x
� 
'
%s
*synth2
+---Muxes : 
h p
x
� 
F
%s
*synth2.
,	   2 Input   64 Bit        Muxes := 14    
h p
x
� 
F
%s
*synth2.
,	   2 Input   32 Bit        Muxes := 1     
h p
x
� 
F
%s
*synth2.
,	   2 Input    8 Bit        Muxes := 1     
h p
x
� 
F
%s
*synth2.
,	   2 Input    4 Bit        Muxes := 2     
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
=
%s
*synth2%
#Finished RTL Component Statistics 
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
6
%s
*synth2
Start Part Resource Summary
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
q
%s
*synth2Y
WPart Resources:
DSPs: 240 (col length:80)
BRAMs: 270 (col length: RAMB18 80 RAMB36 40)
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Finished Part Resource Summary
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
E
%s
*synth2-
+Start Cross Boundary and Area Optimization
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
H
&Parallel synthesis criteria is not met4829*oasysZ8-7080h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[31]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[30]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[29]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[28]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[27]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[26]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[25]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[24]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[23]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[22]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[21]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[20]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[19]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[18]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[17]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[16]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[15]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[14]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[13]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[12]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[11]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
i_wb_adr[10]2
BD_bootrom_wrapper_0_0Z8-7129h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:23 ; elapsed = 00:00:24 . Memory (MB): peak = 2257.125 ; gain = 581.410 ; free physical = 1356 ; free virtual = 9746
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP, Shift Register and Retiming Reporting
h px� 
l
%s*synth2T
R---------------------------------------------------------------------------------
h px� 
R
%s*synth2:
8
Block RAM: Preliminary Mapping Report (see note below)
h px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
h px� 
�
%s*synth2�
�|Module Name            | RTL Object               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
h px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
h px� 
�
%s*synth2�
�|BD_bootrom_wrapper_0_0 | inst/bootrom/ram/mem_reg | 512 x 64(READ_FIRST)   | W | R |                        |   |   | Port A           | 0      | 1      | 
h px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

h px� 
�
%s*synth2�
�Note: The table above is a preliminary report that shows the Block RAMs at the current stage of the synthesis flow. Some Block RAMs may be reimplemented as non Block RAM primitives later in the synthesis flow. Multiple instantiated Block RAMs are reported only once. 
h px� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP, Shift Register and Retiming Reporting
h px� 
l
%s*synth2T
R---------------------------------------------------------------------------------
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
4
%s
*synth2
Start Timing Optimization
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Timing Optimization : Time (s): cpu = 00:00:23 ; elapsed = 00:00:24 . Memory (MB): peak = 2271.000 ; gain = 595.285 ; free physical = 1356 ; free virtual = 9745
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP, Shift Register and Retiming Reporting
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
;
%s
*synth2#
!
Block RAM: Final Mapping Report
h p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
h p
x
� 
�
%s
*synth2�
�|Module Name            | RTL Object               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
h p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
h p
x
� 
�
%s
*synth2�
�|BD_bootrom_wrapper_0_0 | inst/bootrom/ram/mem_reg | 512 x 64(READ_FIRST)   | W | R |                        |   |   | Port A           | 0      | 1      | 
h p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

h p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP, Shift Register and Retiming Reporting
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
3
%s
*synth2
Start Technology Mapping
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
�The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2
inst/bootrom/ram/mem_reg2
BlockZ8-7052h px� 
�
�The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2
inst/bootrom/ram/mem_reg2
BlockZ8-7052h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Technology Mapping : Time (s): cpu = 00:00:23 ; elapsed = 00:00:24 . Memory (MB): peak = 2271.000 ; gain = 595.285 ; free physical = 1349 ; free virtual = 9737
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
-
%s
*synth2
Start IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
?
%s
*synth2'
%Start Flattening Before IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
B
%s
*synth2*
(Finished Flattening Before IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
6
%s
*synth2
Start Final Netlist Cleanup
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Finished Final Netlist Cleanup
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished IO Insertion : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2422.812 ; gain = 747.098 ; free physical = 927 ; free virtual = 9323
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
=
%s
*synth2%
#Start Renaming Generated Instances
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2422.812 ; gain = 747.098 ; free physical = 927 ; free virtual = 9323
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
:
%s
*synth2"
 Start Rebuilding User Hierarchy
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2422.812 ; gain = 747.098 ; free physical = 927 ; free virtual = 9323
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Start Renaming Generated Ports
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2422.812 ; gain = 747.098 ; free physical = 927 ; free virtual = 9324
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
;
%s
*synth2#
!Start Handling Custom Attributes
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2425.781 ; gain = 750.066 ; free physical = 923 ; free virtual = 9320
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
8
%s
*synth2 
Start Renaming Generated Nets
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2425.781 ; gain = 750.066 ; free physical = 923 ; free virtual = 9320
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Start Writing Synthesis Report
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
/
%s
*synth2

Report BlackBoxes: 
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
8
%s
*synth2 
| |BlackBox name |Instances |
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
/
%s*synth2

Report Cell Usage: 
h px� 
4
%s*synth2
+------+---------+------+
h px� 
4
%s*synth2
|      |Cell     |Count |
h px� 
4
%s*synth2
+------+---------+------+
h px� 
4
%s*synth2
|1     |LUT3     |    32|
h px� 
4
%s*synth2
|2     |LUT4     |     1|
h px� 
4
%s*synth2
|3     |LUT5     |     8|
h px� 
4
%s*synth2
|4     |RAMB36E1 |     1|
h px� 
4
%s*synth2
|5     |FDRE     |     1|
h px� 
4
%s*synth2
+------+---------+------+
h px� 
3
%s
*synth2

Report Instance Areas: 
h p
x
� 
H
%s
*synth20
.+------+------------+----------------+------+
h p
x
� 
H
%s
*synth20
.|      |Instance    |Module          |Cells |
h p
x
� 
H
%s
*synth20
.+------+------------+----------------+------+
h p
x
� 
H
%s
*synth20
.|1     |top         |                |    43|
h p
x
� 
H
%s
*synth20
.|2     |  inst      |bootrom_wrapper |    43|
h p
x
� 
H
%s
*synth20
.|3     |    bootrom |wb_mem_wrapper  |    43|
h p
x
� 
H
%s
*synth20
.|4     |      ram   |dpram64         |     9|
h p
x
� 
H
%s
*synth20
.+------+------------+----------------+------+
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2425.781 ; gain = 750.066 ; free physical = 923 ; free virtual = 9313
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
a
%s
*synth2I
GSynthesis finished with 0 errors, 0 critical warnings and 52 warnings.
h p
x
� 
�
%s
*synth2�
�Synthesis Optimization Runtime : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2425.781 ; gain = 750.066 ; free physical = 923 ; free virtual = 9314
h p
x
� 
�
%s
*synth2�
�Synthesis Optimization Complete : Time (s): cpu = 00:00:30 ; elapsed = 00:00:31 . Memory (MB): peak = 2425.789 ; gain = 750.066 ; free physical = 923 ; free virtual = 9314
h p
x
� 
B
 Translating synthesized netlist
350*projectZ1-571h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
Netlist sorting complete. 2
00:00:00.012
00:00:00.012

2681.7812
0.0002
6422
9048Z17-722h px� 
S
-Analyzing %s Unisim elements for replacement
17*netlist2
1Z29-17h px� 
X
2Unisim Transformation completed in %s CPU seconds
28*netlist2
0Z29-28h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
Q
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02
0Z31-138h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
Netlist sorting complete. 2

00:00:002

00:00:002

2721.8012
0.0002
5172
8920Z17-722h px� 
l
!Unisim Transformation Summary:
%s111*project2'
%No Unisim elements were transformed.
Z1-111h px� 
U
%Synth Design complete | Checksum: %s
562*	vivadotcl2	
a12d195Z4-1430h px� 
C
Releasing license: %s
83*common2
	SynthesisZ17-83h px� 

G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
262
522
02
0Z4-41h px� 
L
%s completed successfully
29*	vivadotcl2
synth_designZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
synth_design: 2

00:00:442

00:00:402

2721.8012

1102.1132
5192
8922Z17-722h px� 
�
%s peak %s Memory [%s] %s12246*common2
synth_design2

Physical2
PSS2=
;(MB): overall = 1764.528; main = 1764.528; forked = 198.604Z17-2834h px� 
�
%s peak %s Memory [%s] %s12246*common2
synth_design2	
Virtual2
VSS2=
;(MB): overall = 3313.262; main = 2721.805; forked = 917.258Z17-2834h px� 
>
Renamed %s cell refs.
330*coretcl2
3Z2-1174h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
Write ShapeDB Complete: 2

00:00:002

00:00:002

2840.6562
0.0002
4932
8914Z17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.runs/BD_bootrom_wrapper_0_0_synth_1/BD_bootrom_wrapper_0_0.dcpZ17-1381h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
write_checkpoint: 2

00:00:132

00:00:132

2840.6562	
118.8552
4892
8911Z17-722h px� 
�
Executing command : %s
56330*	planAhead2w
ureport_utilization -file BD_bootrom_wrapper_0_0_utilization_synth.rpt -pb BD_bootrom_wrapper_0_0_utilization_synth.pbZ12-24828h px� 
\
Exiting %s at %s...
206*common2
Vivado2
Fri Mar 21 14:46:39 2025Z17-206h px� 


End Record
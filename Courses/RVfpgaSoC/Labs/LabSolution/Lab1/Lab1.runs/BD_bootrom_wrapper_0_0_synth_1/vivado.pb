
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2$
create_project: 2default:default2
00:00:022default:default2
00:00:092default:default2
329.4452default:default2
29.1482default:defaultZ17-268h px� 
�
Command: %s
53*	vivadotcl2h
Tsynth_design -top BD_bootrom_wrapper_0_0 -part xc7a100tcsg324-1 -mode out_of_context2default:defaultZ4-113h px� 
:
Starting synth_design
149*	vivadotclZ4-321h px� 
�
IP '%s' is restricted:
%s
1667*coregen2*
BD_bootrom_wrapper_0_02default:default2E
1* Module reference is stale and needs refreshing.2default:defaultZ19-3571h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2default:default2
xc7a100t2default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2default:default2
xc7a100t2default:defaultZ17-349h px� 
�
%s*synth2�
sStarting Synthesize : Time (s): cpu = 00:00:10 ; elapsed = 00:00:22 . Memory (MB): peak = 604.875 ; gain = 245.629
2default:defaulth px� 
�
synthesizing module '%s'%s4497*oasys2*
BD_bootrom_wrapper_0_02default:default2
 2default:default2�
ue:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/bd/BD/ip/BD_bootrom_wrapper_0_0/synth/BD_bootrom_wrapper_0_0.v2default:default2
582default:default8@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2#
bootrom_wrapper2default:default2
 2default:default2~
hE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2default:default2
232default:default8@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2"
wb_mem_wrapper2default:default2
 2default:default2}
gE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/wb_mem_wrapper.v2default:default2
252default:default8@Z8-6157h px� 
`
%s
*synth2H
4	Parameter MEM_SIZE bound to: 4096 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter mem_clear bound to: 0 - type: integer 
2default:defaulth p
x
� 
b
%s
*synth2J
6	Parameter INIT_FILE bound to: (null) - type: string 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2
dpram642default:default2
 2default:default2v
`E:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/dpram64.v2default:default2
242default:default8@Z8-6157h px� 
\
%s
*synth2D
0	Parameter SIZE bound to: 4096 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter mem_clear bound to: 0 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter memfile bound to: (null) - type: string 
2default:defaulth p
x
� 
X
%s
*synth2@
,	Parameter AW bound to: 12 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
dpram642default:default2
 2default:default2
12default:default2
12default:default2v
`E:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/dpram64.v2default:default2
242default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
wb_mem_wrapper2default:default2
 2default:default2
22default:default2
12default:default2}
gE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/wb_mem_wrapper.v2default:default2
252default:default8@Z8-6155h px� 
�
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
322default:default2
i_wb_adr2default:default2
102default:default2"
wb_mem_wrapper2default:default2~
hE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2default:default2
392default:default8@Z8-689h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
bootrom_wrapper2default:default2
 2default:default2
32default:default2
12default:default2~
hE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/BootROM/bootrom_wrapper.v2default:default2
232default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
BD_bootrom_wrapper_0_02default:default2
 2default:default2
42default:default2
12default:default2�
ue:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/bd/BD/ip/BD_bootrom_wrapper_0_0/synth/BD_bootrom_wrapper_0_0.v2default:default2
582default:default8@Z8-6155h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
waddr[2]2default:defaultZ8-3331h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
waddr[1]2default:defaultZ8-3331h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
waddr[0]2default:defaultZ8-3331h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
raddr[2]2default:defaultZ8-3331h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
raddr[1]2default:defaultZ8-3331h px� 
~
!design %s has unconnected port %s3331*oasys2
dpram642default:default2
raddr[0]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[31]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[30]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[29]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[28]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[27]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[26]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[25]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[24]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[23]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[22]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[21]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[20]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[19]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[18]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[17]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[16]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[15]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[14]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[13]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[12]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[11]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2#
bootrom_wrapper2default:default2 
i_wb_adr[10]2default:defaultZ8-3331h px� 
�
%s*synth2�
sFinished Synthesize : Time (s): cpu = 00:00:13 ; elapsed = 00:00:26 . Memory (MB): peak = 677.863 ; gain = 318.617
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
~Finished Constraint Validation : Time (s): cpu = 00:00:14 ; elapsed = 00:00:28 . Memory (MB): peak = 677.863 ; gain = 318.617
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
V
%s
*synth2>
*Start Loading Part and Timing Information
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Loading part: xc7a100tcsg324-1
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:14 ; elapsed = 00:00:28 . Memory (MB): peak = 677.863 ; gain = 318.617
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
W
Loading part %s157*device2$
xc7a100tcsg324-12default:defaultZ21-403h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:14 ; elapsed = 00:00:28 . Memory (MB): peak = 677.863 ; gain = 318.617
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-

Report RTL Partitions: 
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
+| |RTL Partition |Replication |Instances |
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
� 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               64 Bit    Registers := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                1 Bit    Registers := 1     
2default:defaulth p
x
� 
8
%s
*synth2 
+---RAMs : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	              32K Bit         RAMs := 1     
2default:defaulth p
x
� 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input     64 Bit        Muxes := 14    
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input     32 Bit        Muxes := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input      8 Bit        Muxes := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input      4 Bit        Muxes := 2     
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Finished RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Y
%s
*synth2A
-Start RTL Hierarchical Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Hierarchical RTL Component report 
2default:defaulth p
x
� 
<
%s
*synth2$
Module dpram64 
2default:defaulth p
x
� 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
� 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               64 Bit    Registers := 1     
2default:defaulth p
x
� 
8
%s
*synth2 
+---RAMs : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	              32K Bit         RAMs := 1     
2default:defaulth p
x
� 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input     64 Bit        Muxes := 14    
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input      8 Bit        Muxes := 1     
2default:defaulth p
x
� 
C
%s
*synth2+
Module wb_mem_wrapper 
2default:defaulth p
x
� 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
� 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                1 Bit    Registers := 1     
2default:defaulth p
x
� 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input     32 Bit        Muxes := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input      4 Bit        Muxes := 2     
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
[
%s
*synth2C
/Finished RTL Hierarchical Component Statistics
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2k
WPart Resources:
DSPs: 240 (col length:80)
BRAMs: 270 (col length: RAMB18 80 RAMB36 40)
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
W
%s
*synth2?
+Start Cross Boundary and Area Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
]
%s
*synth2E
1Warning: Parallel synthesis criteria is not met 
2default:defaulth p
x
� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[31]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[30]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[29]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[28]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[27]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[26]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[25]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[24]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[23]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[22]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[21]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[20]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[19]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[18]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[17]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[16]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[15]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[14]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[13]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[12]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[11]2default:defaultZ8-3331h px� 
�
!design %s has unconnected port %s3331*oasys2*
BD_bootrom_wrapper_0_02default:default2 
i_wb_adr[10]2default:defaultZ8-3331h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:26 ; elapsed = 00:00:51 . Memory (MB): peak = 840.250 ; gain = 481.004
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px� 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px� 
d
%s*synth2L
8
Block RAM: Preliminary Mapping	Report (see note below)
2default:defaulth px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth px� 
�
%s*synth2�
�|Module Name            | RTL Object               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
2default:defaulth px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth px� 
�
%s*synth2�
�|BD_bootrom_wrapper_0_0 | inst/bootrom/ram/mem_reg | 512 x 64(READ_FIRST)   | W | R |                        |   |   | Port A           | 0      | 1      | 
2default:defaulth px� 
�
%s*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

2default:defaulth px� 
�
%s*synth2�
�Note: The table above is a preliminary report that shows the Block RAMs at the current stage of the synthesis flow. Some Block RAMs may be reimplemented as non Block RAM primitives later in the synthesis flow. Multiple instantiated Block RAMs are reported only once. 
2default:defaulth px� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px� 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px� 
E
%s
*synth2-

Report RTL Partitions: 
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
+| |RTL Partition |Replication |Instances |
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
F
%s
*synth2.
Start Timing Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
|Finished Timing Optimization : Time (s): cpu = 00:00:26 ; elapsed = 00:00:51 . Memory (MB): peak = 840.250 ; gain = 481.004
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP and Shift Register Reporting
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!
Block RAM: Final Mapping	Report
2default:defaulth p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth p
x
� 
�
%s
*synth2�
�|Module Name            | RTL Object               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
2default:defaulth p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth p
x
� 
�
%s
*synth2�
�|BD_bootrom_wrapper_0_0 | inst/bootrom/ram/mem_reg | 512 x 64(READ_FIRST)   | W | R |                        |   |   | Port A           | 0      | 1      | 
2default:defaulth p
x
� 
�
%s
*synth2�
�+-----------------------+--------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

2default:defaulth p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP and Shift Register Reporting
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-

Report RTL Partitions: 
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
+| |RTL Partition |Replication |Instances |
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-
Start Technology Mapping
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
�The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4800*oasys2,
inst/bootrom/ram/mem_reg2default:default2
Block2default:defaultZ8-7053h px� 
�
�The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4800*oasys2,
inst/bootrom/ram/mem_reg2default:default2
Block2default:defaultZ8-7053h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
{Finished Technology Mapping : Time (s): cpu = 00:00:26 ; elapsed = 00:00:51 . Memory (MB): peak = 840.250 ; gain = 481.004
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-

Report RTL Partitions: 
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
+| |RTL Partition |Replication |Instances |
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
?
%s
*synth2'
Start IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Q
%s
*synth29
%Start Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
T
%s
*synth2<
(Finished Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
uFinished IO Insertion : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Start Renaming Generated Instances
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-

Report RTL Partitions: 
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
+| |RTL Partition |Replication |Instances |
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
W
%s
*synth2?
++-+--------------+------------+----------+
2default:defaulth p
x
� 
D
%s
*synth2,

Report Check Netlist: 
2default:defaulth p
x
� 
u
%s
*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:defaulth p
x
� 
u
%s
*synth2]
I|      |Item              |Errors |Warnings |Status |Description       |
2default:defaulth p
x
� 
u
%s
*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:defaulth p
x
� 
u
%s
*synth2]
I|1     |multi_driven_nets |      0|        0|Passed |Multi driven nets |
2default:defaulth p
x
� 
u
%s
*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start Rebuilding User Hierarchy
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Renaming Generated Ports
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
J
%s
*synth22
Start Renaming Generated Nets
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Writing Synthesis Report
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
A
%s
*synth2)

Report BlackBoxes: 
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
J
%s
*synth22
| |BlackBox name |Instances |
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
A
%s*synth2)

Report Cell Usage: 
2default:defaulth px� 
F
%s*synth2.
+------+---------+------+
2default:defaulth px� 
F
%s*synth2.
|      |Cell     |Count |
2default:defaulth px� 
F
%s*synth2.
+------+---------+------+
2default:defaulth px� 
F
%s*synth2.
|1     |LUT3     |    32|
2default:defaulth px� 
F
%s*synth2.
|2     |LUT4     |     1|
2default:defaulth px� 
F
%s*synth2.
|3     |LUT5     |     8|
2default:defaulth px� 
F
%s*synth2.
|4     |RAMB36E1 |     1|
2default:defaulth px� 
F
%s*synth2.
|5     |FDRE     |     1|
2default:defaulth px� 
F
%s*synth2.
+------+---------+------+
2default:defaulth px� 
E
%s
*synth2-

Report Instance Areas: 
2default:defaulth p
x
� 
Z
%s
*synth2B
.+------+------------+----------------+------+
2default:defaulth p
x
� 
Z
%s
*synth2B
.|      |Instance    |Module          |Cells |
2default:defaulth p
x
� 
Z
%s
*synth2B
.+------+------------+----------------+------+
2default:defaulth p
x
� 
Z
%s
*synth2B
.|1     |top         |                |    43|
2default:defaulth p
x
� 
Z
%s
*synth2B
.|2     |  inst      |bootrom_wrapper |    43|
2default:defaulth p
x
� 
Z
%s
*synth2B
.|3     |    bootrom |wb_mem_wrapper  |    43|
2default:defaulth p
x
� 
Z
%s
*synth2B
.|4     |      ram   |dpram64         |     9|
2default:defaulth p
x
� 
Z
%s
*synth2B
.+------+------------+----------------+------+
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
s
%s
*synth2[
GSynthesis finished with 0 errors, 0 critical warnings and 51 warnings.
2default:defaulth p
x
� 
�
%s
*synth2�
~Synthesis Optimization Runtime : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth p
x
� 
�
%s
*synth2�
Synthesis Optimization Complete : Time (s): cpu = 00:00:41 ; elapsed = 00:01:11 . Memory (MB): peak = 842.184 ; gain = 482.938
2default:defaulth p
x
� 
B
 Translating synthesized netlist
350*projectZ1-571h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0062default:default2
855.3402default:default2
0.0002default:defaultZ17-268h px� 
e
-Analyzing %s Unisim elements for replacement
17*netlist2
12default:defaultZ29-17h px� 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
u
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:002default:default2
955.2772default:default2
0.0002default:defaultZ17-268h px� 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px� 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
192default:default2
522default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
synth_design: 2default:default2
00:00:522default:default2
00:01:432default:default2
955.2772default:default2
601.0042default:defaultZ17-268h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:002default:default2
955.2772default:default2
0.0002default:defaultZ17-268h px� 
K
"No constraints selected for write.1103*constraintsZ18-5210h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2z
fE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/BD_bootrom_wrapper_0_0_synth_1/BD_bootrom_wrapper_0_0.dcp2default:defaultZ17-1381h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2&
write_checkpoint: 2default:default2
00:00:252default:default2
00:00:462default:default2
1302.4842default:default2
347.2072default:defaultZ17-268h px� 
�
'%s' is deprecated. %s
384*common2#
use_project_ipc2default:default2A
-This option is deprecated and no longer used.2default:defaultZ17-576h px� 
P
Renamed %s cell refs.
330*coretcl2
32default:defaultZ2-1174h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0012default:default2
1303.5982default:default2
0.0002default:defaultZ17-268h px� 
K
"No constraints selected for write.1103*constraintsZ18-5210h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2z
fE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/BD_bootrom_wrapper_0_0_synth_1/BD_bootrom_wrapper_0_0.dcp2default:defaultZ17-1381h px� 
�
%s4*runtcl2�
�Executing : report_utilization -file BD_bootrom_wrapper_0_0_utilization_synth.rpt -pb BD_bootrom_wrapper_0_0_utilization_synth.pb
2default:defaulth px� 
�
Exiting %s at %s...
206*common2
Vivado2default:default2,
Mon May 31 23:46:18 20212default:defaultZ17-206h px� 


End Record
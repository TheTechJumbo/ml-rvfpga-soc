
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
create_project: 2

00:00:132

00:00:132

1625.7772
0.0272
41422
12522Z17-722h px� 
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
53*	vivadotcl2i
gsynth_design -top BD_gpio_wrapper_0_0 -part xc7a100tcsg324-1 -incremental_mode off -mode out_of_contextZ4-113h px� 
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
23574Z8-7075h px� 
�
%s*synth2�
�Starting Synthesize : Time (s): cpu = 00:00:10 ; elapsed = 00:00:11 . Memory (MB): peak = 2057.652 ; gain = 375.848 ; free physical = 1752 ; free virtual = 10127
h px� 
�
synthesizing module '%s'%s4497*oasys2
BD_gpio_wrapper_0_02
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_gpio_wrapper_0_0/synth/BD_gpio_wrapper_0_0.v2
538@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2
gpio_wrapper2
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_wrapper.v2
228@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2

gpio_top2
 2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_top.v2
1158@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

gpio_top2
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_top.v2
1158@Z8-6155h px� 
�
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
aux_i2

gpio_top2
gpio2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_wrapper.v2
458@Z8-7071h px� 
�
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
	clk_pad_i2

gpio_top2
gpio2�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_wrapper.v2
458@Z8-7071h px� 
�
Kinstance '%s' of module '%s' has %s connections declared, but only %s given4757*oasys2
gpio2

gpio_top2
172
152�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_wrapper.v2
458@Z8-7023h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
gpio_wrapper2
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.srcs/sources_1/imports/src/SweRVolfSoC/Peripherals/gpio/gpio_wrapper.v2
228@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BD_gpio_wrapper_0_02
 2
02
12�
�/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_gpio_wrapper_0_0/synth/BD_gpio_wrapper_0_0.v2
538@Z8-6155h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[7]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[6]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[1]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[0]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[3]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[2]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[1]2
gpio_wrapperZ8-7129h px� 
z
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[0]2
gpio_wrapperZ8-7129h px� 
�
%s*synth2�
�Finished Synthesize : Time (s): cpu = 00:00:13 ; elapsed = 00:00:14 . Memory (MB): peak = 2130.590 ; gain = 448.785 ; free physical = 1550 ; free virtual = 9976
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
�Finished Constraint Validation : Time (s): cpu = 00:00:14 ; elapsed = 00:00:15 . Memory (MB): peak = 2145.434 ; gain = 463.629 ; free physical = 1476 ; free virtual = 9932
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
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:14 ; elapsed = 00:00:15 . Memory (MB): peak = 2145.434 ; gain = 463.629 ; free physical = 1474 ; free virtual = 9930
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
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:15 ; elapsed = 00:00:16 . Memory (MB): peak = 2162.348 ; gain = 480.543 ; free physical = 1479 ; free virtual = 9917
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
&
%s
*synth2
+---XORs : 
h p
x
� 
H
%s
*synth20
.	   2 Input     32 Bit         XORs := 2     
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
.	               32 Bit    Registers := 14    
h p
x
� 
H
%s
*synth20
.	                2 Bit    Registers := 1     
h p
x
� 
H
%s
*synth20
.	                1 Bit    Registers := 6     
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
,	   2 Input   32 Bit        Muxes := 8     
h p
x
� 
F
%s
*synth2.
,	   2 Input    2 Bit        Muxes := 2     
h p
x
� 
F
%s
*synth2.
,	   2 Input    1 Bit        Muxes := 1     
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
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[7]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[6]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[1]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_adr_i[0]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[3]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[2]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[1]2
BD_gpio_wrapper_0_0Z8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
wb_sel_i[0]2
BD_gpio_wrapper_0_0Z8-7129h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:24 ; elapsed = 00:00:25 . Memory (MB): peak = 2288.309 ; gain = 606.504 ; free physical = 953 ; free virtual = 9343
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
�Finished Timing Optimization : Time (s): cpu = 00:00:24 ; elapsed = 00:00:25 . Memory (MB): peak = 2291.277 ; gain = 609.473 ; free physical = 945 ; free virtual = 9335
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
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Technology Mapping : Time (s): cpu = 00:00:24 ; elapsed = 00:00:25 . Memory (MB): peak = 2291.277 ; gain = 609.473 ; free physical = 946 ; free virtual = 9335
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
�Finished IO Insertion : Time (s): cpu = 00:00:31 ; elapsed = 00:00:32 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8869
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
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:31 ; elapsed = 00:00:32 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8870
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
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:31 ; elapsed = 00:00:32 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8871
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
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:31 ; elapsed = 00:00:32 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8871
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
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:31 ; elapsed = 00:00:33 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8872
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
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:31 ; elapsed = 00:00:33 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8872
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
0
%s*synth2
+------+-----+------+
h px� 
0
%s*synth2
|      |Cell |Count |
h px� 
0
%s*synth2
+------+-----+------+
h px� 
0
%s*synth2
|1     |LUT1 |     1|
h px� 
0
%s*synth2
|2     |LUT2 |    65|
h px� 
0
%s*synth2
|3     |LUT3 |    35|
h px� 
0
%s*synth2
|4     |LUT4 |     4|
h px� 
0
%s*synth2
|5     |LUT5 |    77|
h px� 
0
%s*synth2
|6     |LUT6 |    98|
h px� 
0
%s*synth2
|7     |FDCE |   420|
h px� 
0
%s*synth2
+------+-----+------+
h px� 
3
%s
*synth2

Report Instance Areas: 
h p
x
� 
B
%s
*synth2*
(+------+---------+-------------+------+
h p
x
� 
B
%s
*synth2*
(|      |Instance |Module       |Cells |
h p
x
� 
B
%s
*synth2*
(+------+---------+-------------+------+
h p
x
� 
B
%s
*synth2*
(|1     |top      |             |   700|
h p
x
� 
B
%s
*synth2*
(|2     |  inst   |gpio_wrapper |   700|
h p
x
� 
B
%s
*synth2*
(|3     |    gpio |gpio_top     |   700|
h p
x
� 
B
%s
*synth2*
(+------+---------+-------------+------+
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
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:31 ; elapsed = 00:00:33 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8872
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
GSynthesis finished with 0 errors, 0 critical warnings and 20 warnings.
h p
x
� 
�
%s
*synth2�
�Synthesis Optimization Runtime : Time (s): cpu = 00:00:31 ; elapsed = 00:00:33 . Memory (MB): peak = 2439.090 ; gain = 757.285 ; free physical = 456 ; free virtual = 8873
h p
x
� 
�
%s
*synth2�
�Synthesis Optimization Complete : Time (s): cpu = 00:00:31 ; elapsed = 00:00:33 . Memory (MB): peak = 2439.098 ; gain = 757.285 ; free physical = 456 ; free virtual = 8873
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
00:00:00.022
00:00:00.012

2698.0592
0.0002
2052
8636Z17-722h px� 
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

2738.0782
0.0002
5232
8937Z17-722h px� 
l
!Unisim Transformation Summary:
%s111*project2'
%No Unisim elements were transformed.
Z1-111h px� 
V
%Synth Design complete | Checksum: %s
562*	vivadotcl2

e45fbe4cZ4-1430h px� 
C
Releasing license: %s
83*common2
	SynthesisZ17-83h px� 

G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
202
202
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

00:00:482

00:00:442

2738.0782

1112.3012
5262
8940Z17-722h px� 
�
%s peak %s Memory [%s] %s12246*common2
synth_design2

Physical2
PSS2=
;(MB): overall = 1751.619; main = 1751.619; forked = 203.033Z17-2834h px� 
�
%s peak %s Memory [%s] %s12246*common2
synth_design2	
Virtual2
VSS2=
;(MB): overall = 3297.539; main = 2738.082; forked = 917.258Z17-2834h px� 
>
Renamed %s cell refs.
330*coretcl2
2Z2-1174h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
Write ShapeDB Complete: 2

00:00:002

00:00:002

2920.9022
0.0002
3052
8726Z17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2�
/home/ayman/ml-rvfpga-soc/Courses/RVfpgaSoC/Labs/LabProjects/Lab1/Lab1.runs/BD_gpio_wrapper_0_0_synth_1/BD_gpio_wrapper_0_0.dcpZ17-1381h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2
write_checkpoint: 2

00:00:142

00:00:142

2920.9022	
182.8242
3062
8727Z17-722h px� 
�
Executing command : %s
56330*	planAhead2q
oreport_utilization -file BD_gpio_wrapper_0_0_utilization_synth.rpt -pb BD_gpio_wrapper_0_0_utilization_synth.pbZ12-24828h px� 
\
Exiting %s at %s...
206*common2
Vivado2
Fri Mar 21 14:46:48 2025Z17-206h px� 


End Record

Q
Command: %s
53*	vivadotcl2 
route_design2default:defaultZ4-113h px� 
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
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
route_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
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
b
DRC finished with %s
79*	vivadotcl2(
0 Errors, 1 Warnings2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
V

Starting %s Task
103*constraints2
Routing2default:defaultZ18-103h px� 
}
BMultithreading enabled for route_design using a maximum of %s CPUs17*	routeflow2
22default:defaultZ35-254h px� 
p

Phase %s%s
101*constraints2
1 2default:default2#
Build RT Design2default:defaultZ18-101h px� 
C
.Phase 1 Build RT Design | Checksum: 1260283a2
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:01:01 ; elapsed = 00:00:44 . Memory (MB): peak = 2446.098 ; gain = 0.0002default:defaulth px� 
v

Phase %s%s
101*constraints2
2 2default:default2)
Router Initialization2default:defaultZ18-101h px� 
o

Phase %s%s
101*constraints2
2.1 2default:default2 
Create Timer2default:defaultZ18-101h px� 
B
-Phase 2.1 Create Timer | Checksum: 1260283a2
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:01:02 ; elapsed = 00:00:45 . Memory (MB): peak = 2446.098 ; gain = 0.0002default:defaulth px� 
{

Phase %s%s
101*constraints2
2.2 2default:default2,
Fix Topology Constraints2default:defaultZ18-101h px� 
N
9Phase 2.2 Fix Topology Constraints | Checksum: 1260283a2
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:01:02 ; elapsed = 00:00:46 . Memory (MB): peak = 2446.098 ; gain = 0.0002default:defaulth px� 
t

Phase %s%s
101*constraints2
2.3 2default:default2%
Pre Route Cleanup2default:defaultZ18-101h px� 
G
2Phase 2.3 Pre Route Cleanup | Checksum: 1260283a2
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:01:02 ; elapsed = 00:00:46 . Memory (MB): peak = 2446.098 ; gain = 0.0002default:defaulth px� 
p

Phase %s%s
101*constraints2
2.4 2default:default2!
Update Timing2default:defaultZ18-101h px� 
C
.Phase 2.4 Update Timing | Checksum: 1daf2838b
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:01:32 ; elapsed = 00:01:06 . Memory (MB): peak = 2446.098 ; gain = 0.0002default:defaulth px� 
�
Intermediate Timing Summary %s164*route2K
7| WNS=0.544  | TNS=0.000  | WHS=-3.797 | THS=-489.364|
2default:defaultZ35-416h px� 
I
4Phase 2 Router Initialization | Checksum: 1f7a986f6
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:44 ; elapsed = 00:01:13 . Memory (MB): peak = 2483.223 ; gain = 37.1252default:defaulth px� 
p

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101h px� 
C
.Phase 3 Initial Routing | Checksum: 18a6ef1ee
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:02:18 ; elapsed = 00:01:33 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
s

Phase %s%s
101*constraints2
4 2default:default2&
Rip-up And Reroute2default:defaultZ18-101h px� 
u

Phase %s%s
101*constraints2
4.1 2default:default2&
Global Iteration 02default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2J
6| WNS=0.229  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.1 Global Iteration 0 | Checksum: 10c4587af
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:35 ; elapsed = 00:03:30 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
u

Phase %s%s
101*constraints2
4.2 2default:default2&
Global Iteration 12default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2J
6| WNS=0.229  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.2 Global Iteration 1 | Checksum: 223d161d8
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:39 ; elapsed = 00:03:34 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
u

Phase %s%s
101*constraints2
4.3 2default:default2&
Global Iteration 22default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2J
6| WNS=0.255  | TNS=0.000  | WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.3 Global Iteration 2 | Checksum: 1dd0ab9fd
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:51 ; elapsed = 00:03:46 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
F
1Phase 4 Rip-up And Reroute | Checksum: 1dd0ab9fd
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:51 ; elapsed = 00:03:46 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
|

Phase %s%s
101*constraints2
5 2default:default2/
Delay and Skew Optimization2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
5.1 2default:default2!
Delay CleanUp2default:defaultZ18-101h px� 
C
.Phase 5.1 Delay CleanUp | Checksum: 1dd0ab9fd
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:51 ; elapsed = 00:03:46 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
z

Phase %s%s
101*constraints2
5.2 2default:default2+
Clock Skew Optimization2default:defaultZ18-101h px� 
M
8Phase 5.2 Clock Skew Optimization | Checksum: 1dd0ab9fd
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:52 ; elapsed = 00:03:46 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
O
:Phase 5 Delay and Skew Optimization | Checksum: 1dd0ab9fd
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:05:52 ; elapsed = 00:03:46 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
n

Phase %s%s
101*constraints2
6 2default:default2!
Post Hold Fix2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
6.1 2default:default2!
Hold Fix Iter2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
6.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 6.1.1 Update Timing | Checksum: 17cb89868
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:00 ; elapsed = 00:03:51 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
�
Intermediate Timing Summary %s164*route2J
6| WNS=0.330  | TNS=0.000  | WHS=-0.665 | THS=-1.390 |
2default:defaultZ35-416h px� 
C
.Phase 6.1 Hold Fix Iter | Checksum: 25c5befc7
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:00 ; elapsed = 00:03:52 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
A
,Phase 6 Post Hold Fix | Checksum: 1dfabcd15
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:01 ; elapsed = 00:03:52 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
o

Phase %s%s
101*constraints2
7 2default:default2"
Route finalize2default:defaultZ18-101h px� 
B
-Phase 7 Route finalize | Checksum: 265ca8e13
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:01 ; elapsed = 00:03:52 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
v

Phase %s%s
101*constraints2
8 2default:default2)
Verifying routed nets2default:defaultZ18-101h px� 
I
4Phase 8 Verifying routed nets | Checksum: 265ca8e13
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:01 ; elapsed = 00:03:53 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
r

Phase %s%s
101*constraints2
9 2default:default2%
Depositing Routes2default:defaultZ18-101h px� 
E
0Phase 9 Depositing Routes | Checksum: 23ffce01c
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:08 ; elapsed = 00:04:01 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
t

Phase %s%s
101*constraints2
10 2default:default2&
Post Router Timing2default:defaultZ18-101h px� 
q

Phase %s%s
101*constraints2
10.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
D
/Phase 10.1 Update Timing | Checksum: 25494241c
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:16 ; elapsed = 00:04:06 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
�
Estimated Timing Summary %s
57*route2J
6| WNS=0.330  | TNS=0.000  | WHS=0.050  | THS=0.000  |
2default:defaultZ35-57h px� 
�
�The final timing numbers are based on the router estimated timing analysis. For a complete and accurate timing signoff, please run report_timing_summary.
127*routeZ35-327h px� 
G
2Phase 10 Post Router Timing | Checksum: 25494241c
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:16 ; elapsed = 00:04:06 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
@
Router Completed Successfully
2*	routeflowZ35-16h px� 
�

%s
*constraints2p
\Time (s): cpu = 00:06:16 ; elapsed = 00:04:06 . Memory (MB): peak = 2537.172 ; gain = 91.0742default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1382default:default2
442default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
route_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
route_design: 2default:default2
00:06:262default:default2
00:04:122default:default2
2537.1722default:default2
91.0742default:defaultZ17-268h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0562default:default2
2537.1722default:default2
0.0002default:defaultZ17-268h px� 
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
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2)
Write XDEF Complete: 2default:default2
00:00:272default:default2
00:00:092default:default2
2537.1722default:default2
0.0002default:defaultZ17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2Y
EE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/impl_1/rvfpga_routed.dcp2default:defaultZ17-1381h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2&
write_checkpoint: 2default:default2
00:00:352default:default2
00:00:172default:default2
2537.1722default:default2
0.0002default:defaultZ17-268h px� 
�
%s4*runtcl2{
gExecuting : report_drc -file rvfpga_drc_routed.rpt -pb rvfpga_drc_routed.pb -rpx rvfpga_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2n
Zreport_drc -file rvfpga_drc_routed.rpt -pb rvfpga_drc_routed.pb -rpx rvfpga_drc_routed.rpx2default:defaultZ4-113h px� 
>
IP Catalog is up to date.1232*coregenZ19-1839h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
�
#The results of DRC are in file %s.
168*coretcl2�
IE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/impl_1/rvfpga_drc_routed.rptIE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/impl_1/rvfpga_drc_routed.rpt2default:default8Z2-168h px� 
\
%s completed successfully
29*	vivadotcl2

report_drc2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2 
report_drc: 2default:default2
00:00:182default:default2
00:00:092default:default2
2537.1722default:default2
0.0002default:defaultZ17-268h px� 
�
%s4*runtcl2�
�Executing : report_methodology -file rvfpga_methodology_drc_routed.rpt -pb rvfpga_methodology_drc_routed.pb -rpx rvfpga_methodology_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
�report_methodology -file rvfpga_methodology_drc_routed.rpt -pb rvfpga_methodology_drc_routed.pb -rpx rvfpga_methodology_drc_routed.rpx2default:defaultZ4-113h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
Y
$Running Methodology with %s threads
74*drc2
22default:defaultZ23-133h px� 
�
2The results of Report Methodology are in file %s.
450*coretcl2�
UE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/impl_1/rvfpga_methodology_drc_routed.rptUE:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.runs/impl_1/rvfpga_methodology_drc_routed.rpt2default:default8Z2-1520h px� 
d
%s completed successfully
29*	vivadotcl2&
report_methodology2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2(
report_methodology: 2default:default2
00:00:442default:default2
00:00:242default:default2
2603.2232default:default2
66.0512default:defaultZ17-268h px� 
�
%s4*runtcl2�
wExecuting : report_power -file rvfpga_power_routed.rpt -pb rvfpga_power_summary_routed.pb -rpx rvfpga_power_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2~
jreport_power -file rvfpga_power_routed.rpt -pb rvfpga_power_summary_routed.pb -rpx rvfpga_power_routed.rpx2default:defaultZ4-113h px� 
q
$Power model is not available for %s
23*power2*
	STARTUPE2		STARTUPE22default:default8Z33-23h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
K
,Running Vector-less Activity Propagation...
51*powerZ33-51h px� 
P
3
Finished Running Vector-less Activity Propagation
1*powerZ33-1h px� 
�
�Detected over-assertion of set/reset/preset/clear net with high fanouts, power estimation might not be accurate. Please run Tool - Power Constraint Wizard to set proper switching activities for control signals.282*powerZ33-332h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1512default:default2
452default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
report_power2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
report_power: 2default:default2
00:00:422default:default2
00:00:272default:default2
2625.4412default:default2
22.2192default:defaultZ17-268h px� 
�
%s4*runtcl2m
YExecuting : report_route_status -file rvfpga_route_status.rpt -pb rvfpga_route_status.pb
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_timing_summary -max_paths 10 -file rvfpga_timing_summary_routed.rpt -pb rvfpga_timing_summary_routed.pb -rpx rvfpga_timing_summary_routed.rpx -warn_on_violation 
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
22default:defaultZ38-191h px� 

%s4*runtcl2c
OExecuting : report_incremental_reuse -file rvfpga_incremental_reuse_routed.rpt
2default:defaulth px� 
g
BIncremental flow is disabled. No incremental reuse Info to report.423*	vivadotclZ4-1062h px� 

%s4*runtcl2c
OExecuting : report_clock_utilization -file rvfpga_clock_utilization_routed.rpt
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_bus_skew -warn_on_violation -file rvfpga_bus_skew_routed.rpt -pb rvfpga_bus_skew_routed.pb -rpx rvfpga_bus_skew_routed.rpx
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
22default:defaultZ38-191h px� 


End Record
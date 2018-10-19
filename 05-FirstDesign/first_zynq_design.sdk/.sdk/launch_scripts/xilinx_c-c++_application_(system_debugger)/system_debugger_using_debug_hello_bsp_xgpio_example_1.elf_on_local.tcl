connect -url tcp:127.0.0.1:3121
source F:/SOC/PYNQ-Z2/Project/05-FirstDesign/first_zynq_design.sdk/zynq_system_design_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
loadhw -hw F:/SOC/PYNQ-Z2/Project/05-FirstDesign/first_zynq_design.sdk/zynq_system_design_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
dow F:/SOC/PYNQ-Z2/Project/05-FirstDesign/first_zynq_design.sdk/hello_bsp_xgpio_example_1/Debug/hello_bsp_xgpio_example_1.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
con

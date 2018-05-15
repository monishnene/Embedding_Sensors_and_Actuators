# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\monis\Documents\Academics\SA\Lab 2\Design01.cydsn\Design01.cyprj
# Date: Fri, 22 Sep 2017 00:36:42 GMT
#set_units -time ns
create_clock -name {ADC_SAR_1_theACLK(routed)} -period 833.33333333333326 -waveform {0 416.666666666667} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {ADC_SAR_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 21 41} -nominal_period 833.33333333333326 [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for C:\Users\monis\Documents\Academics\SA\Lab 2\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\monis\Documents\Academics\SA\Lab 2\Design01.cydsn\Design01.cyprj
# Date: Fri, 22 Sep 2017 00:36:36 GMT

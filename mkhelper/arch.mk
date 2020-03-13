 #
# Inc make which define ARM architecture and processor
 #

# Used as target
export HANDLED_SYSTEM	:=	raspi3


## For information #
export HANDLED_PROC		:=	arm1176


# Just a List
export HANDLED_ARCH		:=	armv1	\
							armv2	\
							armv3	\
							armv4	\
							armv5	\
							armv6	\
							armv7	\
							armv8

##### QEMU SUPPORTED MACHINE #####
#akita                # Sharp SL-C1000 (Akita) PDA (PXA270)
#ast2500-evb          # Aspeed AST2500 EVB (ARM1176)
#ast2600-evb          # Aspeed AST2600 EVB (Cortex A7)
#borzoi               # Sharp SL-C3100 (Borzoi) PDA (PXA270)
#canon-a1100          # Canon PowerShot A1100 IS
#cheetah              # Palm Tungsten|E aka. Cheetah PDA (OMAP310)
#collie               # Sharp SL-5500 (Collie) PDA (SA-1110)
#connex               # Gumstix Connex (PXA255)
#cubieboard           # cubietech cubieboard (Cortex-A9)
#emcraft-sf2          # SmartFusion2 SOM kit from Emcraft (M2S010)
#highbank             # Calxeda Highbank (ECX-1000)
#imx25-pdk            # ARM i.MX25 PDK board (ARM926)
#integratorcp         # ARM Integrator/CP (ARM926EJ-S)
#kzm                  # ARM KZM Emulation Baseboard (ARM1136)
#lm3s6965evb          # Stellaris LM3S6965EVB
#lm3s811evb           # Stellaris LM3S811EVB
#mainstone            # Mainstone II (PXA27x)
#mcimx6ul-evk         # Freescale i.MX6UL Evaluation Kit (Cortex A7)
#mcimx7d-sabre        # Freescale i.MX7 DUAL SABRE (Cortex A7)
#microbit             # BBC micro:bit
#midway               # Calxeda Midway (ECX-2000)
#mps2-an385           # ARM MPS2 with AN385 FPGA image for Cortex-M3
#mps2-an505           # ARM MPS2 with AN505 FPGA image for Cortex-M33
#mps2-an511           # ARM MPS2 with AN511 DesignStart FPGA image for Cortex-M3
#mps2-an521           # ARM MPS2 with AN521 FPGA image for dual Cortex-M33
#musca-a              # ARM Musca-A board (dual Cortex-M33)
#musca-b1             # ARM Musca-B1 board (dual Cortex-M33)
#musicpal             # Marvell 88w8618 / MusicPal (ARM926EJ-S)
#n800                 # Nokia N800 tablet aka. RX-34 (OMAP2420)
#n810                 # Nokia N810 tablet aka. RX-44 (OMAP2420)
#netduino2            # Netduino 2 Machine
#none                 # empty machine
#nuri                 # Samsung NURI board (Exynos4210)
#palmetto-bmc         # OpenPOWER Palmetto BMC (ARM926EJ-S)
#raspi2               # Raspberry Pi 2
#realview-eb          # ARM RealView Emulation Baseboard (ARM926EJ-S)
#realview-eb-mpcore   # ARM RealView Emulation Baseboard (ARM11MPCore)
#realview-pb-a8       # ARM RealView Platform Baseboard for Cortex-A8
#realview-pbx-a9      # ARM RealView Platform Baseboard Explore for Cortex-A9
#romulus-bmc          # OpenPOWER Romulus BMC (ARM1176)
#sabrelite            # Freescale i.MX6 Quad SABRE Lite Board (Cortex A9)
#smdkc210             # Samsung SMDKC210 board (Exynos4210)
#spitz                # Sharp SL-C3000 (Spitz) PDA (PXA270)
#swift-bmc            # OpenPOWER Swift BMC (ARM1176)
#sx1                  # Siemens SX1 (OMAP310) V2
#sx1-v1               # Siemens SX1 (OMAP310) V1
#terrier              # Sharp SL-C3200 (Terrier) PDA (PXA270)
#tosa                 # Sharp SL-6000 (Tosa) PDA (PXA255)
#verdex               # Gumstix Verdex (PXA270)
#versatileab          # ARM Versatile/AB (ARM926EJ-S)
#versatilepb          # ARM Versatile/PB (ARM926EJ-S)
#vexpress-a15         # ARM Versatile Express for Cortex-A15
#vexpress-a9          # ARM Versatile Express for Cortex-A9
#virt-2.10            # QEMU 2.10 ARM Virtual Machine
#virt-2.11            # QEMU 2.11 ARM Virtual Machine
#virt-2.12            # QEMU 2.12 ARM Virtual Machine
#virt-2.6             # QEMU 2.6 ARM Virtual Machine
#virt-2.7             # QEMU 2.7 ARM Virtual Machine
#virt-2.8             # QEMU 2.8 ARM Virtual Machine
#virt-2.9             # QEMU 2.9 ARM Virtual Machine
#virt-3.0             # QEMU 3.0 ARM Virtual Machine
#virt-3.1             # QEMU 3.1 ARM Virtual Machine
#virt-4.0             # QEMU 4.0 ARM Virtual Machine
#virt-4.1             # QEMU 4.1 ARM Virtual Machine
#virt                 # QEMU 4.2 ARM Virtual Machine (alias of virt-4.2)
#virt-4.2             # QEMU 4.2 ARM Virtual Machine
#witherspoon-bmc      # OpenPOWER Witherspoon BMC (ARM1176)
#xilinx-zynq-a9       # Xilinx Zynq Platform Baseboard for Cortex-A9
#z2                   # Zipit Z2 (PXA27x)

##### QEMU SUPPORTED PROCESSOR #####
#arm1026
#arm1136
#arm1136-r2
#arm1176
#arm11mpcore
#arm926
#arm946
#cortex-a15
#cortex-a7
#cortex-a8
#cortex-a9
#cortex-m0
#cortex-m3
#cortex-m33
#cortex-m4
#cortex-r5
#cortex-r5f
#max
#pxa250
#pxa255
#pxa260
#pxa261
#pxa262
#pxa270-a0
#pxa270-a1
#pxa270
#pxa270-b0
#pxa270-b1
#pxa270-c0
#pxa270-c5
#sa1100
#sa1110
#ti925t


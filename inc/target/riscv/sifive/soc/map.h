#ifndef __SIFIVE_SOC_MAP_
#define __SIFIVE_SOC_MAP_

#define SOC_MMAP_START_RWXA_Debug  0x0000_0100
#define SOC_MMAP_START_RX_ModeSelect  0x0000_1000
#define SOC_MMAP_START_RX_MaskROM  0x0001_0000
#define SOC_MMAP_START_RWXA_E51DTIM  0x0100_0000
#define SOC_MMAP_START_RWXA_E51Hart0ITIM  0x0180_0000
#define SOC_MMAP_START_RWXA_U54Hart1ITIM  0x0180_8000
#define SOC_MMAP_START_RWXA_U54Hart2ITIM  0x0181_0000
#define SOC_MMAP_START_RWXA_U54Hart3ITIM  0x0181_8000
#define SOC_MMAP_START_RWXA_U54Hart4ITIM  0x0182_0000
#define SOC_MMAP_START_RWA_CLINT  0x0200_0000
#define SOC_MMAP_START_RWA_CacheController  0x0201_0000
#define SOC_MMAP_START_RWA_MSI  0x0202_0000
#define SOC_MMAP_START_RWA_DMAController  0x0300_0000
#define SOC_MMAP_START_RWXA_L2LIM  0x0800_0000
#define SOC_MMAP_START_RWXCA_L2Zerodevice  0x0A00_0000
#define SOC_MMAP_START_RWA_PLIC  0x0C00_0000
#define SOC_MMAP_START_RWA_PRCI  0x1000_0000
#define SOC_MMAP_START_RWA_UART0  0x1001_0000
#define SOC_MMAP_START_RWA_UART1  0x1001_1000
#define SOC_MMAP_START_RWA_PWM0  0x1002_0000
#define SOC_MMAP_START_RWA_PWM1  0x1002_1000
#define SOC_MMAP_START_RW_I2C  0x1003_0000
#define SOC_MMAP_START_RWA_QSPI0  0x1004_0000
#define SOC_MMAP_START_RWA_QSPI1  0x1004_1000
#define SOC_MMAP_START_RWA_QSPI2  0x1005_0000
#define SOC_MMAP_START_RWA_GPIO  0x1006_0000
#define SOC_MMAP_START_RWA_OTP  0x1007_0000
#define SOC_MMAP_START_RWA_PinControl  0x1008_0000
#define SOC_MMAP_START_RWA_EthernetMAC  0x1009_0000
#define SOC_MMAP_START_RWA_EthernetManagement  0x100A_0000
#define SOC_MMAP_START_RWA_DDRControl  0x100B_0000
#define SOC_MMAP_START_RWA_DDRManagement  0x100C_0000
#define SOC_MMAP_START_RWCA_ErrorDevice  0x1800_0000
#define SOC_MMAP_START_RXA_QSPI0Flash  0x2000_0000
#define SOC_MMAP_START_RXA_QSPI1Flash  0x3000_0000
#define SOC_MMAP_START_RWXA_ChipLink  0x4000_0000
#define SOC_MMAP_START_RWXCA_ChipLink  0x6000_0000
#define SOC_MMAP_START_RWXA_DDRMemory  0x8000_0000
#define SOC_MMAP_START_RWXA_ChipLinkBIG  0x20_0000_0000
#define SOC_MMAP_START_RWXCA_ChipLinkBIG  0x30_0000_0000

#define SOC_MMAP_END_RWXA_Debug 0x0000_0FFF
#define SOC_MMAP_END_RX_ModeSelect 0x0000_1FFF
#define SOC_MMAP_END_RX_MaskROM 0x0001_7FFF
#define SOC_MMAP_END_RWXA_E51DTIM 0x0100_1FFF
#define SOC_MMAP_END_RWXA_E51Hart0ITIM 0x0180_1FFF
#define SOC_MMAP_END_RWXA_U54Hart1ITIM 0x0180_EFFF
#define SOC_MMAP_END_RWXA_U54Hart2ITIM 0x0181_6FFF
#define SOC_MMAP_END_RWXA_U54Hart3ITIM 0x0181_EFFF
#define SOC_MMAP_END_RWXA_U54Hart4ITIM 0x0182_6FFF
#define SOC_MMAP_END_RWA_CLINT 0x0200_FFFF
#define SOC_MMAP_END_RWA_CacheController 0x0201_0FFF
#define SOC_MMAP_END_RWA_MSI 0x0202_0FFF
#define SOC_MMAP_END_RWA_DMAController 0x030F_FFFF
#define SOC_MMAP_END_RWXA_L2LIM 0x09FF_FFFF
#define SOC_MMAP_END_RWXCA_L2Zerodevice 0x0BFF_FFFF
#define SOC_MMAP_END_RWA_PLIC 0x0FFF_FFFF
#define SOC_MMAP_END_RWA_PRCI 0x1000_0FFF
#define SOC_MMAP_END_RWA_UART0 0x1001_0FFF
#define SOC_MMAP_END_RWA_UART1 0x1001_1FFF
#define SOC_MMAP_END_RWA_PWM0 0x1002_0FFF
#define SOC_MMAP_END_RWA_PWM1 0x1002_1FFF
#define SOC_MMAP_END_RW_I2C 0x1003_0FFF
#define SOC_MMAP_END_RWA_QSPI0 0x1004_0FFF
#define SOC_MMAP_END_RWA_QSPI1 0x1004_1FFF
#define SOC_MMAP_END_RWA_QSPI2 0x1005_0FFF
#define SOC_MMAP_END_RWA_GPIO 0x1006_0FFF
#define SOC_MMAP_END_RWA_OTP 0x1007_0FFF
#define SOC_MMAP_END_RWA_PinControl 0x1008_0FFF
#define SOC_MMAP_END_RWA_EthernetMAC 0x1009_1FFF
#define SOC_MMAP_END_RWA_EthernetManagement 0x100A_0FFF
#define SOC_MMAP_END_RWA_DDRControl 0x100B_3FFF
#define SOC_MMAP_END_RWA_DDRManagement 0x100C_3FFF
#define SOC_MMAP_END_RWCA_ErrorDevice 0x1FFF_FFFF
#define SOC_MMAP_END_RXA_QSPI0Flash 0x2FFF_FFFF
#define SOC_MMAP_END_RXA_QSPI1Flash 0x3FFF_FFFF
#define SOC_MMAP_END_RWXA_ChipLink 0x5FFF_FFFF
#define SOC_MMAP_END_RWXCA_ChipLink 0x7FFF_FFFF
#define SOC_MMAP_END_RWXA_DDRMemory 0x1F_FFFF_FFFF
#define SOC_MMAP_END_RWXA_ChipLinkBIG 0x2F_FFFF_FFFF
#define SOC_MMAP_END_RWXCA_ChipLinkBIG 0x3F_FFFF_FFFF

#endif
#include <stdint.h>

#define RASPI1_MAGIC 0xB76
#define RASPI2_MAGIC 0xC07
#define RASPI3_MAGIC 0xD03
#define RASPI4_MAGIC 0xD08

#define RASPI1_MMIOBASE 0x20000000
#define RASPI2_MMIOBASE 0x3F000000
#define RASPI3_MMIOBASE 0x3F000000
#define RASPI4_MMIOBASE 0xFE000000

#define MASK_DETECT_RASPI(x) ((x >> 4) & 0xFFF)

void __detect(void);

void __detect(void)
{
    uint32_t reg;
    uint32_t *mmio_base;

    asm volatile ("mrs %0, midr_el1" : "=r" (reg));
    switch (MASK_DETECT_RASPI(reg)) {
        case RASPI1_MAGIC:
            mmio_base = (uint32_t *)RASPI1_MMIOBASE;
            break;
        case RASPI2_MAGIC:
            mmio_base = (uint32_t *)RASPI2_MMIOBASE;
            break;
        case RASPI3_MAGIC:
            mmio_base = (uint32_t *)RASPI3_MMIOBASE;
            break;
        case RASPI4_MAGIC:
            mmio_base = (uint32_t *)RASPI4_MMIOBASE;
            break;
        default:   
            mmio_base = (uint32_t *)0x0;
            break;
    }
}
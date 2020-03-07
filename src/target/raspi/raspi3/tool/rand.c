#include "target/raspi/raspi3/rand.h"

#define RNG_CTRL        ((volatile uint *)(ARCH_RASP_MMIOBASE + 0x00104000))
#define RNG_STATUS      ((volatile uint *)(ARCH_RASP_MMIOBASE + 0x00104004))
#define RNG_DATA        ((volatile uint *)(ARCH_RASP_MMIOBASE + 0x00104008))
#define RNG_INT_MASK    ((volatile uint *)(ARCH_RASP_MMIOBASE + 0x00104010))

/**
 * Initialize the RNG
 */
void rand_init()
{
    *RNG_STATUS = 0x40000;
    // mask interrupt
    *RNG_INT_MASK |= 1;
    // enable
    *RNG_CTRL |= 1;
    // wait for gaining some entropy
    while(!((*RNG_STATUS) >> 24))
        asm volatile("nop");
}

/**
 * Return a random number between [min..max]
 */
uint rand(uint min, uint max)
{
    return (*RNG_DATA % (max - min) + min);
}
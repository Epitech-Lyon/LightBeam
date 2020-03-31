#include "target/raspi/raspi3/driver/uart.h"
#include "target/raspi/raspi3/driver/gpio.h"
#include "lightbleam.h"
#include "def/keyword.h"
// #include "target/raspi/raspi3/driver/fb.h"
// #include "target/raspi/raspi3/interrupts/interrupt.h"
// #include "target/raspi/raspi3/cpus/cpus.h"
// #include "target/raspi/raspi3/system.h"
// #include "target/raspi/raspi3/memory/mmu.h"
// #include "def/assert.h"
// #include "arch/overworld/overworld.h"
// #include "kernel/init/inithooks.h"

// static inline void start_setup_log(char const *data)
// {
//     lfb_kprint("[%$AInitializing%$R]: %s...\n", RGB_Blue, data);
// }

// static inline void end_setup_log(char const *data)
// {
//     lfb_kprint("   [%$ASuccessed%$R]: %s!\n\n", RGB_Lime, data);
// }

// void execme(void);
// void execme(void) { lfb_kprint("[CPU %d] is exceuting a routine\n", cpuGetId()); }

void lfb_kprint(char const *fmt __unused, ...) {}
void uart_kprint(char const *fmt __unused, ...) {}
void PANIC(char const *fmt __unused, ...) {}

void setup_level(void);
void setup_level(void)
{
    bcm2837_gpio_init();
    bcm2837_uartpl011_init();
    uart_init();
    uart_puts("AAAAAAAAAAAAAAAAAAAAA\n");
    while(1);
    // helloFromLightBleam();
    // lfb_init();

    // lfb_kprint("[%$AInitialized%$R]: CPU config\n", RGB_Lime);
    // lfb_kprint("[%$AInitialized%$R]: Uart\n", RGB_Lime);
    // lfb_kprint("[%$AInitialized%$R]: Framebuffer\n\n", RGB_Lime);

    // start_setup_log("Cores");
    // multicore_init();
    // end_setup_log("All of them acquired start");

    // start_setup_log("interruptions (vectors, irq, etc.)");

    // // if (timerIrqSetup(MS_TO_US(1000)) == false)
    //     // lfb_kprint("TIMER SETUP FAILED\n");
    // // setFiqFuncAddress(execme);
    // // enable_interrupts();

    // end_setup_log("interrupts are on");


    // start_setup_log("MMU");
    // system_charging(2000);
    // // mmu_init();
    // end_setup_log("MMU is operationnal");

    // lfb_kprint("[%$ADONE%$R]: init step ended\n", RGB_Yellow);
    // while(1);
    //     uart_send(uart_getc());
}
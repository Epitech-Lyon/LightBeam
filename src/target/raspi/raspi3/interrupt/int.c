#include "target/raspi/raspi3/uart.h"
#include "target/raspi/raspi3/interrupt.h"
#include "target/raspi/raspi3/cpus/cpus.h"

char const *entry_error_messages[] =
{
    "SYNC_INVALID_EL1t",
    "IRQ_INVALID_EL1t",
    "FIQ_INVALID_EL1t",
    "ERROR_INVALID_EL1T",

    "SYNC_INVALID_EL1h",
    "IRQ_INVALID_EL1h", 
    "FIQ_INVALID_EL1h", 
    "ERROR_INVALID_EL1h",

    "SYNC_INVALID_EL0_64",
    "IRQ_INVALID_EL0_64",
    "FIQ_INVALID_EL0_64",
    "ERROR_INVALID_EL0_64",

    "SYNC_INVALID_EL0_32",
    "IRQ_INVALID_EL0_32",
    "FIQ_INVALID_EL0_32",
    "ERROR_INVALID_EL0_32"
};

void handle_except_msg(int type, u64_t esr, u64_t address)
{
    uart_kprint("%s, ESR: 0x%X, address: 0x%X\n", entry_error_messages[type], esr, address);
    /* No return from fault actually */
    __hang();
}

#define SYSTEM_TIMER_IRQ_1	(1 << 1)
void handle_irq(void)
{
    uart_puts("INT TRIGGERED\n");
    /*
    unsigned int irq = get32(IRQ_PENDING_1);
    switch (irq) {
    case (SYSTEM_TIMER_IRQ_1):
        uart_kprint("TIMER!\n");
        // handle_timer_irq();
        break;
    default:
        uart_kprint("Unknown pending irq: %x\r\n", irq);
    }
    */
}

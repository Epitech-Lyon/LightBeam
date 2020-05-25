#include "target/x86/common/interrupts/interrupts.h"

static void (*isr_data_handler[MAX_INT])(struct intframe *) = {0};

void interrupt_register_handler(uint intnbr, void (*handler)(struct intframe *))
{
    if (intnbr < MAX_INT)
        isr_data_handler[intnbr] = handler;
}

void interrupt_unregister_handler(uint intnbr)
{
    if (intnbr < MAX_INT)
        isr_data_handler[intnbr] = NULL;
}

void *interrupt_get_specific_handler(uint intnbr)
{
    if (intnbr < MAX_INT)
        return (isr_data_handler[intnbr]);
    return (NULL);
}
#include "target/raspi/shared/bcm283X/arm-timer.h"

void armtimer_init(u32_t val)
{
    bcm283x_armtimer_set_runtime_value(val);
    bcm283x_armtimer_set_23bcounter_mode();
    bcm283x_armtimer_enable_interrupt();
    bcm283x_armtimer_enable();
}

void armtimer_set_value(u32_t val)
{
    bcm283x_armtimer_set_runtime_value(val);
}

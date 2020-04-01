#include "target/raspi/raspi3/driver/fb.h"
#include "target/raspi/raspi3/system.h"

void helloFromLightBeam(void)
{
    char const *kernelname = "\
  _      _       _     ____  _                         \n\
 | |    (_)     | |   |  _ \\| |                       \n\
 | |     _  __ _| |__ | |_) | | ___  __ _ _ __ ___     \n\
 | |    | |/ _` | '_ \\|  _ <| |/ _ \\/ _` | '_ ` _ \\ \n\
 | |____| | (_| | | | | |_) | |  __/ (_| | | | | | |   \n\
 |______|_|\\__, |_| |_|____/|_|\\___|\\__,_|_| |_| |_|\n\
            __/ |                                      \n\
           |___/                                       \n\
";
    rpifb_kprint("%s%s%s\nKernel init routine...\n\n", ESC_FRT_RGB_Yellow, kernelname, ESC_FRT_RGB_White);
}
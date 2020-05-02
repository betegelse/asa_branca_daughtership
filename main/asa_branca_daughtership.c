#include "sdkconfig.h"

#include "hydra.h"
#include "pyxis.h"

void app_main(void)
{
    hydra_init();
    pyxis_init();

    while (1)
        ;
}

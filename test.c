#include <stdio.h>
#include "gpio_dev.h"

int main(void)
{
    int err = 0 ;

    err = gpio_Export(135);
    if (err != 0) printf("gpio_Export failed!\n");
    else printf("gpio_Export\n");

    err = gpio_Unexport(135);
    if (err != 0) printf("gpio_Unexport failed!\n");
    else printf("gpio_Unexport\n");
    
    return 0;
}
#include <stdio.h>
#include "gpio_dev.h"

#define GPIO_NUM 135

int main(void)
{
    int err = 0 ;
    int gpio_fd;

    err = gpio_Export(GPIO_NUM);
    if (err != 0) printf("gpio_Export failed!\n");
    else printf("gpio_Export\n");

    gpio_SetDirection(GPIO_NUM, GPIO_DIRECTION_OUT);

    for(int i = 0;i<10;i++)
    {
        gpio_SetValue(GPIO_NUM, GPIO_VALUE_HIGH);
        printf("set pin(%d) to high\n",GPIO_NUM);
        sleep(2);
        gpio_SetValue(GPIO_NUM, GPIO_VALUE_LOW);
        printf("set pin(%d) to low\n",GPIO_NUM);
        sleep(2);
    }    

    err = gpio_Unexport(GPIO_NUM);
    if (err != 0) printf("gpio_Unexport failed!\n");
    else printf("gpio_Unexport\n");

    return 0;
}
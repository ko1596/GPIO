/**
******************************************************************************
* File Name          : gpio_dev.c
* Description        : Algorithm that allows the camera to determine whether to shoot.
******************************************************************************
*
* COPYRIGHT(c) 2021 Joey Ke
*
******************************************************************************
*/
/* Includes ------------------------------------------------------------------*/
#include "gpio_dev.h"

GPIO_Error gpio_Export(unsigned int gpio_num)
{
    int fd, len;  
    char buf[MAX_BUF];  
   
    fd = open(SYSFS_GPIO_DIR "/export", O_WRONLY);  
    if (fd < 0) {  
        perror("gpio/export");  
        return fd;  
    }  
   
    len = snprintf(buf, sizeof(buf), "%d", gpio_num);  
    write(fd, buf, len);  
    close(fd);  
   
    return 0;  
}

GPIO_Error gpio_Unexport(unsigned int gpio_num)
{  
    int fd, len;  
    char buf[MAX_BUF];  
   
    fd = open(SYSFS_GPIO_DIR "/unexport", O_WRONLY);  
    if (fd < 0) {  
        perror("gpio/export");  
        return fd;  
    }  
   
    len = snprintf(buf, sizeof(buf), "%d", gpio_num);  
    write(fd, buf, len);  
    close(fd);  
    return 0;  
} 

GPIO_Error gpio_SetDirection(unsigned int gpio_num, GPIO_Direction out_flag);

GPIO_Error gpio_SetValue(unsigned int gpio_num, GPIO_Value value);

GPIO_Error gpio_OpenFD(int fd);

GPIO_Error gpio_CloseFD(int fd);

/************************ (C) COPYRIGHT Joey Ke *****END OF FILE****/
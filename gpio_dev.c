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

GPIO_Error gpio_Export(unsigned int gpio_num);

GPIO_Error gpio_Unexport(unsigned int gpio_num);

GPIO_Error gpio_SetDirection(unsigned int gpio_num, GPIO_Direction out_flag);

GPIO_Error gpio_SetValue(unsigned int gpio_num, GPIO_Value value);

GPIO_Error gpio_OpenFD(int fd);

GPIO_Error gpio_CloseFD(int fd);

/************************ (C) COPYRIGHT Joey Ke *****END OF FILE****/
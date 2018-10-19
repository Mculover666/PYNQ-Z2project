/**
 *   @filename		led_bsp_mculover666.h
 *   @brief				实现板载4颗LED驱动
 *   @data				 2018/10/18
 *   @author			Mculover666
 */

#ifndef LED_BSP_MCULOVER666_H_
#define LED_BSP_MCULOVER666_H_

#include "xgpio.h"
#include "xparameters.h"

#define ON						1
#define OFF						0
#define RGBLED_XGpio_Device_ID  XPAR_GPIO_0_DEVICE_ID
#define RGBLED_XGpio_Channel	2
#define RGBLED								 0x0000003F
#define RGBLED1_R							 0x00000001
#define RGBLED1_G							 0x00000002
#define RGBLED1_B							 0x00000004
#define RGBLED2_R							 0x00000008
#define RGBLED2_G							 0x00000010
#define RGBLED2_B							 0x00000020

/* 初始化LED所在io */
void RGBled_init();
void RGBLED1_R_Statue(int statue);
void RGBLED1_G_Statue(int statue);
void RGBLED1_B_Statue(int statue);
void RGBLED2_R_Statue(int statue);
void RGBLED2_G_Statue(int statue);
void RGBLED2_B_Statue(int statue);
void RGBLED_Statue(int statue);

#endif /* LED_BSP_MCULOVER666_H_ */

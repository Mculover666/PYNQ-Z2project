/**
 *   @filename		led_bsp_mculover666.c
 *   @brief				实现板载4颗LED驱动
 *   @data				 2018/10/18
 *   @author			Mculover666
 */
#include "rgbled_bsp_mculover666.h"

XGpio gpio;		//实例化一个Xgpio类型结构体

/**
 * @brief		LED IO初始化
 * @param   none
 * @retval		none
 * */
void RGBled_init()
{
	/* 初始化XGpio */
	XGpio_Initialize(&gpio, RGBLED_XGpio_Device_ID);

	/* 设置XGpio中LED所在引脚方向为输出 */
	/* !!!注意:0-output 1-input !!! */
	XGpio_SetDataDirection(&gpio, RGBLED_XGpio_Channel, ~RGBLED);

	/* 默认输出低电平 */
	XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED);
}


/* 定义LED单个操作函数 */
void RGBLED1_R_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED1_R);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED1_R);		//高电平点亮
}
void RGBLED1_G_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED1_G);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED1_G);		//高电平点亮
}
void RGBLED1_B_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED1_B);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED1_B);		//高电平点亮
}
void RGBLED2_R_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED2_R);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED2_R);		//高电平点亮
}
void RGBLED2_G_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED2_G);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED2_G);		//高电平点亮
}
void RGBLED2_B_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED2_B);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED2_B);		//高电平点亮
}

/* 定义LED整体操作函数 */
void RGBLED_Statue(int statue)
{
	if(statue)
		XGpio_DiscreteSet(&gpio, RGBLED_XGpio_Channel, RGBLED);	//低电平点亮
	else
		XGpio_DiscreteClear(&gpio, RGBLED_XGpio_Channel, RGBLED);		//高电平点亮
}



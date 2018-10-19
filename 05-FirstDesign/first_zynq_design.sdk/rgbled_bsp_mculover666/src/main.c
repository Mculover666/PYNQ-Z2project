/**
 *   @filename		main.c
 *   @brief				测试LED驱动
 *   @data				 2018/10/18
 *   @author			Mculover666
 */
#include "xil_printf.h"
#include "rgbled_bsp_mculover666.h"

int main()
{
	/* 初始化LED所在io */
	RGBled_init();
	print("RGBLED init ok\r\n");

	/* 打开所有io */
	//RGBLED_Statue(OFF);
	RGBLED1_R_Statue(ON);
	RGBLED2_G_Statue(ON);
	print("RGBLED is all on\r\n");

	while(1);

}


/**
 *   @filename		main.c
 *   @brief				����LED����
 *   @data				 2018/10/18
 *   @author			Mculover666
 */
#include "led_bsp_mculover666.h"
#include "xil_printf.h"

int main()
{
	/* ��ʼ��LED����io */
	led_init();
	print("LED init ok\r\n");

	/* ������io */
	LED_Statue(ON);
	print("LED is all on\r\n");

	while(1);

}

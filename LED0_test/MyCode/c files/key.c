/*
 * key.c
 *
 *  Created on: 2020Äê1ÔÂ15ÈÕ
 *      Author: qiao
 */
#include "main.h"
#include "key.h"



uint8_t KEY_Scan(uint8_t mode)
{
	static uint8_t key_up = 1;
	if(mode) key_up = 1;
	if(key_up && (KEY0 == 0 || KEY1 == 0 || WK_UP == 1))
	{
		HAL_Delay(10);
		key_up = 0;
		if(KEY0 == 0) return KEY0_PRES;
		else if(KEY1 == 0) return KEY1_PRES;
		else if(WK_UP == 1) return WK_UP_PRES;
	}
	else if(KEY0 == 1 || KEY1 == 1 || WK_UP == 0) key_up = 1;
	return 0;
}

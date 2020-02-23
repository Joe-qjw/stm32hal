/*
 * key.h
 *
 *  Created on: 2020Äê1ÔÂ15ÈÕ
 *      Author: qiao
 */

#ifndef __KEY_H
#define __KEY_H

//#include "main.h"
//#include "stm32f1xx_hal.h"

#define KEY0 HAL_GPIO_ReadPin(KEY0_GPIO_Port,KEY0_Pin)
#define KEY1 HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin)
#define WK_UP HAL_GPIO_ReadPin(WK_UP_GPIO_Port,WK_UP_Pin)

#define KEY0_PRES  1
#define KEY1_PRES  2
#define WK_UP_PRES 3

uint8_t KEY_Scan(uint8_t mode);

#endif /* KEY_H_ */

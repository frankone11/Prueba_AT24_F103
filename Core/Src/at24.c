/*
 * at24.c
 *
 *  Created on: Feb 12, 2024
 *      Author: paco
 */

#include "main.h"
#include "at24.h"
#include <stdio.h>

//twr 5ms

//#define READ	0x01U

extern I2C_HandleTypeDef hi2c1;

void AT24_WriteByte(uint8_t device, uint8_t address, uint8_t data)
{
	if(HAL_I2C_Mem_Write(&hi2c1, device, address, 1, &data, 1, 100) != HAL_OK)
		printf("Write Error\n");
	else
		HAL_Delay(6);
}

uint8_t AT24_ReadByte(uint8_t device, uint8_t address)
{
	uint8_t data = 0;
	if(HAL_I2C_Mem_Read(&hi2c1, device, address, 1, &data, 1, 100) != HAL_OK)
		printf("Read Error\n");
	return data;
}

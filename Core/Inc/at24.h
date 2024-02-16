/*
 * at24.h
 *
 *  Created on: Feb 12, 2024
 *      Author: paco
 */

#ifndef INC_AT24_H_
#define INC_AT24_H_

/*
 * @brief Function that writes one byte of data on the specified register address.
 *
 * @params
 * 	device: Physical addreess of the memory IC (7 bits)
 * 	address: Logical address of the register to read on the memory
 * 	data: value to save ont he register
 *
 */
void AT24_WriteByte(uint8_t device, uint8_t address, uint8_t data);

/*
 * @brief Function that reads one byte of data on the specified register address.
 *
 * 	device: Physical addreess of the memory IC (7 bits)
 * 	address: Logical address of the register to read on the memory
 *
 * @returns value of the register.
 */
uint8_t AT24_ReadByte(uint8_t device, uint8_t address);

#endif /* INC_AT24_H_ */

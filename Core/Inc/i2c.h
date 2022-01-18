#ifndef I2C_H_
#define I2C_H_

#include "stdio.h"
#include "stm32f4xx_hal.h"

void I2C_WriteBuffer(I2C_HandleTypeDef hi, uint8_t dev_addr, uint8_t size_buff);
void I2C_ReadBuffer(I2C_HandleTypeDef hi, uint8_t dev_addr, uint8_t size_buff);
#endif /* I2C_H_ */

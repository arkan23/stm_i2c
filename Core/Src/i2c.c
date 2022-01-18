#include "i2c.h"


extern uint8_t arrayBuffer[8];
char str[100];

void I2C_WriteBuffer(I2C_HandleTypeDef hi, uint8_t dev_addr, uint8_t size_buff) {
	while(HAL_I2C_Master_Transmit(&hi, (uint16_t) dev_addr, (uint8_t*) &arrayBuffer, (uint16_t) size_buff, (uint32_t) 1000) != HAL_OK){
		if (HAL_I2C_GetError(&hi) != HAL_I2C_ERROR_AF) {
			sprintf(str, "Buffer Error");
		}
	}

}

void I2C_ReadBuffer(I2C_HandleTypeDef hi, uint8_t dev_addr, uint8_t size_buff) {
	while(HAL_I2C_Master_Receive(&hi, (uint16_t) dev_addr, (uint8_t*) &arrayBuffer, (uint16_t) size_buff, (uint32_t) 1000) != HAL_OK){
			if (HAL_I2C_GetError(&hi) != HAL_I2C_ERROR_AF) {
				sprintf(str, "Buffer Error");
			}
		}
}

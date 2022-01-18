#include "RTC.h"

uint8_t RTC_convertFromDec(uint8_t data) {
	uint8_t result = ((data>>4) * 10+(0x0F&data));
	return result;
}

uint8_t RTC_convertFromBinDec(uint8_t data) {
	uint8_t result = ((data/10)<<4)|(data%10);
	return result;
}

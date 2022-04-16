#ifndef __SPI_DRIVER__
#define __SPI_DRIVER__

#include "stm32f10x.h"
#include <stdint.h>

void setupSpi(void);
void initDisplay(void);
uint8_t sendAndReceiveData(uint8_t * data, uint16_t dataSize);

#endif
#ifndef __DISPLAY_FUNCTIONS__
#define __DISPLAY_FUNCTIONS__

#include "point.h"
#include <stdint.h>

void drawStuff(point_t * input, uint16_t inputSize, uint8_t * buffer, uint16_t bufferSize);
void clearBuffer(uint8_t * buffer, uint16_t bufferSize);
void createXAxis(uint8_t xStart, uint8_t xEnd, uint8_t yPosition, point_t * buffer, uint16_t bufferSize);
void createYAxis(uint8_t xPosition, uint8_t yStart, uint8_t yEnd, point_t * buffer, uint16_t bufferSize);

#endif
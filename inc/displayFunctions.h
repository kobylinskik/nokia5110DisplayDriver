#ifndef __DISPLAY_FUNCTIONS__
#define __DISPLAY_FUNCTIONS__

#include "display.h"
#include "font.h"
#include "point.h"
#include <stdint.h>

void convertPointsToDisplayImageData(display_t * display, point_t * input, uint16_t inputSize);
void clearDisplay(display_t * display);
void drawChart(display_t * display, chartData_t * chartData);
uint16_t convertTextToPoints(char * text, character_t * letters, character_t * digits, point_t * buffer, uint16_t bufferSize, uint8_t xOffset, uint8_t yOffset);
uint16_t createXAxis(uint8_t xStart, uint8_t xEnd, uint8_t yPosition, point_t * buffer, uint16_t bufferSize);
uint16_t createYAxis(uint8_t xPosition, uint8_t yStart, uint8_t yEnd, point_t * buffer, uint16_t bufferSize);
// void createXAxis(uint8_t xStart, uint8_t xEnd, uint8_t yPosition, point_t * buffer, uint16_t bufferSize);
// void createYAxis(uint8_t xPosition, uint8_t yStart, uint8_t yEnd, point_t * buffer, uint16_t bufferSize);
// void drawChart(double * functionValues, uint8_t functionValuesSize, double minVal, double maxVal, uint8_t displayHeight, point_t * buffer, uint16_t bufferSize);
#endif
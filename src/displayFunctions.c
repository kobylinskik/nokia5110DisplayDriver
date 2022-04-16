#include "displayFunctions.h"

void drawStuff(point_t * input, uint16_t inputSize, uint8_t * buffer, uint16_t bufferSize) {
    for (uint16_t i = 0; i < inputSize; i++) {
        uint8_t yPosBig = 5 - input[i].y / 8;
        uint8_t yPosSmall = 7 - input[i].y % 8;
        buffer[input[i].x + yPosBig * 84] |= 1 << yPosSmall;
    }
}

void clearBuffer(uint8_t * buffer, uint16_t bufferSize) {
    for (uint16_t i = 0; i < bufferSize; i++) {
        buffer[i] = 0;
    }
}

void createXAxis(uint8_t xStart, uint8_t xEnd, uint8_t yPosition, point_t * buffer, uint16_t bufferSize) {
    for (uint8_t i = xStart; i < xEnd; i++) {
        buffer[i - xStart].x = i;
        buffer[i - xStart].y = yPosition;
    }
};
void createYAxis(uint8_t xPosition, uint8_t yStart, uint8_t yEnd, point_t * buffer, uint16_t bufferSize) {
    for (uint8_t i = yStart; i < yEnd; i++) {
        buffer[i - yStart].x = xPosition;
        buffer[i - yStart].y = i;
    }
};
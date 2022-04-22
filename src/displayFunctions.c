#include "displayFunctions.h"

void convertPointsToDisplayImageData(display_t * display, point_t * input, uint16_t inputSize) {
    for (uint16_t i = 0; i < inputSize; i++) {
        uint8_t yPosBig = display->imageHeight - 1 - input[i].y / 8;
        uint8_t yPosSmall = 7 - input[i].y % 8;
        display->imageData[input[i].x + yPosBig * 84] |= 1 << yPosSmall;
    }
}

void clearDisplay(display_t * display) {
    for (uint16_t i = 0; i < display->imageSize; i++) {
        display->imageData[i] = 0;
    }
}

void drawChart(display_t * display, chartData_t * chartData) {
    point_t points[504];
    point_t * pointsPtr = points;
    pointsPtr += createXAxis(2, display->imageWidth - 1, 7, pointsPtr, 504);
    pointsPtr += createYAxis(2, 7, display->imageHeight * 8 - 1, pointsPtr, 504);
    convertTextToPoints(chartData->xAxisDescription, letters, digits, pointsPtr, 504, 50, 0);
    convertPointsToDisplayImageData(display, points, 504);
}

// The functions below return the number of allocated points
uint16_t createXAxis(uint8_t xStart, uint8_t xEnd, uint8_t yPosition, point_t * buffer, uint16_t bufferSize) {
    for (uint8_t i = xStart; i < xEnd; i++) {
        buffer[i - xStart].x = i;
        buffer[i - xStart].y = yPosition;
    }
    return xEnd - xStart;
};

uint16_t createYAxis(uint8_t xPosition, uint8_t yStart, uint8_t yEnd, point_t * buffer, uint16_t bufferSize) {
    for (uint8_t i = yStart; i < yEnd; i++) {
        buffer[i - yStart].x = xPosition;
        buffer[i - yStart].y = i;
    }
    return yEnd - yStart;
};

uint16_t convertTextToPoints(char * text, character_t * letters, character_t * digits, point_t * buffer, uint16_t bufferSize, uint8_t xOffset, uint8_t yOffset) {
    uint8_t offset = 0;
    uint16_t pointsAllocated = 0;
    while (*text != 0) {
        character_t * character;
        if (*text >= 'A' && *text <= 'Z') {
            character = &letters[*text - 'A'];
        } else if (*text >= 'a' && *text <= 'z') {
            character = &letters[*text - 'a'];
        } else if (*text >= '0' && *text <= '9') {
            character = &digits[*text - '0'];
        }
        for (uint8_t i = 0; i < character->pointsSize; i++) {
            *buffer = character->points[i];
            offsetPoint(buffer++, offset + xOffset, yOffset);
        }
        offset += character->width + 1;
        text++;
        pointsAllocated += character->pointsSize;
    }
    return pointsAllocated;
}
/*
uint16_t convertTextToPointsHorizontal(char * text, character_t * letters, character_t * digits, point_t * buffer, uint8_t bufferSize, uint8_t xOffset, uint8_t yOffset) {
    uint8_t offset = 0;
    uint16_t pointsAllocated = 0;
    while (*text != 0) {
        character_t * character;
        if (*text >= 'A' && *text <= 'Z') {
            character = &letters[*text - 'A'];
        } else if (*text >= 'a' && *text <= 'z') {
            character = &letters[*text - 'a'];
        } else if (*text >= '0' && *text <= '9') {
            character = &digits[*text - '0'];
        }
        for (uint8_t i = 0; i < character->pointsSize; i++) {
            *buffer = character->points[i];
            offsetPoint(buffer++, xOffset, offset + yOffset);
        }
        offset += 6;
        text++;
        pointsAllocated += character->pointsSize;
    }
    return pointsAllocated;
}*/
/*
void drawChart(double * functionValues, uint8_t functionValuesSize, double minVal, double maxVal, uint8_t displayHeight, point_t * buffer, uint16_t bufferSize) {
    for (uint8_t i = 0; i < functionValuesSize; i++) {
        buffer[i].x = i;
        double val = (functionValues[i] - minVal) * displayHeight * 1.0 / ((maxVal - minVal) * 1.0);
        buffer[i].y = val;
    }
}
*/
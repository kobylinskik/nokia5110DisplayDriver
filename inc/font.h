#ifndef __FONT__
#define __FONT__

#include "point.h"
#include <stdint.h>

typedef struct {
    point_t points[25];
    uint8_t pointsSize;
    uint8_t width;
} character_t;

character_t letters[25];
character_t digits[10];

void createCharacters(character_t * letters, character_t * digits);
// void convertTextToPoints(char * text, character_t * letters, character_t * digits, point_t * buffer, uint8_t bufferSize, uint8_t xOffset, uint8_t yOffset);
// void convertTextToPointsHorizontal(char * text, character_t * letters, character_t * digits, point_t * buffer, uint8_t bufferSize, uint8_t xOffset, uint8_t yOffset);

#endif
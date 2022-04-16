#ifndef __POINT__
#define __POINT__

#include <stdint.h>

typedef struct {
    uint8_t x;
    uint8_t y;
} point_t;

void offsetPoint(point_t * basePoint, uint8_t xOffset, uint8_t yOffset);

#endif
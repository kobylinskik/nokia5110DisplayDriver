#include "point.h"

void offsetPoint(point_t * point, uint8_t xOffset, uint8_t yOffset) {
    point->x += xOffset;
    point->y += yOffset;
};
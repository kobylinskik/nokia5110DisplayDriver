#ifndef __DISPLAY__
#define __DISPLAY__

#include <stdint.h>

typedef struct {
    uint8_t imageHeight;
    uint8_t imageWidth;
    uint16_t imageSize;
    uint8_t * imageData;
} display_t;

typedef struct {
    uint8_t xAxisPosition;
    char xAxisDescription[8];
    uint8_t yAxisPoision;
    char yAxisDescription[8];
    double * functionValues;
    uint8_t functionValuesSize;
    double minVal;
    double maxVal;
} chartData_t;

#endif
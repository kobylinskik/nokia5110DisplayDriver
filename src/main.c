#include "clockSetup.h"
#include "displayFunctions.h"
#include "font.h"
#include "pinSetup.h"
#include "spiDriver.h"
#include "stm32f10x.h"
#include <math.h>

#define IMAGE_HEIGHT 6
#define IMAGE_WIDTH 84
#define IMAGE_SIZE_BYTES IMAGE_HEIGHT * IMAGE_WIDTH
#define IMAGE_SIZE_BITS IMAGE_SIZE_BYTES * 8
#define POINTS_SIZE 200

int main() {
    systemClockConfig();
    gpioClocksConfig();
    setGpioPins();
    setupSpi();
    initDisplay();

    character_t letters[25];
    character_t digits[10];

    createCharacters(letters, digits);
    GPIOC->ODR |= 1 << 6;
    uint8_t commands[] = {0x21, 0x14, 0x80 | 0x3c, 0x20, 0x0C};

    for (uint8_t i = 0; i < sizeof(commands); i++) {
        sendAndReceiveData(&commands[i], 1);
    }

    uint8_t imageBuffer[IMAGE_SIZE_BYTES];

    // sendAndReceiveData(imageBuffer, 504);

    point_t points[POINTS_SIZE];
    for (uint8_t i = 0; i < POINTS_SIZE; i++) {
        points[i].x = 0;
        points[i].y = 0;
    }
    // 681328

    // int j = 0;
    /*while (1) {
        j++;
        j = j % 84;
        for (uint16_t i = 0; i < 84; i++) {
            points[i].x = i;
            double sinX = sin(1.95 * M_PI * (((j + i) % 84) / 84.0));
            points[i].y = 24 + 24 * sinX;
            int t = 0;
        }
*/
    char * text = "AbCdEfG";

    GPIOC->ODR |= 2;

    clearBuffer(imageBuffer, IMAGE_SIZE_BYTES);

    sendAndReceiveData(imageBuffer, 504);

    createXAxis(2, IMAGE_WIDTH - 1, 7, points, IMAGE_WIDTH - 1);
    createYAxis(2, 7, IMAGE_HEIGHT * 8, points + IMAGE_WIDTH, IMAGE_HEIGHT * 8 - 7);

    convertTextToPoints(text, letters, digits, points + IMAGE_WIDTH + IMAGE_HEIGHT * 8, POINTS_SIZE, 50, 0);

    drawStuff(points, POINTS_SIZE, imageBuffer, sizeof(imageBuffer));

    sendAndReceiveData(imageBuffer, 504);

    while (1) {
        // xOffset++;

        for (uint32_t i = 0; i < 1000000; i++) {
        }
    }
    /*for (uint32_t i = 0; i < 1000000; i++) {
    }*/
}

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
#define POINTS_SIZE 84

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
}

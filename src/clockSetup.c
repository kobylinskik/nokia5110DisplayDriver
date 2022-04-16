#include "clockSetup.h"
#include "stm32f10x.h"

void systemClockConfig(void) {
    // Set PLL as the system clock
    RCC->CFGR |= (1 << 1);
    // Set PLL multiplication value as 9
    RCC->CFGR |= (7 << 18);

    // Enable HSI
    RCC->CR |= 1;
    // Check if HSI is ready
    while (!(RCC->CR & 2)) {
    }
    // Enable PLL
    RCC->CR |= (1 << 24);
    while (!(RCC->CR & (1 << 25))) {
    }
}

void gpioClocksConfig(void) {
    // Enable GPIO A
    RCC->APB2ENR |= 1 << 2;
    // Enable GPIO C
    RCC->APB2ENR |= 1 << 4;
    // Enable SPI
    RCC->APB2ENR |= 1 << 12;
}
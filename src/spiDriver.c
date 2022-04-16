#include "spiDriver.h"

void setupSpi(void) {
    // Baud rate = sysclock / 16
    SPI1->CR1 |= (1 << 3) + (1 << 4);
    // Software slave management
    SPI1->CR1 |= (1 << 8) + (1 << 9);
    // Enable SPI
    SPI1->CR1 |= 1 << 6;
    // Master configuration
    SPI1->CR1 |= 1 << 2;
}

void initDisplay(void) {
    GPIOC->ODR |= (1 << 2) + (1 << 3);
    for (uint32_t i = 0; i < 100000; i++) {
    }
    GPIOC->ODR &= ~(1 << 3);
    for (uint32_t i = 0; i < 100000; i++) {
    }
    GPIOC->ODR |= 1 << 3;
}

uint8_t sendAndReceiveData(uint8_t * data, uint16_t dataSize) {
    GPIOC->ODR &= ~(1 << 2);
    // Send data
    // Check if transmit buffer is empty
    for (uint16_t i = 0; i < dataSize; i++) {
        while (!(SPI1->SR & 2)) {
        }
        SPI1->DR = data[i];
    }

    while (!(SPI1->SR & 1)) {
    }
    // Check if receive buffer is not empty
    /*while(!(*spi1Sr & 1)) {

    }*/
    uint8_t result = SPI1->DR;
    GPIOC->ODR |= 1 << 2;
    return result;
}
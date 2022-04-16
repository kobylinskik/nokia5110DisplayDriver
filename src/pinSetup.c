#include "pinSetup.h"

void setGpioPins(void) {
    // Pin A5 - AFIO Output push-pull
    uint32_t pinConf = ((1 << 1) | (1 << 3));
    uint32_t pinConfNot = (1 | (1 << 2));
    GPIOA->CRL &= ~(pinConfNot << 20);
    GPIOA->CRL |= (pinConf << 20);
    // Pin A6 - Floating input - reset state, no need to change
    // Pin A7 -Alternate function push-pull
    GPIOA->CRL &= ~(pinConfNot << 28);
    GPIOA->CRL |= (pinConf << 28);

    // Pins C0, C1, C2 - GP Output Push-Pull
    pinConfNot = (1 | 1 << 2 | 1 << 3);
    pinConf = 2;
    GPIOC->CRL &= ~(pinConfNot + (pinConfNot << 4) + (pinConfNot << 8) + (pinConfNot << 12) + (pinConfNot << 24));
    GPIOC->CRL |= (pinConf + (pinConf << 4) + (pinConf << 8) + (pinConf << 12) + (pinConf << 24));
}
#include "font.h"

void createCharacters(character_t * letters, character_t * digits) {
    letters[0].points[0].x = 0;
    letters[0].points[0].y = 0;
    letters[0].points[1].x = 0;
    letters[0].points[1].y = 1;
    letters[0].points[2].x = 0;
    letters[0].points[2].y = 2;
    letters[0].points[3].x = 0;
    letters[0].points[3].y = 3;
    letters[0].points[4].x = 1;
    letters[0].points[4].y = 2;
    letters[0].points[5].x = 1;
    letters[0].points[5].y = 4;
    letters[0].points[6].x = 2;
    letters[0].points[6].y = 0;
    letters[0].points[7].x = 2;
    letters[0].points[7].y = 1;
    letters[0].points[8].x = 2;
    letters[0].points[8].y = 2;
    letters[0].points[9].x = 2;
    letters[0].points[9].y = 3;
    letters[0].pointsSize = 10;
    letters[0].width = 3;

    letters[1].points[0].x = 0;
    letters[1].points[0].y = 0;
    letters[1].points[1].x = 0;
    letters[1].points[1].y = 1;
    letters[1].points[2].x = 0;
    letters[1].points[2].y = 2;
    letters[1].points[3].x = 0;
    letters[1].points[3].y = 3;
    letters[1].points[4].x = 0;
    letters[1].points[4].y = 4;
    letters[1].points[5].x = 1;
    letters[1].points[5].y = 0;
    letters[1].points[6].x = 1;
    letters[1].points[6].y = 2;
    letters[1].points[7].x = 1;
    letters[1].points[7].y = 4;
    letters[1].points[8].x = 2;
    letters[1].points[8].y = 1;
    letters[1].points[9].x = 2;
    letters[1].points[9].y = 3;
    letters[1].pointsSize = 10;
    letters[1].width = 3;

    letters[2].points[0].x = 0;
    letters[2].points[0].y = 1;
    letters[2].points[1].x = 0;
    letters[2].points[1].y = 2;
    letters[2].points[2].x = 0;
    letters[2].points[2].y = 3;
    letters[2].points[3].x = 1;
    letters[2].points[3].y = 0;
    letters[2].points[4].x = 1;
    letters[2].points[4].y = 4;
    letters[2].points[5].x = 2;
    letters[2].points[5].y = 1;
    letters[2].points[6].x = 2;
    letters[2].points[6].y = 3;
    letters[2].pointsSize = 7;
    letters[2].width = 3;

    letters[3].points[0].x = 0;
    letters[3].points[0].y = 0;
    letters[3].points[1].x = 0;
    letters[3].points[1].y = 1;
    letters[3].points[2].x = 0;
    letters[3].points[2].y = 2;
    letters[3].points[3].x = 0;
    letters[3].points[3].y = 3;
    letters[3].points[4].x = 0;
    letters[3].points[4].y = 4;
    letters[3].points[5].x = 1;
    letters[3].points[5].y = 0;
    letters[3].points[6].x = 1;
    letters[3].points[6].y = 4;
    letters[3].points[7].x = 2;
    letters[3].points[7].y = 1;
    letters[3].points[8].x = 2;
    letters[3].points[8].y = 2;
    letters[3].points[9].x = 2;
    letters[3].points[9].y = 3;
    letters[3].pointsSize = 10;
    letters[3].width = 3;

    letters[4].points[0].x = 0;
    letters[4].points[0].y = 0;
    letters[4].points[1].x = 0;
    letters[4].points[1].y = 1;
    letters[4].points[2].x = 0;
    letters[4].points[2].y = 2;
    letters[4].points[3].x = 0;
    letters[4].points[3].y = 3;
    letters[4].points[4].x = 0;
    letters[4].points[4].y = 4;
    letters[4].points[5].x = 1;
    letters[4].points[5].y = 0;
    letters[4].points[6].x = 1;
    letters[4].points[6].y = 2;
    letters[4].points[7].x = 1;
    letters[4].points[7].y = 4;
    letters[4].points[8].x = 2;
    letters[4].points[8].y = 0;
    letters[4].points[9].x = 2;
    letters[4].points[9].y = 2;
    letters[4].points[10].x = 2;
    letters[4].points[10].y = 4;
    letters[4].pointsSize = 11;
    letters[4].width = 3;

    letters[5].points[0].x = 0;
    letters[5].points[0].y = 0;
    letters[5].points[1].x = 0;
    letters[5].points[1].y = 1;
    letters[5].points[2].x = 0;
    letters[5].points[2].y = 2;
    letters[5].points[3].x = 0;
    letters[5].points[3].y = 3;
    letters[5].points[4].x = 0;
    letters[5].points[4].y = 4;
    letters[5].points[5].x = 1;
    letters[5].points[5].y = 2;
    letters[5].points[6].x = 1;
    letters[5].points[6].y = 4;
    letters[5].points[7].x = 2;
    letters[5].points[7].y = 2;
    letters[5].points[8].x = 2;
    letters[5].points[8].y = 4;
    letters[5].pointsSize = 9;
    letters[5].width = 3;

    letters[6].points[0].x = 0;
    letters[6].points[0].y = 1;
    letters[6].points[1].x = 0;
    letters[6].points[1].y = 2;
    letters[6].points[2].x = 0;
    letters[6].points[2].y = 3;
    letters[6].points[3].x = 1;
    letters[6].points[3].y = 0;
    letters[6].points[4].x = 1;
    letters[6].points[4].y = 4;
    letters[6].points[5].x = 2;
    letters[6].points[5].y = 0;
    letters[6].points[6].x = 2;
    letters[6].points[6].y = 2;
    letters[6].points[7].x = 2;
    letters[6].points[7].y = 4;
    letters[6].points[8].x = 3;
    letters[6].points[8].y = 1;
    letters[6].points[9].x = 3;
    letters[6].points[9].y = 2;
    letters[6].pointsSize = 10;
    letters[6].width = 4;

    digits[0].points[0].x = 0;
    digits[0].points[0].y = 1;
    digits[0].points[1].x = 0;
    digits[0].points[1].y = 2;
    digits[0].points[2].x = 0;
    digits[0].points[2].y = 3;
    digits[0].points[3].x = 1;
    digits[0].points[3].y = 0;
    digits[0].points[4].x = 1;
    digits[0].points[4].y = 4;
    digits[0].points[5].x = 2;
    digits[0].points[5].y = 1;
    digits[0].points[6].x = 2;
    digits[0].points[6].y = 2;
    digits[0].points[7].x = 2;
    digits[0].points[7].y = 3;
    digits[0].pointsSize = 8;
    digits[0].width = 3;

    digits[1].points[0].x = 0;
    digits[1].points[0].y = 3;
    digits[1].points[1].x = 1;
    digits[1].points[1].y = 0;
    digits[1].points[2].x = 1;
    digits[1].points[2].y = 1;
    digits[1].points[3].x = 1;
    digits[1].points[3].y = 2;
    digits[1].points[4].x = 1;
    digits[1].points[4].y = 3;
    digits[1].points[5].x = 1;
    digits[1].points[5].y = 4;
    digits[1].pointsSize = 6;
    digits[1].width = 2;

    digits[2].points[0].x = 0;
    digits[2].points[0].y = 0;
    digits[2].points[1].x = 0;
    digits[2].points[1].y = 3;
    digits[2].points[2].x = 1;
    digits[2].points[2].y = 0;
    digits[2].points[3].x = 1;
    digits[2].points[3].y = 1;
    digits[2].points[4].x = 1;
    digits[2].points[4].y = 4;
    digits[2].points[5].x = 2;
    digits[2].points[5].y = 0;
    digits[2].points[6].x = 2;
    digits[2].points[6].y = 2;
    digits[2].points[7].x = 2;
    digits[2].points[7].y = 4;
    digits[2].points[8].x = 3;
    digits[2].points[8].y = 0;
    digits[2].points[9].x = 3;
    digits[2].points[9].y = 3;
    digits[2].pointsSize = 10;
    digits[2].width = 4;

    digits[3].points[0].x = 0;
    digits[3].points[0].y = 1;
    digits[3].points[1].x = 0;
    digits[3].points[1].y = 3;
    digits[3].points[2].x = 1;
    digits[3].points[2].y = 0;
    digits[3].points[3].x = 1;
    digits[3].points[3].y = 4;
    digits[3].points[4].x = 2;
    digits[3].points[4].y = 0;
    digits[3].points[5].x = 2;
    digits[3].points[5].y = 2;
    digits[3].points[6].x = 2;
    digits[3].points[6].y = 4;
    digits[3].points[7].x = 3;
    digits[3].points[7].y = 1;
    digits[3].points[8].x = 3;
    digits[3].points[8].y = 3;
    digits[3].pointsSize = 9;
    digits[3].width = 4;

    digits[4].points[0].x = 0;
    digits[4].points[0].y = 1;
    digits[4].points[1].x = 0;
    digits[4].points[1].y = 2;
    digits[4].points[2].x = 1;
    digits[4].points[2].y = 1;
    digits[4].points[3].x = 1;
    digits[4].points[3].y = 3;
    digits[4].points[4].x = 2;
    digits[4].points[4].y = 0;
    digits[4].points[5].x = 2;
    digits[4].points[5].y = 1;
    digits[4].points[6].x = 2;
    digits[4].points[6].y = 2;
    digits[4].points[7].x = 2;
    digits[4].points[7].y = 3;
    digits[4].points[8].x = 2;
    digits[4].points[8].y = 4;
    digits[4].pointsSize = 9;
    digits[4].width = 3;

    digits[5].points[0].x = 0;
    digits[5].points[0].y = 0;
    digits[5].points[1].x = 0;
    digits[5].points[1].y = 2;
    digits[5].points[2].x = 0;
    digits[5].points[2].y = 3;
    digits[5].points[3].x = 0;
    digits[5].points[3].y = 4;
    digits[5].points[4].x = 1;
    digits[5].points[4].y = 0;
    digits[5].points[5].x = 1;
    digits[5].points[5].y = 2;
    digits[5].points[6].x = 1;
    digits[5].points[6].y = 4;
    digits[5].points[7].x = 2;
    digits[5].points[7].y = 1;
    digits[5].points[8].x = 2;
    digits[5].points[8].y = 4;
    digits[5].pointsSize = 9;
    digits[5].width = 3;

    digits[6].points[0].x = 0;
    digits[6].points[0].y = 1;
    digits[6].points[1].x = 0;
    digits[6].points[1].y = 2;
    digits[6].points[2].x = 0;
    digits[6].points[2].y = 3;
    digits[6].points[3].x = 1;
    digits[6].points[3].y = 0;
    digits[6].points[4].x = 1;
    digits[6].points[4].y = 2;
    digits[6].points[5].x = 1;
    digits[6].points[5].y = 4;
    digits[6].points[6].x = 2;
    digits[6].points[6].y = 1;
    digits[6].points[7].x = 2;
    digits[6].points[7].y = 4;
    digits[6].pointsSize = 8;
    digits[6].width = 3;

    digits[7].points[0].x = 0;
    digits[7].points[0].y = 0;
    digits[7].points[1].x = 0;
    digits[7].points[1].y = 1;
    digits[7].points[2].x = 0;
    digits[7].points[2].y = 4;
    digits[7].points[3].x = 1;
    digits[7].points[3].y = 2;
    digits[7].points[4].x = 1;
    digits[7].points[4].y = 4;
    digits[7].points[5].x = 2;
    digits[7].points[5].y = 3;
    digits[7].points[6].x = 2;
    digits[7].points[6].y = 4;
    digits[7].pointsSize = 7;
    digits[7].width = 3;

    digits[8].points[0].x = 0;
    digits[8].points[0].y = 1;
    digits[8].points[1].x = 0;
    digits[8].points[1].y = 3;
    digits[8].points[2].x = 1;
    digits[8].points[2].y = 0;
    digits[8].points[3].x = 1;
    digits[8].points[3].y = 2;
    digits[8].points[4].x = 1;
    digits[8].points[4].y = 4;
    digits[8].points[5].x = 2;
    digits[8].points[5].y = 0;
    digits[8].points[6].x = 2;
    digits[8].points[6].y = 2;
    digits[8].points[7].x = 2;
    digits[8].points[7].y = 4;
    digits[8].points[8].x = 3;
    digits[8].points[8].y = 1;
    digits[8].points[9].x = 3;
    digits[8].points[9].y = 3;
    digits[8].pointsSize = 10;
    digits[8].width = 4;

    digits[9].points[0].x = 0;
    digits[9].points[0].y = 0;
    digits[9].points[1].x = 0;
    digits[9].points[1].y = 3;
    digits[9].points[2].x = 1;
    digits[9].points[2].y = 0;
    digits[9].points[3].x = 1;
    digits[9].points[3].y = 2;
    digits[9].points[4].x = 1;
    digits[9].points[4].y = 4;
    digits[9].points[5].x = 2;
    digits[9].points[5].y = 1;
    digits[9].points[6].x = 2;
    digits[9].points[6].y = 2;
    digits[9].points[7].x = 2;
    digits[9].points[7].y = 3;
    digits[9].pointsSize = 8;
    digits[9].width = 3;
};

void convertTextToPoints(char * text, character_t * letters, character_t * digits, point_t * buffer, uint8_t bufferSize, uint8_t xOffset, uint8_t yOffset) {
    uint8_t offset = 0;
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
    }
}

void convertTextToPointsHorizontal(char * text, character_t * letters, character_t * digits, point_t * buffer, uint8_t bufferSize, uint8_t xOffset, uint8_t yOffset) {
    uint8_t offset = 0;
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
    }
}
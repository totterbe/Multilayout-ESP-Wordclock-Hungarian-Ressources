#pragma once

#define GRAFIK_11X10_ROWS 10
#define GRAFIK_11X10_COLS 11

const uint16_t grafik_11x10[][11] PROGMEM = {
    {0b00011111000,  // 0  WLAN100  0: . . . 0 0 0 0 0 . . . : 10
     0b01111111110,  // 1          21: . 0 0 0 0 0 0 0 0 0 . : 11
     0b11100000111,  // 2          22: 0 0 0 . . . . . 0 0 0 : 32
     0b10011111001,  // 3          43: 0 . . 0 0 0 0 0 . . 0 : 33
     0b00111111100,  // 4          44: . . 0 0 0 0 0 0 0 . . : 54
     0b00100000100,  // 5          65: . . 0 . . . . . 0 . . : 55
     0b00000100000,  // 6          66: . . . . . 0 . . . . . : 76
     0b00001110000,  // 7          87: . . . . 0 0 0 . . . . : 77
     0b00000100000,  // 8          88: . . . . . 0 . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  WLAN60   0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000000000,  // 2          22: . . . . . . . . . . . : 32
     0b00011111000,  // 3          43: . . . 0 0 0 0 0 . . . : 33
     0b00111111100,  // 4          44: . . 0 0 0 0 0 0 0 . . : 54
     0b00100000100,  // 5          65: . . 0 . . . . . 0 . . : 55
     0b00000100000,  // 6          66: . . . . . 0 . . . . . : 76
     0b00001110000,  // 7          87: . . . . 0 0 0 . . . . : 77
     0b00000100000,  // 8          88: . . . . . 0 . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  WLAN30   0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000000000,  // 2          22: . . . . . . . . . . . : 32
     0b00000000000,  // 3          43: . . . . . . . . . . . : 33
     0b00000000000,  // 4          44: . . . . . . . . . . . : 54
     0b00000000000,  // 5          65: . . . . . . . . . . . : 55
     0b00000100000,  // 6          66: . . . . . 0 . . . . . : 76
     0b00001110000,  // 7          87: . . . . 0 0 0 . . . . : 77
     0b00000100000,  // 8          88: . . . . . 0 . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  FIRE1    0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000000000,  // 2          22: . . . . . . . . . . . : 32
     0b00000000000,  // 3          43: . . . . . . . . . . . : 33
     0b00000000000,  // 4          44: . . . . . . . . . . . : 54
     0b00000000000,  // 5          65: . . . . . . . . . . . : 55
     0b00000000000,  // 6          66: . . . . . . . . . . . : 76
     0b00000000000,  // 7          87: . . . . . . . . . . . : 77
     0b00000000000,  // 8          88: . . . . . . . . . . . : 98
     0b00100000000}, // 9         109: . . 0 . . . . . . . . : 99

    {0b00000000000,  // 0  FIRE2    0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000000000,  // 2          22: . . . . . . . . . . . : 32
     0b00000000000,  // 3          43: . . . . . . . . . . . : 33
     0b00000000000,  // 4          44: . . . . . . . . . . . : 54
     0b00000000000,  // 5          65: . . . . . . . . . . . : 55
     0b00000000000,  // 6          66: . . . . . . . . . . . : 76
     0b00010000000,  // 7          87: . . . 0 . . . . . . . : 77
     0b00100000000,  // 8          88: . . 0 . . . . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  FIRE3    0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000000000,  // 2          22: . . . . . . . . . . . : 32
     0b00000000000,  // 3          43: . . . . . . . . . . . : 33
     0b00000100000,  // 4          44: . . . . . 0 . . . . . : 54
     0b00001000000,  // 5          65: . . . . 0 . . . . . . : 55
     0b00001000000,  // 6          66: . . . . 0 . . . . . . : 76
     0b00000000000,  // 7          87: . . . . . . . . . . . : 77
     0b00000000000,  // 8          88: . . . . . . . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  FIRE4    0: . . . . . . . . . . . : 10
     0b00000000000,  // 1          21: . . . . . . . . . . . : 11
     0b00000010000,  // 2          22: . . . . . . 0 . . . . : 32
     0b00000101000,  // 3          43: . . . . . 0 . 0 . . . : 33
     0b00000010000,  // 4          44: . . . . . . 0 . . . . : 54
     0b00000000000,  // 5          65: . . . . . . . . . . . : 55
     0b00000000000,  // 6          66: . . . . . . . . . . . : 76
     0b00000000000,  // 7          87: . . . . . . . . . . . : 77
     0b00000000000,  // 8          88: . . . . . . . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000000000,  // 0  FIRE5    0: . . . . . . . . . . . : 10
     0b00000010000,  // 1          21: . . . . . . 0 . . . . : 11
     0b00000101000,  // 2          22: . . . . . 0 . 0 . . . : 32
     0b00001000100,  // 3          43: . . . . 0 . . . 0 . . : 33
     0b00000101000,  // 4          44: . . . . . 0 . 0 . . . : 54
     0b00000010000,  // 5          65: . . . . . . 0 . . . . : 55
     0b00000000000,  // 6          66: . . . . . . . . . . . : 76
     0b00000000000,  // 7          87: . . . . . . . . . . . : 77
     0b00000000000,  // 8          88: . . . . . . . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000111000,  // 0  FIRE6    0: . . . . . 0 0 0 . . . : 10
     0b00001000100,  // 1          21: . . . . 0 . . . 0 . . : 11
     0b00010000010,  // 2          22: . . . 0 . . . . . 0 . : 32
     0b00010000010,  // 3          43: . . . 0 . . . . . 0 . : 33
     0b00010000010,  // 4          44: . . . 0 . . . . . 0 . : 54
     0b00001000100,  // 5          65: . . . . 0 . . . 0 . . : 55
     0b00000111000,  // 6          66: . . . . . 0 0 0 . . . : 76
     0b00000000000,  // 7          87: . . . . . . . . . . . : 77
     0b00000000000,  // 8          88: . . . . . . . . . . . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00110001100,  // 0  HEART    0: . . 0 0 . . . 0 0 . . : 10
     0b01111011110,  // 1          21: . 0 0 0 0 . 0 0 0 0 . : 11
     0b11111111111,  // 2          22: 0 0 0 0 0 0 0 0 0 0 0 : 32
     0b11111111111,  // 3          43: 0 0 0 0 0 0 0 0 0 0 0 : 33
     0b11111111111,  // 4          44: 0 0 0 0 0 0 0 0 0 0 0 : 54
     0b01111111110,  // 5          65: . 0 0 0 0 0 0 0 0 0 . : 55
     0b00111111100,  // 6          66: . . 0 0 0 0 0 0 0 . . : 76
     0b00011111000,  // 7          87: . . . 0 0 0 0 0 . . . : 77
     0b00001110000,  // 8          88: . . . . 0 0 0 . . . . : 98
     0b00000100000}, // 9         109: . . . . . 0 . . . . . : 99

    {0b00011111000,  // 0  SMILEY   0: . . . 0 0 0 0 0 . . . : 10
     0b00111111100,  // 1          21: . . 0 0 0 0 0 0 0 . . : 11
     0b01101110110,  // 2          22: . 0 0 . 0 0 0 . 0 0 . : 32
     0b11111111111,  // 3          43: 0 0 0 0 0 0 0 0 0 0 0 : 33
     0b11111111111,  // 4          44: 0 0 0 0 0 0 0 0 0 0 0 : 54
     0b10111111101,  // 5          65: 0 . 0 0 0 0 0 0 0 . 0 : 55
     0b11001110011,  // 6          66: 0 0 . . 0 0 0 . . 0 0 : 76
     0b01110001110,  // 7          87: . 0 0 0 . . . 0 0 0 . : 77
     0b00111111100,  // 8          88: . . 0 0 0 0 0 0 0 . . : 98
     0b00011111000}, // 9         109: . . . 0 0 0 0 0 . . . : 99

    {0b00000000000,  // 0  NOTE     0: . . . . . . . . . . . : 10
     0b00000011111,  // 1          21: . . . . . . 0 0 0 0 0 : 11
     0b00011111111,  // 2          22: . . . . 0 0 0 0 0 0 0 : 32
     0b00110000011,  // 3          43: . . 0 0 . . . . . 0 0 : 33
     0b00110000011,  // 4          44: . . 0 0 . . . . . 0 0 : 54
     0b00110000011,  // 5          65: . . 0 0 . . . . . 0 0 : 55
     0b01110001110,  // 6          66: . 0 0 0 . . . 0 0 0 . : 76
     0b11111011111,  // 7          87: 0 0 0 0 0 . 0 0 0 0 0 : 77
     0b01110001110,  // 8          88: . 0 0 0 . . . 0 0 0 . : 98
     0b00000000000}, // 9         109: . . . . . . . . . . . : 99

    {0b00000100000, // 0 SNOW       0: . . . . . 0 . . . . . : 10
     0b00000100000,  // 1          21: . . . . . 0 . . . . . : 11
     0b00110101100,  // 2          22: . . 0 0 . 0 . 0 0 . . : 32
     0b00110101100,  // 3          43: . . 0 0 . 0 . 0 0 . . : 33
     0b00001110000,  // 4          44: . . . . 0 0 0 . . . . : 54
     0b01111111110,  // 5          65: . 0 0 0 0 0 0 0 0 0 . : 55
     0b00001110000,  // 6          66: . . . . 0 0 0 . . . . : 76
     0b00110101100,  // 7          87: . . 0 0 . 0 . 0 0 . . : 77
     0b00110101100,  // 8          88: . . 0 0 . 0 . 0 0 . . : 98
     0b00000100000}, // 9         109: . . . . . 0 . . . . . : 99
};

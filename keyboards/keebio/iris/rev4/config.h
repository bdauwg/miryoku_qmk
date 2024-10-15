// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//-------------
//copied from iris rev4 config
//-------------
// wiring of each half
// #define MATRIX_ROW_PINS { B1, F0, F5, F6, F7 }
// #define MATRIX_COL_PINS { F1, F4, D3, D2, B7, D4 }
// #define MATRIX_ROW_PINS_RIGHT { B1, B2, D2, F1, F4 }
// #define MATRIX_COL_PINS_RIGHT { D4, D7, D3, B7, F0, B3 }
// #define SPLIT_HAND_PIN D5
//
// /* COL2ROW or ROW2COL */
// #define DIODE_DIRECTION COL2ROW
//
// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE
//
// /* ws2812 RGB LED */
// #define RGB_DI_PIN D3
// #define RGBLED_NUM 12    // Number of LEDs
// #define RGBLED_SPLIT { 6, 6 }
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_TWINKLE


//-------------
//stuff from iris_ce rev1 config
//-------------
#define USB_VBUS_PIN GP0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11

// #define RGBLED_NUM 12    // Number of LEDs
#define RGB_MATRIX_LED_COUNT 68 // seems like it is 100% required... this number was found by manually guessing.. i think this is correct total num of keys for iris_ce

// from stackoverflow https://www.reddit.com/r/HandwiredKeyboards/comments/1aq1nzr/cant_get_ws2812b_rgb_to_work_with_qmk/
// #define WS2812_DI_PIN D3
// #define RGBLED_NUM 14
// #define RGBLIGHT_LIMIT_VAL 200
// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
// #define RGBLIGHT_DEFAULT_ON true
// #define RGBLIGHT_DEFAULT_HUE 0
// #define RGBLIGHT_DEFAULT_SAT UINT8_MAX
// #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
// #define RGBLIGHT_LAYERS
// #define RGBLIGHT_SLEEP

// additional things???
#define NOP_FUDGE 0.4
#define RGB_DI_PIN GP25
//#define SOFT_SERIAL_PIN GP12 // should be the same as serial_usart_tx_pin iguess...

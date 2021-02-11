// copied from users/manna-harbour_miryoku/config.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

// Debugging
#define CONSOLE_ENABLE
#define USER_PRINT
#undef NO_PRINT

// dkjer/apple_fn
#define APPLE_FN_ENABLE

// bilateral combinations
// https://github.com/manna-harbour/qmk_firmware/blob/bilateral-combinations/docs/tap_hold.md#bilateral-combinations
//#define BILATERAL_COMBINATIONS
//#define BILATERAL_COMBINATIONS TAPPING_TERM * 2

// default but used in macros
#define TAPPING_TERM 200

// see get_tapping_term() in keymap.c
#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64


// copied from layouts/community/split_3x6_3/manna-harbour_miryoku/config.h
#define LAYOUT_miryoku( \
       K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
       K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
       K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
       N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_split_3x6_3( \
KC_TAB,      K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   KC_BSLS, \
KC_ESC,      K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   KC_QUOT, \
KC_APPLE_FN, K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   MO(SET), \
                           K32,   K33,   K34,   K35,   K36,   K37 \
)

// -=-=-=-=- crkbd customisation -=-=-=-=-

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define SSD1306OLED


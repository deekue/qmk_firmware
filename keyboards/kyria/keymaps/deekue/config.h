// copied from users/manna-harbour_miryoku/config.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

// Shrink
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT

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

#define XXX KC_NO
#define KC_APPL KC_APPLE_FN
#define LAYOUT_miryoku( \
       K00, K01, K02, K03, K04,   K05, K06, K07, K08, K09, \
       K10, K11, K12, K13, K14,   K15, K16, K17, K18, K19, \
       K20, K21, K22, K23, K24,   K25, K26, K27, K28, K29, \
       N30, N31, K32, K33, K34,   K35, K36, K37, N38, N39 \
) \
LAYOUT( \
KC_TAB,  K00, K01, K02, K03, K04,                       K05, K06, K07, K08, K09, KC_BSLS, \
KC_APPL, K10, K11, K12, K13, K14,                       K15, K16, K17, K18, K19, KC_QUOT, \
XXX,     K20, K21, K22, K23, K24, XXX, XXX,   XXX, XXX, K25, K26, K27, K28, K29, MO(SET), \
                   XXX, XXX, K32, K33, K34,   K35, K36, K37, XXX, XXX \
)

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

// OLED displays
#ifdef OLED_DRIVER_ENABLE
  #define OLED_TIMEOUT 30000 // ms

  // Kyria OLED
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_LIMIT_VAL 120 // keep low to reduce power draw
  #define RGBLIGHT_LAYERS
  #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF // light layers when animations off.
  #define RGBLIGHT_SLEEP  // lights off when host sleeps
  #ifndef RGBLIGHT_SPLIT
    #define RGBLIGHT_SPLIT // defined elsewhere?
  #endif // !RGBLIGHT_SPLIT
//  #define RGBLIGHT_EFFECT_RGB_TEST
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

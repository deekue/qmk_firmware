// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// disable for customisation
//#pragma once

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

enum layers { BASE_QWERTY, BASE_COLEMAKDH, BASE_RSTHD, BASE_PC, BASE_MAC, MBO, MEDR, NAVR, NAVR_MAC, MOUR, NSSL, NSL, FUNL, SET };
char base_layer_state_str[10];
char layer_state_str[24];
const char layer_label[14][10] = {
  "Base", // QWERTY
  "Base", // ColemakDH
  "Base", // RSTHD
  "Base", // PC thumb keys
  "Base", // Mac thumb keys
  "MBO",
  "Media",
  "Nav", // PC
  "Nav", // Mac
  "Mouse",
  "Symbols",
  "Numbers",
  "Function",
  "Settings"
};
char platform_str[10];
const char platform_label[2][4] = {
  "PC",
  "Mac"
};

enum custom_keys { 
  U_SET_PC = SAFE_RANGE,
  U_SET_MAC,
  U_SET_QWERTY,
  U_SET_COLEMAKDH,
  U_SET_RSTHD
};

// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// disable for customisation
//#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE_QWERTY] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_COLN),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC), LT(MOUR, KC_DEL),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),   LT(FUNL, KC_TAB),  U_NP,              U_NP
  ),
  [BASE_COLEMAKDH] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC), LT(MOUR, KC_DEL),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),   LT(FUNL, KC_TAB),  U_NP,              U_NP
  ),
  [BASE_RSTHD] = LAYOUT_miryoku(
    KC_J,         KC_C,         KC_Y,         KC_F,         KC_K, KC_Z, KC_L,         KC_COMM,      KC_U,            KC_Q,
    LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), LSFT_T(KC_H), KC_D, KC_M, LSFT_T(KC_N), LCTL_T(KC_A), LALT_T(KC_I),    LGUI_T(KC_O),
    KC_BSLS,      ALGR_T(KC_V), KC_G,         KC_P,         KC_B, KC_X, KC_W,         KC_DOT,       ALGR_T(KC_SCLN), KC_MINS,
    U_NP, U_NP, LT(MEDR, KC_ESC), LT(NAVR, KC_E), LT(MOUR, KC_BSPC),    LT(NSSL, KC_ENT), LT(NSL, KC_SPC), LT(FUNL, KC_TAB), U_NP, U_NP
  ),
  [BASE_MAC] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    LT(MEDR, KC_ESC), LT(NAVR_MAC, KC_BSPC), LT(MOUR, KC_DEL), LT(NSSL, KC_ENT), LT(NSL, KC_SPC), LT(FUNL, KC_TAB), U_NP,    U_NP
  ),
//#if defined MIRYOKU_NAV_VI
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_SPC,  KC_TAB,  U_NP,    U_NP
  ),
  [NAVR_MAC] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    SCMD(KC_C), LCMD(KC_V), LCMD(KC_C), LCMD(KC_X), LCMD(KC_Z),
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT,    KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME,    KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,     KC_SPC,  KC_TAB,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS,     KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,     U_NA, U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,     U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,     U_NA, U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_BSPC, KC_DEL,      U_NA, U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,     U_NA, U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,      U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,     U_NA, U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS,     U_NA, U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,     U_NA, U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,     U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,     U_NA, U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS,     U_NA, U_NA,    U_NA,    U_NP,    U_NP
  ),
  [SET] = LAYOUT_miryoku(
    U_SET_QWERTY, U_NU, U_NU,            RESET,   U_NU, U_NU, U_NU,      U_NU, U_NU, U_SET_PC,
    U_NU,         U_NU, DEBUG,           U_NU,    U_NU, U_NU, U_NU,      U_NU, U_NU, U_NU,
    U_NU,         U_NU, U_SET_COLEMAKDH, U_NU,    U_NU, U_NU, U_SET_MAC, U_NU, U_NU, U_NU,
    U_NP,         U_NP, U_NU,            U_NU,    U_NU, U_NU, U_NU,      U_NU, U_NP, U_NP
  )
};

// copied from keymaps/default/keymap.c

extern uint8_t is_master;


void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
//const char *read_layer_state(void);
const char *read_logo(void);
//void set_keylog(uint16_t keycode, keyrecord_t *record);
//const char *read_keylog(void);
//const char *read_keylogs(void);

//const char *read_mode_icon(bool swap);
//const char *read_host_led_state(void);
//void set_timelog(void);
//const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

const char* read_layer_state(void) {
  snprintf(layer_state_str, sizeof(layer_state_str), "Layer: %s", layer_label[get_highest_layer(layer_state)]);
  return layer_state_str;
}

const char* read_platform(void) {
  snprintf(platform_str, sizeof(platform_str), "OS: %s", platform_label[keymap_config.swap_lctl_lgui]);
  return platform_str;
}

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_platform());
    matrix_write_ln(matrix, read_layer_state());
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lctl_lgui));
  } else {
    //matrix_write_ln(matrix, read_timelog());
    //matrix_write_ln(matrix, read_keylog());
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);

  /*
  if (record->event.pressed) {
#ifdef SSD1306OLED
    set_keylog(keycode, record);
#endif
    set_timelog();
  }
  */

  switch (keycode) {
    case U_SET_PC:
      if (record->event.pressed) {
        // switch CTL<->GUI
        keymap_config.swap_lctl_lgui = false;
        // set default layer to PC
        //layer_move(BASE_PC);
      }
      return false;
    case U_SET_MAC:  
      // TODO persist to EEPROM
      if (record->event.pressed) {
        // switch GUI<->CTL
        keymap_config.swap_lctl_lgui = true;
        // set thumb layer keys to MAC
        layer_on(BASE_MAC);
      }
      return false;
    case U_SET_QWERTY:
      if (record->event.pressed) {
        // set default layer to QWERTY
        set_single_persistent_default_layer(BASE_QWERTY);
      }
      return false;
    case U_SET_COLEMAKDH:
      // TODO display selected default layer on OLED
      if (record->event.pressed) {
        // set default layer to ColemakDH
        set_single_persistent_default_layer(BASE_COLEMAKDH);
      }
      return false;
    case U_SET_RSTHD:
      // TODO display selected default layer on OLED
      if (record->event.pressed) {
        // set default layer to ColemakDH
        set_single_persistent_default_layer(BASE_RSTHD);
      }
      return false;
    case DEBUG:
      // borrowed from https://github.com/qmk/qmk_firmware/blob/master/keyboards/dmqdesign/spin/keymaps/spidey3_pad/keymap.c#L154
      if (record->event.pressed) {
#ifndef NO_DEBUG
				if (!debug_enable) {
						debug_enable = 1;
				} else if (!debug_keyboard) {
						debug_keyboard = 1;
				} else if (!debug_matrix) {
						debug_matrix = 1;
				} else {
						debug_enable   = 0;
						debug_keyboard = 0;
						debug_matrix   = 0;
				}
				eeconfig_update_debug(debug_config.raw);
#endif
#ifdef CONSOLE_ENABLE
				uprintf("DEBUG: enable=%u, keyboard=%u, matrix=%u\n", debug_enable, debug_keyboard, debug_matrix);
#endif
			}
      return false;

    default:
      return true; // Process all other keycodes normally
  }
  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // longer hold for all home row mods, except shift
        case LGUI_T(KC_A):
        case LALT_T(KC_S):
        case LCTL_T(KC_D):
        case ALGR_T(KC_X):
        case LCTL_T(KC_K):
        case LALT_T(KC_L):
        case LGUI_T(KC_COLN):
        case ALGR_T(KC_DOT):
        case LT(NAVR, KC_E):  // RSTHD left thumb
            return TAPPING_TERM + 100;
        // layer thumb keys
        /*
        case LT(MEDR, KC_ESC):
        case LT(NAVR, KC_BSPC):
        case LT(NAVR_MAC, KC_BSPC):
        case LT(MOUR, KC_DEL):
        case LT(NSSL, KC_ENT):
        case LT(NSL,  KC_SPC):
        case LT(FUNL, KC_TAB):
            return TAPPING_TERM + ?;
        */
        default:
            return TAPPING_TERM;
    }
}


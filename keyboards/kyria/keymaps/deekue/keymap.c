// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h

#include QMK_KEYBOARD_H
#include "split_util.h"

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

enum layers {
  BASE_QWERTY,
#ifdef MIRYOKU_ALPHAS_COLEMAKDH
  BASE_COLEMAKDH,
#endif
#ifdef MIRYOKU_ALPHAS_RSTHD
  BASE_RSTHD,
#endif
  BASE_MAC,
#ifdef MIRYOKU_TRACKPOINT
  MBO,
#endif
  MEDR,
  NAVR,
  NAVR_MAC,
  MOUR,
  NSSL,
  NSL,
  FUNL,
  SET
};

enum custom_keys { 
  U_SET_PC = SAFE_RANGE,
  U_SET_MAC,
  U_SET_QWERTY,
  U_SET_COLEMAKDH,
  U_SET_RSTHD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE_QWERTY] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_COLN),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC), LT(MOUR, KC_DEL),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),   LT(FUNL, KC_TAB),  U_NP,              U_NP
  ),
#ifdef MIRYOKU_ALPHAS_COLEMAKDH
  [BASE_COLEMAKDH] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC), LT(MOUR, KC_DEL),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),   LT(FUNL, KC_TAB),  U_NP,              U_NP
  ),
#endif
#ifdef MIRYOKU_ALPHAS_RSTHD
  [BASE_RSTHD] = LAYOUT_miryoku(
    KC_J,         KC_C,         KC_Y,         KC_F,         KC_K, KC_Z, KC_L,         KC_COMM,      KC_U,            KC_Q,
    LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), LSFT_T(KC_H), KC_D, KC_M, LSFT_T(KC_N), LCTL_T(KC_A), LALT_T(KC_I),    LGUI_T(KC_O),
    KC_BSLS,      ALGR_T(KC_V), KC_G,         KC_P,         KC_B, KC_X, KC_W,         KC_DOT,       ALGR_T(KC_SCLN), KC_MINS,
    U_NP, U_NP, LT(MEDR, KC_ESC), LT(NAVR, KC_E), LT(MOUR, KC_BSPC),    LT(NSSL, KC_ENT), LT(NSL, KC_SPC), LT(FUNL, KC_TAB), U_NP, U_NP
  ),
#endif
  [BASE_MAC] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,          KC_TRNS,          KC_TRNS,         KC_TRNS,          KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    LT(MEDR, KC_ESC), LT(NAVR_MAC, KC_BSPC), LT(MOUR, KC_DEL), LT(NSSL, KC_ENT), LT(NSL, KC_SPC), LT(FUNL, KC_TAB), U_NP,    U_NP
  ),
//#if defined MIRYOKU_NAV_VI
  [NAVR] = LAYOUT_miryoku(
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, S(KC_CAPS),
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_SPC,  KC_TAB,  U_NP,    U_NP
  ),
  [NAVR_MAC] = LAYOUT_miryoku(
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    SCMD(KC_C), LCMD(KC_V), LCMD(KC_C), LCMD(KC_X), LCMD(KC_Z),
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT,    KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME,    KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,     KC_SPC,  KC_TAB,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
#ifdef MIRYOKU_TRACKPOINT
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS,     KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
#endif
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,     U_NA, U_NA,    U_NA,    U_NA,    U_NA,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,     U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,     U_NA, U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_BSPC, KC_DEL,      U_NA, U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,     U_NA, U_NA,    U_NA,    U_NA,    U_NA,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,      U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,     U_NA, U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS,     U_NA, U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,     U_NA, U_NA,    U_NA,    U_NA,    U_NA,
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

extern uint8_t is_master;

// MY_OLED_DRIVER = old || new
#if defined OLED_DRIVER_ENABLE 

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_layer_state(void) {
  oled_write_P(PSTR("Layer: "), false);
  switch (get_highest_layer(layer_state)) {
    case BASE_QWERTY:
#ifdef MIRYOKU_ALPHAS_COLEMAKDH
    case BASE_COLEMAKDH:
#endif
#ifdef MIRYOKU_ALPHAS_RSTHD
    case BASE_RSTHD:
#endif
      oled_write_P(PSTR("Base\n"), false);
      break;
    case BASE_MAC:
      oled_write_P(PSTR("Base(Mac)\n"), false);
      break;
#ifdef MIRYOKU_TRACKPOINT
    case MBO:
      oled_write_P(PSTR("Trackpoint\n"), false);
      break;
#endif
    case MEDR:
      oled_write_P(PSTR("Media\n"), false);
      break;
    case NAVR:
      oled_write_P(PSTR("Nav\n"), false);
      break;
    case NAVR_MAC:
      oled_write_P(PSTR("Nav(Mac)\n"), false);
      break;
    case MOUR:
      oled_write_P(PSTR("Mouse\n"), false);
      break;
    case NSSL:
      oled_write_P(PSTR("Symbols\n"), false);
      break;
    case NSL:
      oled_write_P(PSTR("Numbers\n"), false);
      break;
    case FUNL:
      oled_write_P(PSTR("Function\n"), false);
      break;
    case SET:
      oled_write_P(PSTR("Settings\n"), false);
      break;
    default:
      oled_write_P(PSTR("Unknown\n"), false);
  }
}

static uint32_t my_oled_timer;

void oled_task_user(void) {
  #if defined CONSOLE_ENABLE && defined MY_DEBUG
    uprintf("my_oled_timer elapsed: %d\n", (int)timer_elapsed32(my_oled_timer));
  #endif

  #ifdef MY_OLED_TIMEOUT
  if (timer_elapsed32(my_oled_timer) > OLED_TIMEOUT) {
    oled_off();
    return;
  }
  #endif

  if (is_keyboard_master()) {
    render_qmk_logo();
    render_layer_state();
    oled_write_P(PSTR("OS: "), false);
    oled_write_P(keymap_config.swap_lctl_lgui ? PSTR("Mac\n") : PSTR("Linux\n"), false);
    if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
      oled_write_P(PSTR("CAPS!"), false);
    } else {
      oled_write_P(PSTR("        "), false);
    }
  } else {
    render_kyria_logo();
  }
}
#endif // OLED_DRIVER_ENABLE 


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);

#ifdef OLED_DRIVER_ENABLE
  if (record->event.pressed) {
    my_oled_timer = timer_read32();
  }
#endif // defined OLED_DRIVER_ENABLE

  switch (keycode) {
    case U_SET_PC:
      if (record->event.pressed) {
        // switch CTL<->GUI
        keymap_config.swap_lctl_lgui = false;
        // set default layer to PC
        // TODO make Mac/PC switch separate from Alphas layout
        layer_move(BASE_QWERTY);
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
#ifdef MIRYOKU_ALPHAS_COLEMAKDH
      // TODO display selected default layer on OLED
      if (record->event.pressed) {
        // set default layer to ColemakDH
        set_single_persistent_default_layer(BASE_COLEMAKDH);
      }
#endif
      return false;
    case U_SET_RSTHD:
#ifdef MIRYOKU_ALPHAS_RSTHD
      // TODO display selected default layer on OLED
      if (record->event.pressed) {
        // set default layer to ColemakDH
        set_single_persistent_default_layer(BASE_RSTHD);
      }
#endif
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
#ifdef MIRYOKU_ALPHAS_RSTHD
        case LT(NAVR, KC_E):  // RSTHD left thumb
#endif
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

//TODO https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgblight#lighting-layers
#ifdef RGBLIGHT_ENABLE
#endif

#ifdef MY_DEBUG
void keyboard_post_init_user(void) {
  debug_enable = true;
  //debug_mouse = true;
}
#endif

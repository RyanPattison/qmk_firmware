#include QMK_KEYBOARD_H

#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  KVM_SELECT_1,
  KVM_SELECT_2,
  VIM_SAVE,
};

enum layer_names {
	LAYER_DVP_EMULATED,
	LAYER_DVP_SHIFTED_EMULATED,
	LAYER_NUMPAD,
	LAYER_QTM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_DVP_EMULATED] = LAYOUT_ergodox_pretty(
    KC_AMPR,        KC_LBRACKET,    KC_LCBR,        KC_RCBR,        KC_LPRN,        KC_EQUAL,       KC_TRANSPARENT,                                 VIM_SAVE,     KC_ASTR,        KC_RPRN,        KC_PLUS,        KC_RBRACKET,    KC_EXLM,        KC_HASH,
    KC_DLR,         KC_SCOLON,      KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_LSHIFT,                                      KC_RSHIFT,      KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_BSLASH,
    LCTL_T(KC_ESCAPE),KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,
    OSL(1),         KC_QUOTE,       KC_Q,           KC_J,           KC_K,           KC_X,           KC_LGUI,                                        KC_RGUI,        KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           OSL(1),
    KC_TILD,        KC_PERC,        KC_DQUO,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_SLASH,       KC_AT,          MO(3),
                                                                                                    KVM_SELECT_1,   DYN_REC_START1, KC_TRANSPARENT, KVM_SELECT_2,
                                                                                                                    DYN_REC_STOP,   KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BSPACE,      DYN_MACRO_PLAY1,TT(2),          KC_TAB,         KC_ENTER
  ),
  [LAYER_DVP_SHIFTED_EMULATED] = LAYOUT_ergodox_pretty(
    KC_PERC,        KC_7,           KC_5,           KC_3,           KC_1,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_2,           KC_4,           KC_6,           KC_8,           KC_GRAVE,
    KC_TILD,        KC_COLN,        KC_LABK,        KC_RABK,        LSFT(KC_P),     LSFT(KC_Y),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_F),     LSFT(KC_G),     LSFT(KC_C),     LSFT(KC_R),     LSFT(KC_L),     KC_PIPE,
    KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_O),     LSFT(KC_E),     LSFT(KC_U),     LSFT(KC_I),                                                                     LSFT(KC_D),     LSFT(KC_H),     LSFT(KC_T),     LSFT(KC_N),     LSFT(KC_S),     KC_UNDS,
    KC_TRANSPARENT, KC_DQUO,        LSFT(KC_Q),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_B),     LSFT(KC_M),     LSFT(KC_W),     LSFT(KC_V),     LSFT(KC_Z),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_QUES,        KC_CIRC,        KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_NUMPAD] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_KP_0,        KC_KP_DOT,      KC_NO,          KC_NO,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_QTM] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KVM_SELECT_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCROLLLOCK) SS_DELAY(100) SS_TAP(X_SCROLLLOCK) SS_DELAY(100) SS_TAP(X_KP_1));

    }
    break;
case KVM_SELECT_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCROLLLOCK) SS_DELAY(100) SS_TAP(X_SCROLLLOCK) SS_DELAY(100) SS_TAP(X_KP_2));

    }
    break;
case VIM_SAVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_W)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
      }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

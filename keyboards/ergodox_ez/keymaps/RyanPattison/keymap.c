#include QMK_KEYBOARD_H

#include "version.h"
#include "steno.h"
#include "steno.c"

enum custom_keycodes {
  RGB_SLD = STENO_END,
  KVM_SELECT_1,
  KVM_SELECT_2,
  VIM_SAVE,
};

enum layer_names {
    L_DVP_EM,
    L_DVP_S_EM,
    L_NUMPAD,
    L_QTM,
    L_STENO,
};

#define ____ KC_TRANSPARENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_DVP_EM] = LAYOUT_ergodox_pretty(
    KC_AMPR,        KC_LBRACKET,    KC_LCBR,        KC_RCBR,        KC_LPRN,        KC_EQUAL,       TT(L_STENO),                                    VIM_SAVE,     KC_ASTR,        KC_RPRN,        KC_PLUS,        KC_RBRACKET,    KC_EXLM,        KC_HASH,
    KC_DLR,         KC_SCOLON,      KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_LSHIFT,                                      KC_RSHIFT,      KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_BSLASH,
    LCTL_T(KC_ESCAPE),KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,
    OSL(L_DVP_S_EM),KC_QUOTE,       KC_Q,           KC_J,           KC_K,           KC_X,           KC_LGUI,                                        KC_RGUI,        KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           OSL(L_DVP_S_EM),
    KC_TILD,        KC_PERC,        KC_DQUO,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_SLASH,       KC_AT,          MO(L_QTM),
                                                                                                    KVM_SELECT_1,   DYN_REC_START1,           ____, KVM_SELECT_2,
                                                                                                                    DYN_REC_STOP,             ____,
                                                                                    KC_SPACE,       KC_BSPACE,      DYN_MACRO_PLAY1,TT(L_NUMPAD),   KC_TAB,         KC_ENTER
  ),
  [L_DVP_S_EM] = LAYOUT_ergodox_pretty(
    KC_PERC,        KC_7,           KC_5,           KC_3,           KC_1,           KC_9,                     ____,                                           ____, KC_0,           KC_2,           KC_4,           KC_6,           KC_8,           KC_GRAVE,
    KC_TILD,        KC_COLN,        KC_LABK,        KC_RABK,        LSFT(KC_P),     LSFT(KC_Y),               ____,                                           ____, LSFT(KC_F),     LSFT(KC_G),     LSFT(KC_C),     LSFT(KC_R),     LSFT(KC_L),     KC_PIPE,
              ____, LSFT(KC_A),     LSFT(KC_O),     LSFT(KC_E),     LSFT(KC_U),     LSFT(KC_I),                                                                     LSFT(KC_D),     LSFT(KC_H),     LSFT(KC_T),     LSFT(KC_N),     LSFT(KC_S),     KC_UNDS,
              ____, KC_DQUO,        LSFT(KC_Q),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_X),               ____,                                           ____, LSFT(KC_B),     LSFT(KC_M),     LSFT(KC_W),     LSFT(KC_V),     LSFT(KC_Z),               ____,
              ____,           ____,           ____,           ____,           ____,                                                                                                           ____,           ____, KC_QUES,        KC_CIRC,                  ____,
                                                                                                              ____,           ____,           ____,           ____,
                                                                                                                              ____,           ____,
                                                                                              ____,           ____,           ____,           ____,           ____,      ____     
  ),
  [L_NUMPAD] = LAYOUT_ergodox_pretty(
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____, KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,                    ____,
              ____,           ____,           ____,           ____,           ____,           ____,                                                                 KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,                    ____,
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____, KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,
              ____,           ____,           ____,           ____,           ____,                                                                                                 KC_NO,          KC_KP_0,        KC_KP_DOT,      KC_NO,          KC_NO,
                                                                                                              ____,           ____,           ____,           ____,
                                                                                                                              ____,           ____,
                                                                                              ____,           ____,           ____,           ____,           ____,      ____     
  ),
  [L_QTM] = LAYOUT_ergodox_pretty(
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,          RESET,
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,           ____,                                                                           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,                                                                                                           ____,           ____,           ____,           ____,           ____,
                                                                                                              ____,           ____,           ____,           ____,
                                                                                                                              ____,           ____,
                                                                                              ____,           ____,           ____,           ____,           ____,      ____     
  ),
  [L_STENO] = LAYOUT_ergodox_pretty(
              ____,           ST_LS,          ST_LT,           ST_LP,           ST_LH,        ST_STR,           ____,                                           ____,          ST_STR,           ST_RF,           ST_RP,           ST_RL,          ST_RT,           ST_RD,
              ____,           ST_LS,          ST_LK,           ST_LW,           ST_LR,        ST_STR,           ____,                                           ____,          ST_STR,           ST_RR,           ST_RB,           ST_RG,           ST_RS,           ST_RZ,
              ____,           ____,           ____,           ____,           ____,           ____,                                                                           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
              ____,           ____,           ____,           ____,           ____,                                                                                                           ____,           ____,           ____,           ____,           ____,
                                                                                                              ____,           ____,           ____,           ____,
                                                                                                                              ____,           ____,
                                                                                              ST_LA,         ST_LO,           ____,           ____,           ST_RE,     ST_RU 
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
  return process_steno_chord(keycode, record);
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

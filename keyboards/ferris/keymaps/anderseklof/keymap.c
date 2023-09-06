#include QMK_KEYBOARD_H

//
// Combos
//
uint16_t COMBO_LEN = 2;

const uint16_t PROGMEM esc_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM layer_9_combo[] = {KC_R, KC_U, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(layer_9_combo, TG(8)),
};

//
// Keymaps
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // BASE
  [0] = LAYOUT(
  //                  COMBO       COMBO                                         COMBO       COMBO
  //                  ESC         COPY-PASTE                                    COPY-PASTE  ESC
    KC_Q, KC_W,       KC_E,       KC_R,       KC_T,                KC_Y,        KC_U,       KC_I,       KC_O,       KC_P,
  //      NUMBER      LANGUAGE    NAVIGATION                                    PROG SYMB   PROG        HELPER      FUNCTION
    KC_A, LT(6,KC_S), LT(2,KC_D), LT(1,KC_F), KC_G,                KC_H,        LT(4,KC_J), LT(3,KC_K), LT(5,KC_L), LT(7,KC_SCLN),
  //                                          ctrl+shift           ctrl+shift               ,/;         ./:         -/_
    KC_Z, KC_X,       KC_C,       KC_V,       C_S_T(KC_B),         C_S_T(KC_N), KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                 SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // NAVIGATION
  [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_WBAK, KC_NO,   KC_NO,   KC_WFWD, KC_NO,
                       SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // LANGUAGE
  [2] = LAYOUT(
  //                                                     ^              \              #                    å
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         S(KC_RBRC),    ALGR(KC_MINS), S(KC_3), KC_NO,      KC_LBRC,
  //                                                     ~              @              %        ?           ä
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         ALGR(KC_RBRC), ALGR(KC_2),    S(KC_5), S(KC_MINS), KC_QUOT,
  //                                                                                   ´                    ´
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_NO,         KC_NO,         KC_EQL,  KC_NO,      KC_EQL,
                       SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // PROGRAMMING
  [3] = LAYOUT(
  //       (           )
    KC_NO, S(KC_8),    S(KC_9),    KC_NO,      KC_NO,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //       {           }           [           ]
    KC_NO, ALGR(KC_7), ALGR(KC_0), ALGR(KC_8), ALGR(KC_9),         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //       <           >
    KC_NO, KC_NUBS,    S(KC_NUBS), KC_NO,      KC_NO,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                 SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // PROGRAMMING SYMBOLS
  [4] = LAYOUT(
  //*           +        |              /          &
    S(KC_NUHS), KC_MINS, ALGR(KC_NUBS), S(KC_7),   S(KC_6),        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //_           =        !              '          "
    S(KC_SLSH), S(KC_0), S(KC_1),       KC_NUHS,   S(KC_2),        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //                     $              `
    KC_NO,      KC_NO,   ALGR(KC_4),    S(KC_EQL), KC_NO,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                 SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // HELPER
  [5] = LAYOUT(
  //esc      t print  t up   t down
    KC_ESC,  DT_PRNT, DT_UP, DT_DOWN, KC_NO,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //caps     tab                      ctrl-alt-del
    KC_CAPS, KC_TAB,  KC_NO, KC_NO,   LCA(KC_DEL),         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //                                  alt      windows
                                      KC_LALT, KC_LWIN, CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // NUMBER
  [6] = LAYOUT(
  //                                                    /        7     8     9     -
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_PSLS, KC_7, KC_8, KC_9, KC_PMNS,
  //                                                    *        4     5     6     +
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_PAST, KC_4, KC_5, KC_6, KC_PPLS,
  //                                                    .        1     2     3     ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_DOT,  KC_1, KC_2, KC_3, KC_COMM,
  //                                                                0
                      SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_0)
  ),
  // FUNCTION AND PLAYBACK
  [7] = LAYOUT(
    KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_MPRV,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_MPLY,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_F9, KC_F10, KC_F11, KC_F12, KC_MNXT,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                  SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
  // COPY-PASTE AND NAVIGATION
  [8] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(9),                KC_HOME,        KC_PGDN, KC_PGUP, KC_END,   KC_NO,
    C(KC_A), KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_LEFT,        KC_DOWN, KC_UP,   KC_RGHT,  KC_NO,
    KC_NO,   C(KC_X), C(KC_C), C(KC_V), C_S_T(KC_NO),         C_S_T(KC_WBAK), KC_NO,   KC_NO,   KC_WFWD,  KC_NO,
                            SFT_T(KC_BSPC), CTL_T(KC_DEL), CTL_T(KC_ENT), SFT_T(KC_SPC)
  ),
};


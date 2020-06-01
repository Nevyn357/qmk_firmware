/* Copyright 2017 benlyall, MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* This is the default ANSI layout provided by the KBP V60 Type R
* as depicted in their manual and on the stock keycaps.
*/
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap 0: Default Layer (Qwerty)
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps/L2|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space              |Fn2 |Fn1 |App|Ctrl|
   * `-----------------------------------------------------------'
   */
[0] = LAYOUT_60_ansi(
    KC_GESC,        KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  KC_6,  KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
    KC_TAB,         KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,  KC_Y,  KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    LT(2, KC_CAPS), KC_A,    KC_S,    KC_D,   KC_F,   KC_G,  KC_H,  KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT,        KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,  KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, \
    KC_LCTL,        KC_LGUI, KC_LALT,         KC_SPC,                                MO(2),  MO(1),   KC_APP,  KC_RCTL),

  /* Keymap 1: FN Layer
   * ,-----------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
   * |-----------------------------------------------------------|
   * |TO(2)|Hme|Up |End|RGB|B+ |E+ |   |Prt|Scl|Pau|Up|   | Ins  |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|   |B- |E- |   |Hme|PgU|Lef|Rig|        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |VolD|VolU|Mut|End|PgD|Dwn|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[1] = LAYOUT_60_ansi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
    TO(2),   KC_HOME, KC_UP,   KC_END,  RGB_MOD, RGB_VAI, RGB_SPI, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, KC_INS, \
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, RGB_VAD, RGB_SPD, KC_TRNS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_END,  KC_PGDN, KC_DOWN,          KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

/* Keymap 2: Numpad Layer
   * ,-----------------------------------------------------------.
   * |TO6|DF0|TO1|DF3|TO3|   |   |   | / | * |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |BB |Up |BF |   |   |   |   | 7 | 8 | 9 | -|   |      |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|   |   |   |   | 4 | 5 | 6 | + |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |    |    | 1 | 2 | 3 |Ent|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[2] = LAYOUT_60_ansi(
    TO(6),   DF(0),   TO(0),   DF(3),    TO(3),    KC_NO,   KC_NO, KC_NO,  KC_PSLS,  KC_PAST,  KC_NO,   KC_NO, KC_NO, KC_NO, \
    KC_TRNS, KC_WBAK, KC_UP,   KC_WFWD,  KC_NO,    KC_NO,   KC_NO, KC_P7,  KC_P8,    KC_P9,    KC_PMNS, KC_NO, KC_NO, KC_NO, \
    KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT,  KC_NO,    KC_NO,   KC_NO, KC_P4,  KC_P5,    KC_P6,    KC_PPLS, KC_NO, KC_NO, \
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_P1,  KC_P2,    KC_P3,    KC_PENT,        KC_NO, \
    KC_NO,   KC_NO,   KC_NO,             KC_P0,                                      KC_TRNS,  KC_PDOT, KC_NO, KC_NO),

  /* Keymap 3: Colemak Layer
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Bs     |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|  K|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space              |Fn2 |Fn1 |App|Ctrl|
   * `-----------------------------------------------------------'
   */
[3] = LAYOUT_60_ansi(
    KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  KC_6,  KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_F,   KC_P,   KC_G,  KC_J,  KC_L,   KC_U,    KC_Y,   KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,   KC_D,   KC_H,  KC_N,  KC_E,   KC_I,    KC_O,   KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,  KC_K,  KC_M,   KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, \
    KC_LCTL, KC_LGUI, KC_LALT,         KC_SPC,                                MO(5),  MO(4),   KC_APP,  KC_RCTL),

  /* Keymap 4: Colemak FN Layer
   * ,-----------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
   * |-----------------------------------------------------------|
   * |TO(5)|Hme|Up |End|RGB|B+ |E+ |   |Prt|Scl|Pau|Up|   | Ins  |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|   |B- |E- |   |Hme|PgU|Lef|Rig|        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |VolD|VolU|Mut|End|PgD|Dwn|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[4] = LAYOUT_60_ansi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
    TO(5),   KC_HOME, KC_UP,   KC_END,  RGB_MOD, RGB_VAI, RGB_SPI, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, KC_INS, \
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, RGB_VAD, RGB_SPD, KC_TRNS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_END,  KC_PGDN, KC_DOWN,          KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

/* Keymap 5: Colemak Numpad Layer
   * ,-----------------------------------------------------------.
   * |TO6|DF0|TO1|DF3|TO3|   |   |   | / | * |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |BB |Up |BF |   |   |   |   | 7 | 8 | 9 | -|   |      |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|   |   |   |   | 4 | 5 | 6 | + |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |    |    | 1 | 2 | 3 |Ent|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[5] = LAYOUT_60_ansi(
    TO(6),   DF(0),   TO(0),   DF(3),     TO(3),   KC_NO,   KC_NO, KC_NO,  KC_PSLS,  KC_PAST,  KC_NO,   KC_NO, KC_NO, KC_NO, \
    KC_TRNS, KC_WBAK, KC_UP,   KC_WFWD,  KC_NO,    KC_NO,   KC_NO, KC_P7,  KC_P8,    KC_P9,    KC_PMNS, KC_NO, KC_NO, KC_NO, \
    KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT,  KC_NO,    KC_NO,   KC_NO, KC_P4,  KC_P5,    KC_P6,    KC_PPLS, KC_NO, KC_NO, \
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_P1,  KC_P2,    KC_P3,    KC_PENT,        KC_NO, \
    KC_NO,   KC_NO,   KC_NO,             KC_P0,                                      KC_TRNS,  KC_PDOT, KC_NO, KC_NO),

/* Keymap 6: Mouse Layer
   * ,-----------------------------------------------------------.
   * |TO0|   |Ac0    |Ac1|Ac2|   |   |Ac0|Ac1|Ac2 |   |   |      |
   * |-----------------------------------------------------------|
   * |     |   |MB1|MUp|MB2|   |   |MB1|MUp|MB2|   |  |   |      |
   * |-----------------------------------------------------------|
   * |      |   |MLt|MDn|MRt|   |   |MLt|MDn|MRt|   |   |        |
   * |-----------------------------------------------------------|
   * |        |RGB|Pln|Brt|Rnb|Swrl|Snk |KR |XMas|Gndt|  |       |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[6] = LAYOUT_60_ansi(
    TO(0), KC_NO,   KC_ACL0, KC_ACL1, KC_ACL2,  KC_NO,    KC_NO,   KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2,  KC_NO,    KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R,  KC_NO,    KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, \
    KC_NO, RGB_TOG, RGB_M_P, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_NO,   KC_NO,        KC_NO, \
    KC_NO, KC_NO,   KC_NO,            KC_NO,                                KC_NO,   KC_NO,   KC_NO, KC_NO)

};

/* Keymap #: <NAME>
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |  |   |      |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |    |    |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */

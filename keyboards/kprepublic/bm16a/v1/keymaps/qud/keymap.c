/* Copyright 2019
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
#include QMK_KEYBOARD_H

enum layers {
  _BASE = 0,
  _FN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_4x4(
    KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS,
    KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS,
    KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_SLASH,
    KC_KP_0, XXXXXXX, KC_PDOT, MO(_FN1)
  ),
  [_FN1] = LAYOUT_ortho_4x4(
    LCTL(KC_KP_7), LCTL(KC_KP_8), LCTL(KC_KP_9), LCTL(KC_KP_MINUS),
    LCTL(KC_KP_4), KC_GRAVE,      LCTL(KC_KP_6), LCTL(KC_KP_PLUS),
    LCTL(KC_KP_1), LCTL(KC_KP_2), LCTL(KC_KP_3), QK_BOOT,
    KC_BSPC,       XXXXXXX,       LCTL(KC_PDOT), _______
  )
};

const uint16_t PROGMEM esc_combo[] = {KC_KP_7, KC_KP_8, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC)
};

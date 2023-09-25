/* Copyright 2020 imchipwood
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

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
            BASE LAYER
    /-----------------------------------------------------`
    |             |  My PC  | Prv trk | Nxt trk |  Media  |
    |             |---------|---------|---------|---------|
    |             |    F9   |    F6   |    F3   |  TT(1)  |
    |             |---------|---------|---------|---------|
    |             |    F8   |    F5   |    F2   |  TO(3)  |
    |-------------|---------|---------|---------|---------|
    | Mute sound  |    F7   |    F4   |    F1   |  Enter  |
    \-----------------------------------------------------'
    */
    [0] = LAYOUT(
                    KC_MYCM,    KC_MPRV,     KC_MNXT,       KC_MPLY,
                    KC_F9,      KC_F6,       KC_F3,         TT(1),
                    KC_F8,      KC_F5,       KC_F2,         TO(3),
        KC_MUTE,    KC_F7,      KC_F4,       KC_F1,         _______
    ),
    /*
            LAYER 2
    /-----------------------------------------------------`
    |             |         |         |         |         |
    |             |---------|---------|---------|---------|
    |             |   F19   |   F16   |   F13   | KC_TRNS |
    |             |---------|---------|---------|---------|
    |             |   F18   |   F15   |   F12   |  TT(2)  |
    |-------------|---------|---------|---------|---------|
    | Mute sound  |   F17   |   F14   |   F11   |   F10   |
    \-----------------------------------------------------'
    */
    [1] = LAYOUT(
                    _______,     _______,     _______,      _______,
                    KC_F19,      KC_F16,      KC_F13,       KC_TRNS,
                    KC_F18,      KC_F15,      KC_F12,       TT(2),
        KC_MUTE,    KC_F17,      KC_F14,      KC_F11,       KC_F10
    ),
    /*
            LAYER 3
    /-----------------------------------------------------`
    |             |         |         |         |         |
    |             |---------|---------|---------|---------|
    |             |         |         |   F23   |  TT(3)  |
    |             |---------|---------|---------|---------|
    |             |         |         |   F22   | KC_TRNS |
    |-------------|---------|---------|---------|---------|
    | Mute sound  |         |   F24   |   F21   |   F20   |
    \-----------------------------------------------------'
    */
    [2] = LAYOUT(
                    _______,     _______,     _______,      _______,
                    _______,     _______,     KC_F23,      TT(3),
                    _______,     _______,     KC_F22,      KC_TRNS,
        KC_MUTE,    _______,     KC_F24,      KC_F21,      KC_F20
    ),
    /*
            LAYER 4
    /-----------------------------------------------------`
    |             |  BSPC   |         |         |  Enter  |
    |             |---------|---------|---------|---------|
    |             |    9    |    6    |    3    | KC_TRNS |
    |             |---------|---------|---------|---------|
    |             |    8    |    5    |    2    |  TO(0)  |
    |-------------|---------|---------|---------|---------|
    | Mute sound  |    7    |    4    |    1    |    0    |
    \-----------------------------------------------------'
    */
    [3] = LAYOUT(
                    KC_BSPC,     _______,     _______,      KC_ENT,
                    KC_9,        KC_6,        KC_3,         KC_TRNS,
                    KC_8,        KC_5,        KC_2,         TO(0),
        KC_MUTE,    KC_7,        KC_4,        KC_1,         KC_0
    )
};

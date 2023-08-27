/* Copyright 2019 zk-phi
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

#ifdef RGBLIGHT_ENABLE
// Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layers { DEFAULT, RAISE, LOWER, ADJUST };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F),
};

#define REGISTER_MODIFIERS             \
    {                                  \
        register_code(KC_RALT);        \
        register_code(KC_RIGHT_SHIFT); \
        register_code(KC_RIGHT_CTRL);  \
    }

#define UNREGISTER_MODIFIERS             \
    {                                    \
        unregister_code(KC_RALT);        \
        unregister_code(KC_RIGHT_SHIFT); \
        unregister_code(KC_RIGHT_CTRL);  \
    }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_A:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F1);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F1);
            }
            break;
        case KC_B:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F2);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F2);
            }
            break;
        case KC_C:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F3);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F3);
            }
            break;
        case KC_D:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F4);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F4);
            }
            break;
        case KC_E:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F5);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F5);
            }
            break;
        case KC_F:
            if (record->event.pressed) {
                REGISTER_MODIFIERS
                register_code(KC_F6);
            } else {
                UNREGISTER_MODIFIERS
                unregister_code(KC_F6);
            }
            break;
    }
    return false;
}
/*
Copyright 2020 KnoblesseOblige

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAE7E
#define PRODUCT_ID      0x7373 /* "SS" */
#define DEVICE_VER      0x0001
#define MANUFACTURER    Aeternus
#define PRODUCT         Smoothie Split

/* key matrix size */
#define MATRIX_ROWS 4*2
#define MATRIX_COLS 12

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

#define UNUSED_MCU 13
#define UNUSED_MCP 6

// wiring
#define MATRIX_ROW_PINS_MCU \
    { F5, F1, D3, B5 }
#define MATRIX_COL_PINS_MCU \
    { F7, D2, D4, D6, D7, B4 }
#define UNUSED_PINS_MCU \
    { B0, B1, B2, B3, B6, B7, C6, C7, D5, E6, F0, F4, F6 }
#define MATRIX_ROW_PINS_MCP \
    { B0, B1, B2, B3 }
#define MATRIX_COL_PINS_MCP \
    { A0, A1, A2, A3, A4, A5 }
#define UNUSED_PINS_MCP \
    { B4, B5, B6, B7, A6, A7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

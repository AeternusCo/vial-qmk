/*
Copyright 2021 KnoblesseOblige

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

#define VENDOR_ID    0xAE7E
#define PRODUCT_ID   0xBAD9
#define DEVICE_VER   0x0001
#define MANUFACTURER Aeternus
#define PRODUCT      BadPad

#define MATRIX_ROWS 1
#define MATRIX_COLS 8

#define DIRECT_PINS { { F4, F5, F7, F1, F6, F0, B3, B7 } }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B2, C6 }
#define ENCODERS_PAD_B { B1, B5 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

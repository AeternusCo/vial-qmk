// Copyright 2022 KnoblesseOblige (@KnoblesseOblige)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xAE7E
#define PRODUCT_ID   0x72B0
#define DEVICE_VER   0x0001
#define MANUFACTURER Aeternus
#define PRODUCT      LZ Bus

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { C6, B0, B1, B2 }
#define MATRIX_COL_PINS { B6, B5, B4, D7, D6, D4, F0, F1, F4, F5, F6, F7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN C7
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 22
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_ANIMATIONS
#endif

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/*
Copyright 2023 Morgan Venable @_claussen

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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS  10
#define MATRIX_COLS  6
#define PFET_ROWS
#define FORCE_NKRO
#define EE_HANDS
//#define DEBUG_MATRIX_SCAN_RATE


// wiring of each half
//Layout for svalboard v0 (different from lalboard_v2)
//1 2 3 4 5 6
//S E D N W None
//Both Thumbs (these are same as lalboard_v2)
//OL OU D IL MODE DOUBLE
//Knuckle Nail Down Pad Up Double
//#define THUMB_DOWN_ACTIVE_DARK

#define MATRIX_COL_PUSHED_STATES { 0, 0, 1, 0, 0, 0 }
#define DOUBLEDOWN_COL 5 // need a pullup on COL6
#define PREWAIT_US 90
#define POSTWAIT_US 90

#define SERIAL_DEBUG
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500 // Timeout window in ms in which the double tap can occur.

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define VIAL_TAP_DANCE_ENTRIES 50
#define VIAL_TAP_COMBO_ENTRIES 50
#define VIAL_COMBO_ENTRIES 50
#define VIAL_KEY_OVERRIDE_ENTRIES 10
#define DYNAMIC_KEYMAP_MACRO_COUNT 50

#define USB_MAX_POWER_CONSUMPTION 500
#define USB_SUSPEND_WAKEUP_DELAY 500
#define SELECT_SOFT_SERIAL_RATE {0}

// Copyright 2022 Mads-Bo Lassen (@mads-bo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define ENCODERS_PAD_A { B5, D3 }
#define ENCODERS_PAD_B { B7, D2 }
#define ENCODER_RESOLUTIONS { 2, 2 }

// Remove if needing more than 8 layers
#define LAYER_STATE_8BIT

#define OLED_DISPLAY_128X64

#define OLED_TIMEOUT 3000
#define OLED_BRIGHTNESS 255

#define RGB_DI_PIN B0
#define RGBLED_NUM 9
#define USB_MAX_POWER_CONSUMPTION 500
#define RGBLIGHT_LIMIT_VAL 125
#define RGBLIGHT_DEFAULT_VAL 20
#define RGBLIGHT_VAL_STEP 10

#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
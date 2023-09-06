// Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>
// SPDX-License-Identifier: GPL-2.0+

#pragma once

/* // Set the mouse settings to a comfortable speed/accuracy trade-off, */
/* // assuming a screen refresh rate of 60 Htz or higher */
/* // The default is 50. This makes the mouse ~3 times faster and more accurate */
/* #define MOUSEKEY_INTERVAL 16 */
/* // The default is 20. Since we made the mouse about 3 times faster with the previous setting, */
/* // give it more time to accelerate to max speed to retain precise control over short distances. */
/* #define MOUSEKEY_TIME_TO_MAX 40 */
/* // The default is 300. Let's try and make this as low as possible while keeping the cursor responsive */
/* #define MOUSEKEY_DELAY 100 */
/* // It makes sense to use the same delay for the mouseweel */
/* #define MOUSEKEY_WHEEL_DELAY 100 */
/* // The default is 100 */
/* #define MOUSEKEY_WHEEL_INTERVAL 50 */
/* // The default is 40 */
/* #define MOUSEKEY_WHEEL_TIME_TO_MAX 100 */

#define TAPPING_TERM 170
#define PERMISSIVE_HOLD
// Default is 50ms, higher will give more time to hit both keys.
#define COMBO_TERM 50
// Not needed, this is now default behavior in qmk.
//#define IGNORE_MOD_TAP_INTERRUPT

// Handle master/slave detection on low cost Promicro
#ifdef __AVR__
#    define SPLIT_USB_DETECT
#endif

// Enable 9 layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 9

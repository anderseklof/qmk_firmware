# About

-   Mimic the Kinesis Advantage with BACKSPACE/DEL --- ENTER/SPACE for the thumb cluster. Add tap-hold for CONTROL/SHIFT --- CONTROL/SHIFT for easy access. Control and shift on the thumb cluster gives the option to use layer 1 keys on both hands without being to cramped. As control and shift can be strenuous for the pinkies, moving them to the stronger thumbs is positive. It took a bit of getting used to but it's a really nice position.
-   Focus on ease of use with one hand, when selecting a layer with the left hand all available keys are on the right hand and the other way around. This gives more layers to learn but makes the hand movements much easier.
-   Try to balance usage of keys between left and right hand.
-   Home row mods for the 8 layers.
    -   Navigation (right): The most common navigation keys, including some keys to move and click the mouse.
    -   Language (right): Country specific letters that didn't fit on base layer and symbols that are not included on other layers.
    -   Programming (left): Pair symbols for programming - (), [], {}, <>.
    -   Programming symbols (left): The most common symbols when programming (optimized for TypeScript).
    -   Helper (left): Helper keys like Windows, Alt and CAPS lock.
    -   Number (right): Numbers.
    -   Function (left): Function keys and PREV/PAUSE-PLAY/NEXT for controlling music.
    -   Copy-paste (both): All keys needed to navigate, select, copy, cut and paste.
-   Combos
    -   E+I: For easy access to ESC in vim.
    -   R+U: Toggle layer 8 (copy-paste).

# Build and flash firmware

-   Navigate to `qmk_firmware` directory. `qmk cd` is a shortcut.
-   Run: `qmk compile -kb ferris/sweep_choc_mbuk -km anderseklof`. If `qmk` is not found, export the `PATH`: `export PATH=$PATH:~/.local/bin`
-   Open `qmk_toolbox`.
-   Select `ferris_sweep_choc_mbuk_anderseklof.hex`.
-   Enable `Auto-Flash`.
-   Disconnect the keyboard.
-   For right keyboard:
    -   Hold top right key pressed and connect the USB cable.
    -   Release the button when keyboard has been found.
    -   Wait until a disconnected message is shown.
    -   Verify that there are no error messages.
    -   Disconnect the right half of the keyboard.
-   For left keyboard:
    -   Hold top left key pressed and connect the USB cable.
    -   Release the button when keyboard has been found.
    -   Wait until a disconnected message is shown.
    -   Verify that there are no error messages.
-   Close `qmk_toolbox`.
-   Firmware is now active.

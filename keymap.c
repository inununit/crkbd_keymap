#include QMK_KEYBOARD_H
#include <stdio.h>


// Home row mods (as Mod-Taps)
#define HOME_A   LCTL_T(KC_A)
#define HOME_S   LSFT_T(KC_S)
#define HOME_D   LOPT_T(KC_D)
#define HOME_F   LCMD_T(KC_F)
#define HOME_J   LCMD_T(KC_J)
#define HOME_K   LOPT_T(KC_K)
#define HOME_L   LSFT_T(KC_L)
#define HOME_SC  LCTL_T(KC_SCLN)


#define EMOJI    LCTL(LCMD(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND      HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define ALFRD    HYPR(KC_S) // macOS: Shortcut for Alfred
#define ONEPS    HYPR(KC_T) // macOS: Shortcut for 1Password
#define SS_OPT   LSFT(LCMD(KC_5)) // macOS: Shortcut for screenshot and recording options
#define MCTRL    HYPR(KC_V) // macOS: Shortcut for Mission Control
#define SPC_L    LCTL(KC_LEFT) // macOS: Shortcut for move right a space
#define SPC_R    LCTL(KC_RGHT) // macOS: Shortcut for move left a space


#define LANG     LCTL(LOPT(KC_SPC)) // macOS: Select next source in Input menu
#define LANG_US  KC_F16 // macOS: Set input source to English
#define LANG_UA  KC_F17 // macOS: Set input source to Ukrainian


#define CMDA     LCMD(KC_A) // Select All
#define CMDZ     LCMD(KC_Z) // Redo
#define CMDX     LCMD(KC_X) // Cut
#define CMDC     LCMD(KC_C) // Copy
#define CMDV     LCMD(KC_V) // Paste


#define BRCLANG
#define BRCLCUR
#define SLSH
#define BRCRANG
#define BRCRCUR
#define BSLSH




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
    // EMPTY TEMPLATE
    [N] = LAYOUT_split_3x6_3(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
    ),
*/

    // MAIN
    [0] = LAYOUT_split_3x6_3(

         KC_PMNS,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_PAST,
         KC_PPLS,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_QUOT,
         LANG_US,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, LANG_UA,
                                      TO(0),  KC_SPC,   TO(1),           TO(2), KC_BSPC,   TO(3)

    ),

    // MACOS CONTROLS AND APPS
    [1] = LAYOUT_split_3x6_3(

         KC_LBRC, KC_LBRC,   SPC_L,   MCTRL,   SPC_R,   ONEPS,         KC_MUTE,     DND, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC,
         KC_LBRC,    CMDA,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,         KC_VOLU,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_RBRC,
         KC_LBRC,    CMDZ,    CMDX,    CMDC,    CMDV,   ALFRD,         KC_VOLD,  SS_OPT, XXXXXXX, XXXXXXX, XXXXXXX, KC_RBRC,
                                      TO(0),  KC_SPC,   TO(1),           TO(2), KC_BSPC,   TO(3)

    ),

    // NUMPAD       
    [2] = LAYOUT_split_3x6_3(

           RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_PLUS,    KC_7,    KC_8,    KC_9, KC_ASTR,  KC_DOT,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F, XXXXXXX,         KC_MINS,    KC_4,    KC_5,    KC_6, KC_SLSH, KC_COMM,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            KC_0,    KC_1,    KC_2,    KC_3,  KC_ENT,  KC_EQL,
                                      TO(0),  KC_SPC,   TO(1),           TO(2), KC_BSPC,   TO(3)

    ),

    // ARROWS
    [3] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F, XXXXXXX,         XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      TO(0),  KC_SPC,   TO(1),           TO(2), KC_BSPC,   TO(3)
    )

};
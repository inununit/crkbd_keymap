# Save space: Official documentation: Squeezing the most out of AVR (https://docs.qmk.fm/#/squeezing_avr)
# Save space: All features list (https://docs.qmk.fm/#/config_options?id=feature-options)

APPLE_FN_ENABLE        = yes
AUDIO_ENABLE           = no           # Save space: Audio output (port C6)
# BACKLIGHT_ENABLE     = yes          # Backlight
# BACKLIGHT_DRIVER     = pwm
BLUETOOTH_ENABLE       = no           # Save space: Bluetooth
BOOTLOADER             = atmel-dfu    # Bootloader for Corne's R2G ATmega32U4
COMBO_ENABLE           = yes          # Enable the Combo feature (https://docs.qmk.fm/#/feature_combo)
COMMAND_ENABLE         = no           # Save space: Commands for debug and configuration (https://docs.qmk.fm/#/feature_command)
CONSOLE_ENABLE         = no           # Save space: Console for debug (https://docs.qmk.fm/#/faq_debug)-(
EXTRAFLAGS            += -flto        # Save space: Link Time Optimization (https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/)
EXTRAKEY_ENABLE        = yes          # Multimedia and system keys support (such as volume control)] 
GRAVE_ESC_ENABLE       = no           # Save space: Grave Escape (https://docs.qmk.fm/#/feature_grave_esc)
KEY_LOCK_ENABLE        = no           # Save space: Key Lock (https://docs.qmk.fm/#/feature_key_lock): allows to lock any key
LTO_ENABLE             = yes          # Save space: Link Time Optimization
MAGIC_ENABLE           = no           # Save space: Magic Keycodes (https://docs.qmk.fm/#/keycodes_magic)
MIDI_ENABLE            = no           # Save space: MIDI controls
MOUSEKEY_ENABLE        = no           # Save space: Mouse keys
NKRO_ENABLE            = no           # Save space: NKRO (6KRO seems enough)
OLED_DRIVER_ENABLE     = no           # Save space: OLED
RGB_MATRIX_ENABLE      = no           # Save space: Correct LED lightning mode
RGBLIGHT_ENABLE        = no           # Incorect LED lightning mode
SPACE_CADET_ENABLE     = no           # Save space: Space Cadet (https://docs.qmk.fm/#/feature_space_cadet)
SPLIT_KEYBOARD         = yes
SWAP_HANDS_ENABLE      = no           # Save space: One-hand typing
TAP_DANCE_ENABLE       = no           # Save space: Tap Dance (https://docs.qmk.fm/#/feature_tap_dance)
UNICODE_ENABLE         = no           # Save space: Unicode support (https://docs.qmk.fm/#/feature_unicode)
UNICODEMAP_ENABLE      = no           # Alternaitve Unicode mode
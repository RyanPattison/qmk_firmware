# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
LTO_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
WEBUSB_ENABLE = no
ORYX_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
SRC += steno.c chord_lookup.c

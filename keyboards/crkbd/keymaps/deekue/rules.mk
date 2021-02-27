# Miryoku customisations
MIRYOKU_ALPHAS = QWERTY
MIRYOKU_NAV = VI
MIRYOKU_CLIPBOARD = FUN

# TODO migrate to new OLED driver
MY_OLED_DRIVER = new # off, old, new
MY_RGB = underglow # off, underglow, light, matrix
MY_DEBUG = no # yes, no

# shrink
ENABLE_LTO = yes
CFLAGS += -flto
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
BOOTMAGIC_ENABLE = no
COMBO_ENABLE = no
ENCODER_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_KEYCODE_ENABLE = no
WPM_ENABLE = no
DYNAMIC_MACRO_ENABLE = no

ifeq ($(strip $(MY_RGB)), matrix)
  RGB_MATRIX_ENABLE = WS2812
else ifeq ($(strip $(MY_RGB)), light)
  RGBLIGHT_ENABLE = yes
else ifeq ($(strip $(MY_RGB)), underglow)
  RGBLIGHT_ENABLE = yes
  OPT_DEFS += -DMY_RGB_UNDERGLOW
endif

ifneq ($(strip $(MY_OLED_DRIVER)),)
	SRC +=  ./lib/glcdfont.c \
					./keymaps/deekue/mh_image.c \
					./lib/mode_icon_reader.c 
					#./lib/logo_reader.c \
					#./lib/host_led_state_reader.c \
					#./lib/timelogger.c \
					#./lib/keylogger.c \
					# ./lib/rgb_state_reader.c \
					# ./lib/layer_state_reader.c 
endif
ifeq ($(strip $(MY_OLED_DRIVER)), new)
  OLED_DRIVER_ENABLE = yes
else ifeq ($(strip $(MY_OLED_DRIVER)), old)
  OPT_DEFS += -DSSD1306OLED
endif

# copied from users/manna-harbour_miryoku/rules.mk
# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift

# disable for customisation
#SRC += manna-harbour_miryoku.c # keymap

# select alternative base layer alphas
ifneq ($(strip $(MIRYOKU_ALPHAS)),)
  OPT_DEFS += -DMIRYOKU_ALPHAS_$(MIRYOKU_ALPHAS)
endif

# select alternative nav
ifneq ($(strip $(MIRYOKU_NAV)),)
  OPT_DEFS += -DMIRYOKU_NAV_$(MIRYOKU_NAV)
endif

# select alternative subset mappings
ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif

# select alternative clipboard
ifneq ($(strip $(MIRYOKU_CLIPBOARD)),)
  OPT_DEFS += -DMIRYOKU_CLIPBOARD_$(MIRYOKU_CLIPBOARD)
endif

ifeq ($(strip $(MY_DEBUG)), yes)
	CONSOLE_ENABLE = yes
	OPT_DEFS += -DMY_DEBUG
endif

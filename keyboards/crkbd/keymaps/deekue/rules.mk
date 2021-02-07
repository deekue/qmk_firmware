# Miryoku customisations
MIRYOKU_ALPHAS = QWERTY
MIRYOKU_NAV = VI
MIRYOKU_CLIPBOARD = FUN

# crkdbd customisations
COMMAND_ENABLE = yes
OLED_DRIVER_ENABLE = yes

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/host_led_state_reader.c \
        ./lib/timelogger.c \
        ./lib/keylogger.c \
        ./lib/mode_icon_reader.c \
        # ./lib/rgb_state_reader.c \
        # ./lib/logo_reader.c \
        # ./lib/layer_state_reader.c \

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

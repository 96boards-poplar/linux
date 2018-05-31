EXTRA_CFLAGS=-fno-pic

USB_MOD_NAME = btmtk_usb
USB_CFILES := \
	btmtk_usb_main.c \
	btmtk_usb_fifo.c
$(USB_MOD_NAME)-objs := $(USB_CFILES:.c=.o)

obj-$(CONFIG_BT_MT7668U) := $(USB_MOD_NAME).o
ifeq ($(CONFIG_BT_MT7668U), m)
EXTRA_LDFLAGS += --strip-debug
endif

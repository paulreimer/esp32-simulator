COMPONENT_ADD_INCLUDEDIRS := include

ifdef IS_BOOTLOADER_BUILD
# Bootloader needs updated SPIUnlock from this file
COMPONENT_OBJS := spi_flash_rom_patch.o
endif

COMPONENT_LIBRARY :=
COMPONENT_ADD_LDFLAGS :=
COMPONENT_LDFLAGS :=

COMPONENT_OWNBUILDTARGET := 1
COMPONENT_OWNCLEANTARGET := 1

.PHONY: build
build:

.PHONY: clean
clean:

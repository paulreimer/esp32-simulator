#
# Component Makefile
#
# (Uses default behaviour of compiling all source files in directory, adding 'include' to include path.)

COMPONENT_LIBRARY :=
COMPONENT_ADD_LDFLAGS :=
COMPONENT_LDFLAGS :=

COMPONENT_OWNBUILDTARGET := 1
COMPONENT_OWNCLEANTARGET := 1

.PHONY: build
build:

.PHONY: clean
clean:

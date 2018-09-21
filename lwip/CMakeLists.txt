set(COMPONENT_ADD_INCLUDEDIRS
  lwip/src/include
  port/esp32/include
  include/lwip
  include/lwip/apps
  include/lwip/apps/ping
  include/lwip/apps/sntp
)

set(COMPONENT_REQUIRES vfs)  # for sys/ioctl.h

register_component()

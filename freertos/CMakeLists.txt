#set(COMPONENT_REQUIRES)

set(COMPONENT_ADD_INCLUDEDIRS include include/freertos)

set(
  COMPONENT_SRCS
    "lib/FreeRTOS-Sim/Source/portable/GCC/POSIX/port.c"
    "lib/FreeRTOS-Sim/Source/portable/MemMang/heap_3.c"
    "lib/FreeRTOS-Sim/Source/croutine.c"
    "lib/FreeRTOS-Sim/Source/event_groups.c"
    "lib/FreeRTOS-Sim/Source/list.c"
    "lib/FreeRTOS-Sim/Source/queue.c"
    "lib/FreeRTOS-Sim/Source/stream_buffer.c"
    "lib/FreeRTOS-Sim/Source/tasks.c"
    "lib/FreeRTOS-Sim/Source/timers.c"
)

register_component()

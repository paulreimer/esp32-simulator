set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

add_compile_options(
  -Wno-error=format
)

add_c_compile_options(
  -Wformat=0

  -Wno-macro-redefined
  -DMAX_FDS=FD_SETSIZE
  -D_GNU_SOURCE

  -fpie
)

add_cxx_compile_options(
  -Wno-macro-redefined
  -DMAX_FDS=FD_SETSIZE
  -D_GNU_SOURCE

  -Wformat=0
)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -arch x86_64 -e _app_main")

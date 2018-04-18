cmake_minimum_required(VERSION 3.5)
project(steam-cli)

set(USING_CROSS_COMPILER OFF)
if (CMAKE_C_COMPILER MATCHES "i686-w64-mingw32-gcc" OR
    CMAKE_C_COMPILER MATCHES "x86_64-w64-mingw32-gcc")
  set(USING_CROSS_COMPILER ON)
endif()

set(USING_64BIT_COMPILER OFF)
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(USING_64BIT_COMPILER ON)
endif()

option(BUILD_LIBRARY "Build main library" ON)
option(BUILD_32BIT_LIBRARY "Build main library for 32-bit wine" ON)
option(BUILD_64BIT_LIBRARY "Build main library for 64-bit wine" ${USING_64BIT_COMPILER})

if (BUILD_LIBRARY)
  if (NOT BUILD_32BIT_LIBRARY AND NOT BUILD_64BIT_LIBRARY)
    message(WARNING "No architectures enabled; skipping main library")
  else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SDL2 REQUIRED sdl2)

    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)

    set(sources steam-cli.cpp)
    set(warnings -Wall -Wextra
      -Wno-attributes -Wno-ignored-attributes -Wno-subobject-linkage
      -Wno-unused-parameter -Wno-unused-variable)

    if (BUILD_32BIT_LIBRARY)
      add_library(steam-cli-32 SHARED ${sources})
      target_compile_options(steam-cli-32 PRIVATE -m32 -fPIC ${warnings})
      target_link_libraries(steam-cli-32 PRIVATE -m32 -fPIC)
      # set_target_properties(steam-cli-32 PROPERTIES OUTPUT_NAME steam_api)
    endif()

    if (BUILD_64BIT_LIBRARY)
      add_library(steam-cli-64 SHARED ${sources})
      target_compile_options(steam-cli-64 PRIVATE -fPIC ${warnings})
      target_link_libraries(steam-cli-64 PRIVATE -fPIC ${warnings})
      # set_target_properties(steam-cli-64 PROPERTIES OUTPUT_NAME steam_api)
    endif()
  endif()
endif()

cmake_minimum_required(VERSION 3.5)
project(SteakWorms)

set(USING_64BIT_COMPILER OFF)
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(USING_64BIT_COMPILER ON)
endif()

option(BUILD_32BIT_LIBRARY "Build main library for 32-bit wine" ON)
option(BUILD_64BIT_LIBRARY "Build main library for 64-bit wine" ${USING_64BIT_COMPILER})

if (NOT BUILD_32BIT_LIBRARY AND NOT BUILD_64BIT_LIBRARY)
  message(WARNING "No architectures enabled")
else()
  set(CMAKE_CXX_STANDARD 11)

  set(sources src/steakworms.cpp include/steam_api.hpp)
  set(warnings -Wall -Wextra
    -Wno-attributes -Wno-ignored-attributes -Wno-subobject-linkage
    -Wno-unused-parameter -Wno-unused-variable)

  find_package(PythonInterp REQUIRED)
  add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/include/steam_api.hpp"
           "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.spec"
           "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.ipp"
           "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.ipp"
    COMMAND "${PYTHON_EXECUTABLE}" generate.py
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    DEPENDS generate.py
  )

  if (BUILD_32BIT_LIBRARY)
    add_library(steakworms32 SHARED ${sources})
    # target_compile_definitions(steakworms32 PRIVATE -D_WIN32)
    target_compile_options(steakworms32 PRIVATE -m32 -fno-PIC -fno-PIE ${warnings})
    target_include_directories(steakworms32 PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
    target_link_libraries(steakworms32 PRIVATE -m32 -fno-PIC -fno-PIE)
    set_target_properties(steakworms32 PROPERTIES
      OUTPUT_NAME steam_api
      LIBRARY_OUTPUT_DIRECTORY "lib/i386-linux-gnu"
    )

    add_custom_command(
      OUTPUT "lib/i386-linux-gnu/steam_api.dll.so"
      COMMAND make -C steam_api "BINDIR=${CMAKE_CURRENT_BINARY_DIR}" "TARGET=i386-linux-gnu"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      DEPENDS steakworms32
              "${CMAKE_CURRENT_SOURCE_DIR}/include/steam_api.hpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.ipp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.cpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.spec"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/Makefile"
    )
    add_custom_target(steam_api32 ALL DEPENDS "lib/i386-linux-gnu/steam_api.dll.so")

    add_custom_command(
      OUTPUT "lib/i386-linux-gnu/csteamworks.dll.so"
      COMMAND make -C csteamworks "BINDIR=${CMAKE_CURRENT_BINARY_DIR}" "TARGET=i386-linux-gnu"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      DEPENDS steakworms32
              "${CMAKE_CURRENT_SOURCE_DIR}/include/steam_api.hpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.ipp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.cpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.spec"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/Makefile"
    )
    add_custom_target(csteamworks32 ALL DEPENDS "lib/i386-linux-gnu/csteamworks.dll.so")
  endif()

  if (BUILD_64BIT_LIBRARY)
    add_library(steakworms64 SHARED ${sources})
    # target_compile_definitions(steakworms64 PRIVATE -D_WIN32)
    target_compile_options(steakworms64 PRIVATE ${warnings})
    target_include_directories(steakworms64 PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
    set_target_properties(steakworms64 PROPERTIES
      OUTPUT_NAME steam_api
      POSITION_INDEPENDENT_CODE TRUE
      LIBRARY_OUTPUT_DIRECTORY "lib/x86_64-linux-gnu"
    )

    add_custom_command(
      OUTPUT "lib/x86_64-linux-gnu/steam_api.dll.so"
      COMMAND make -C steam_api "BINDIR=${CMAKE_CURRENT_BINARY_DIR}" "TARGET=x86_64-linux-gnu"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      DEPENDS steakworms64
              "${CMAKE_CURRENT_SOURCE_DIR}/include/steam_api.hpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.ipp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.cpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.spec"
              "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/Makefile"
    )
    add_custom_target(steam_api64 ALL DEPENDS "lib/x86_64-linux-gnu/steam_api.dll.so")

    add_custom_command(
      OUTPUT "lib/x86_64-linux-gnu/csteamworks.dll.so"
      COMMAND make -C csteamworks "BINDIR=${CMAKE_CURRENT_BINARY_DIR}" "TARGET=x86_64-linux-gnu"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      DEPENDS steakworms64
              "${CMAKE_CURRENT_SOURCE_DIR}/include/steam_api.hpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.ipp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.cpp"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.spec"
              "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/Makefile"
    )
    add_custom_target(csteamworks64 ALL DEPENDS "lib/x86_64-linux-gnu/csteamworks.dll.so")
  endif()
endif()

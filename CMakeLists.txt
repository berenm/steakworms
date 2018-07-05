cmake_minimum_required(VERSION 3.5)
project(SteakWorms)

set(USING_64BIT_COMPILER OFF)
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(USING_64BIT_COMPILER ON)
endif()

option(BUILD_32BIT_LIBRARY "Build main library for 32-bit wine" ON)
option(BUILD_64BIT_LIBRARY "Build main library for 64-bit wine" ${USING_64BIT_COMPILER})

function(add_winelib LIB_NAME)
  cmake_parse_arguments(PARSE_ARGV 0 LIB "" "TARGET;OUTPUT_NAME" "SOURCES")
  add_custom_command(
    OUTPUT "lib/${LIB_TARGET}/${LIB_OUTPUT_NAME}"
    COMMAND make -C "${LIB_NAME}" "BINDIR=${CMAKE_CURRENT_BINARY_DIR}" "TARGET=${LIB_TARGET}"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    DEPENDS ${LIB_SOURCES}
            "${LIB_NAME}/${LIB_NAME}.ipp"
            "${LIB_NAME}/${LIB_NAME}.cpp"
            "${LIB_NAME}/${LIB_NAME}.spec"
            "${LIB_NAME}/Makefile"
  )
  add_custom_target("${LIB_TARGET}-${LIB_OUTPUT_NAME}" ALL DEPENDS "lib/${LIB_TARGET}/${LIB_OUTPUT_NAME}")
endfunction()

if (NOT BUILD_32BIT_LIBRARY AND NOT BUILD_64BIT_LIBRARY)
  message(WARNING "No architectures enabled")
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)

  set(sources src/steakworms.cpp src/steakworms.hpp src/steam_api.ipp
    src/isteam_unimplemented.cpp
    src/isteam_client.cpp
    src/isteam_user.cpp
    src/isteam_utils.cpp
  )
  set(warnings -Wall -Wextra
    -Wno-attributes -Wno-ignored-attributes -Wno-subobject-linkage
    -Wno-unused-parameter -Wno-unused-variable)

  find_package(PythonInterp REQUIRED)
  add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/src/steam_api.ipp"
           "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.spec"
           "${CMAKE_CURRENT_SOURCE_DIR}/steam_api/steam_api.ipp"
           "${CMAKE_CURRENT_SOURCE_DIR}/csteamworks/csteamworks.ipp"
    COMMAND "${PYTHON_EXECUTABLE}" generate.py
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    DEPENDS generate.py
  )

  if (BUILD_32BIT_LIBRARY)
    add_library(i386-linux-gnu-steakworms SHARED ${sources})
    # target_compile_definitions(i386-linux-gnu-steakworms PRIVATE -D_WIN32)
    target_compile_options(i386-linux-gnu-steakworms PRIVATE -m32 ${warnings})
    target_include_directories(i386-linux-gnu-steakworms
      PUBLIC  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>"
    )
    target_link_libraries(i386-linux-gnu-steakworms PRIVATE -m32)
    set_target_properties(i386-linux-gnu-steakworms PROPERTIES
      OUTPUT_NAME steam_api
      LIBRARY_OUTPUT_DIRECTORY "lib/i386-linux-gnu"
    )

    add_winelib(steam_api TARGET "i386-linux-gnu"
      OUTPUT_NAME "steam_api.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(i386-linux-gnu-steam_api.dll.so i386-linux-gnu-steakworms)
    add_winelib(csteamworks TARGET "i386-linux-gnu"
      OUTPUT_NAME "csteamworks.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(i386-linux-gnu-csteamworks.dll.so i386-linux-gnu-steakworms)
    add_winelib(steamclient TARGET "i386-linux-gnu"
      OUTPUT_NAME "steamclient.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(i386-linux-gnu-steamclient.dll.so i386-linux-gnu-steakworms)
  endif()

  if (BUILD_64BIT_LIBRARY)
    add_library(x86_64-linux-gnu-steakworms SHARED ${sources})
    # target_compile_definitions(x86_64-linux-gnu-steakworms PRIVATE -D_WIN32)
    target_compile_options(x86_64-linux-gnu-steakworms PRIVATE ${warnings})
    target_include_directories(x86_64-linux-gnu-steakworms
      PUBLIC  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>"
    )
    set_target_properties(x86_64-linux-gnu-steakworms PROPERTIES
      OUTPUT_NAME steam_api
      POSITION_INDEPENDENT_CODE TRUE
      LIBRARY_OUTPUT_DIRECTORY "lib/x86_64-linux-gnu"
    )

    add_winelib(steam_api TARGET "x86_64-linux-gnu"
      OUTPUT_NAME "steam_api64.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(x86_64-linux-gnu-steam_api64.dll.so x86_64-linux-gnu-steakworms)
    add_winelib(csteamworks TARGET "x86_64-linux-gnu"
      OUTPUT_NAME "csteamworks.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(x86_64-linux-gnu-csteamworks.dll.so x86_64-linux-gnu-steakworms)
    add_winelib(steamclient TARGET "x86_64-linux-gnu"
      OUTPUT_NAME "steamclient64.dll.so"
      SOURCES ${sources}
    )
    add_dependencies(x86_64-linux-gnu-steamclient64.dll.so x86_64-linux-gnu-steakworms)
  endif()
endif()

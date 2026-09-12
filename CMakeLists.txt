cmake_minimum_required(VERSION 3.17)
project(Walnut CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    add_compile_options(-Wall -Wextra -Wpedantic)
elseif(MSVC)
    add_compile_options(/W4)
endif()

add_library(Walnut SHARED
    src/Walnut.h
    src/Walnut/Core.h
    src/Walnut/Application.h
    src/Walnut/Application.cpp
    src/Walnut/EntryPoint.h
    src/Walnut/Log.h
    src/Walnut/Log.cpp
    src/Walnut/Event/Event.h
    src/Walnut/Event/ApplicationEvent.h
    src/Walnut/Event/KeyEvent.h
    src/Walnut/Event/MouseEvent.h
)

target_include_directories(Walnut 
    PUBLIC 
        src
        vendor/include
)

target_compile_definitions(Walnut
    PUBLIC
        WN_PLATFORM_WINDOWS
    PRIVATE
        WN_BUILD_DLL
)

add_executable(Sandbox
    Sandbox/src/SandboxApp.cpp
)

target_link_libraries(Sandbox PRIVATE Walnut)

add_custom_command(TARGET Sandbox POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:Walnut>
    $<TARGET_FILE_DIR:Sandbox>
)
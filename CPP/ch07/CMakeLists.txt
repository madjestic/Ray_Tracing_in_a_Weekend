cmake_minimum_required (VERSION 3.9.6)
project (ch05)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_executable (Main ${SOURCES} ${HEADERS})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


cmake_minimum_required(VERSION 3.20)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/Include)

add_executable(25_4_2 main.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp)
target_include_directories(25_4_2 PUBLIC ${CMAKE_SOURCE_DIR}/Include)
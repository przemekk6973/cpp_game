cmake_minimum_required(VERSION 3.21)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set(SFML_STATIC_LIBRARIES TRUE)

add_executable(untitled1 Bullet.cpp Bullet.h Enemy.cpp Enemy.h Game.cpp Game.h Player.cpp Player.h main.cpp stdafx.h)

set(SFML_DIR "C:\\Users\\redbl\\CLionProjects\\lib\\sfml\\GCC 7.3.0 MinGW (SEH) - 64-bit\\SFML-2.5.1\\lib\\cmake\\SFML")

target_link_libraries(untitled1 sfml-graphics)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)
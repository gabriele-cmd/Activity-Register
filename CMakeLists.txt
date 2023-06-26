cmake_minimum_required(VERSION 3.25)
project(registro_attività)

set(CMAKE_CXX_STANDARD 17)

add_executable(registro_attività main.cpp cmake-build-debug/Activity.cpp cmake-build-debug/Activity.h Activity.cpp Activity.h Activity.cpp Activity.h)

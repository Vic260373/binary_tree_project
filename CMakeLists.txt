cmake_minimum_required(VERSION 3.10)
project(BinaryTreeProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(main src/main.cpp)

# Подключаем GoogleTest из системы
find_package(Threads REQUIRED)

add_subdirectory(tests)

enable_testing()

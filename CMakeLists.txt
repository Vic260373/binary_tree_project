cmake_minimum_required(VERSION 3.10)
project(BinaryTreeProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(main src/main.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)

cmake_minimum_required(VERSION 3.23)
project(ISRPOlab5)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(bin)


enable_testing()
add_subdirectory(tests)
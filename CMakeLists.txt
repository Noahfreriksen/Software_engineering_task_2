cmake_minimum_required(VERSION 3.12)
project(Task2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task2 main.cpp lib/Calculator.cpp lib/Calculator.h)
add_subdirectory(./lib/googletest)
add_executable(tests ./tests/main_tests.cpp tests/calc_tests.cpp lib/Calculator.cpp lib/Calculator.h)
target_include_directories(tests PUBLIC ./lib/googletest/include)
target_link_libraries(tests gtest gtest_main)

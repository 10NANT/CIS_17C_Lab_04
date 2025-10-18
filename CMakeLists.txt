cmake_minimum_required(VERSION 3.10)
project(Lab4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(stacks_test google_test/stacks_test.cpp)
target_link_libraries(stacks_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(stacks stacks.cpp)

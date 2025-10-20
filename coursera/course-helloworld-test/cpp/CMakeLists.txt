cmake_minimum_required(VERSION 3.10)
project(HelloWorldCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(main main.cpp)

# GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests test.cpp)
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)

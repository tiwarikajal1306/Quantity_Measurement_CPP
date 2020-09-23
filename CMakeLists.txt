cmake_minimum_required(VERSION 3.18.2)

project(QuantityMeasurment)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/unit.cpp main/unit.h main/QuantityMeasurement.cpp test/feetTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)
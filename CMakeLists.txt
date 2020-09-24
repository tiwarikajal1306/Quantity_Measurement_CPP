cmake_minimum_required(VERSION 3.18.2)

project(QuantityMeasurment)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/unit.cpp main/unit.h main/quantity.cpp test/quantity_measurement_test.cpp)

target_link_libraries(executeTests PRIVATE gtest)
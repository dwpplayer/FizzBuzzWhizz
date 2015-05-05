cmake_minimum_required(VERSION 3.1)
project(FizzBuzzWhizz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(GTEST_FILES lib/gtest/gtest.h)
set(GMOCK_FILES lib/gmock/gmock.h lib/gmock-gtest-all.cc)
set(TEST_FILES src/main.cpp test/TestFizzBuzzWhizzSpec.h test/TestFizzBuzzWhizzSpec.cpp)

set(SOURCE_FILES src/main.cpp src/NumberOffGame.cpp src/NumberOffGame.h src/NumberConverter.cpp src/NumberConverter.h src/SpecialFizzNumberConverter.h src/SpecialFizzNumberConverter.cpp)
add_executable(FizzBuzzWhizz ${SOURCE_FILES} ${TEST_FILES} ${GTEST_FILES} ${GMOCK_FILES} src/MultipleRelationOfNumberConverter.cpp src/MultipleRelationOfNumberConverter.h src/GeneralNumberConverter.cpp src/GeneralNumberConverter.h)
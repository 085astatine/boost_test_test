cmake_minimum_required(VERSION 2.8)

add_definitions(
    -std=c++11
    -Wall
    -Wextra)

message("CXX Compiler ID: " ${CMAKE_CXX_COMPILER_ID})
message("CMake System Name: " ${CMAKE_SYSTEM_NAME})

find_package(Boost REQUIRED unit_test_framework)
message("Boost Unit Test FrameWork: " ${Boost_UNIT_TEST_FRAMEWORK_LIBRARIES})
message("Boost Include Directory  : " ${Boost_INCLUDE_DIR})
include_directories(
    ${Boost_INCLUDE_DIR})

add_executable(Test
    main.cpp
    test1.cpp)
target_link_libraries(Test
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARIES})

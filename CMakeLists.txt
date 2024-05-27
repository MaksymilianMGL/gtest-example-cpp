cmake_minimum_required(VERSION 3.5.2)

project(
    gtest_example
    LANGUAGES CXX
    VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dep)
include_directories(include)

set(APP_NAME ${PROJECT_NAME}_app)

set(SOURCES
    main.cpp
    src/Example.cpp
    include/Example.h
)

# Add an executable
add_executable(${APP_NAME} ${SOURCES})


target_link_libraries(${APP_NAME} PRIVATE GTest::gtest_main)

include(GoogleTest)

gtest_discover_tests(${APP_NAME})

add_subdirectory(test)

cmake_minimum_required(VERSION 3.5.2)

project(
    gtest_example
    LANGUAGES CXX
    VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dep)

set(APP_NAME ${PROJECT_NAME}_app)
set(LIB_NAME ${PROJECT_NAME}_core)

set(SOURCES
    main.cpp
    src/Example.cpp
    include/Example.h
)

# Add an executable
add_executable(${APP_NAME} ${SOURCES})

target_link_libraries(${APP_NAME} PRIVATE ${LIB_NAME})

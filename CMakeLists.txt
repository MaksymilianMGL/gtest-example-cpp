cmake_minimum_required(VERSION 3.5.2)

enable_testing()

project(
    gtest_example
    LANGUAGES CXX
    VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dep/external/gtest)
include_directories(include)

set(APP_NAME ${PROJECT_NAME}_app)

set(SOURCES
    main.cpp
    src/Example.cpp
)

# Add an executable
add_executable(${APP_NAME} ${SOURCES})
# Add a static library
add_library(${PROJECT_NAME} STATIC ${SOURCES})

# Link GTest to the project
target_link_libraries(${APP_NAME} PRIVATE GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(
    ${APP_NAME}
    TEST_XML_OUTPUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/output"
)

# Add CMake from test folder
add_subdirectory(test)

set(SOURCES main.tst.cpp test_class.tst.cpp )
set(TEST_EXEC ${PROJECT_NAME}_unit_tests)

add_executable(${TEST_EXEC} ${SOURCES})
target_link_libraries(${TEST_EXEC} PRIVATE ${PROJECT_NAME} gmock gtest)

if(DCOL_ENABLE_CODE_COVERAGE)
    setup_target_for_coverage_gcovr_xml(
        NAME
        ${PROJECT_NAME}_coverage
        EXECUTABLE
        ${TEST_EXEC}
        EXCLUDE
        ${PROJECT_SOURCE_DIR}/dep
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_BINARY_DIR})
endif()

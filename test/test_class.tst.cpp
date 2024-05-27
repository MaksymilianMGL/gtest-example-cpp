#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "Example.h"

class ClassExampleTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        std::cout << "SetUp()" << std::endl;
    }

    void TearDown() override
    {
        std::cout << "TearDown()" << std::endl;
    }

    int expected_result;

};

TEST_F(ClassExampleTest, ValidAddData)
{
    ClassExample math;

    expected_result = 15;
    const auto result = math.add_numbers(5, 10);

    EXPECT_EQ(expected_result, result);
}


TEST_F(ClassExampleTest, ValidSubData)
{
    ClassExample math;

    expected_result = 10;
    const auto result = math.subtract_numbers(20, 10);

    EXPECT_EQ(expected_result, result);
}

#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.cpp"

//TC 1.1
TEST(LengthComparisionTest, _zero_feet_and_zero_feet__should_be_equal)
{
    QuantityMeasurement quantity1(0.0, unit::FEET);
    QuantityMeasurement quantity2(0.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.2

TEST(LengthComparisionTest, _null_feet_and_1feet__should_not_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::FEET);
    ASSERT_NE(&quantity1, nullptr);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

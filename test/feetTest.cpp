#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.cpp"

TEST(LengthComparisionTest, _zero_feet_and_zero_feet__should_be_equal)
{
    QuantityMeasurement quantity1(0.0, unit::FEET);
    QuantityMeasurement quantity2(0.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

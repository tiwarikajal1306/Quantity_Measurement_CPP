#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.cpp"

TEST(LengthComparisionTest, _one_feet_and_twelve_inch_should_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::FEET);
    QuantityMeasurement quantity2(12.0, unit::INCH);
    ASSERT_EQ(quantity1, quantity2);
}
//TC 1.1
TEST(LengthComparisionTest, _zero_feet_and_zero_feet__should_be_equal)
{
    QuantityMeasurement quantity1(0.0, unit::FEET);
    QuantityMeasurement quantity2(0.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.2
TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::FEET);
    ASSERT_NE(&quantity1, nullptr);
}

//TC 1.3
TEST(LengthComparisionTest, __two_refrance_point_to_same_address_should_be_equal)
{
    QuantityMeasurement *quantity1 = new QuantityMeasurement(1.0, unit::FEET);
    QuantityMeasurement *quantity2 = quantity1;
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.4
TEST(LengthComparisionTest, __first_refrance_and_second_refrance_should_not_be_equal)
{
    QuantityMeasurement *quantity1 = new QuantityMeasurement(1.0, unit::FEET);
    QuantityMeasurement *quantity2 = new QuantityMeasurement(1.0, unit::FEET);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.5
TEST(LengthComparisionTest, _two_different_type_of_quantity_should_not_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::FEET);
    QuantityMeasurement quantity2(1.0, unit::INCH);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.6
TEST(LengthComparisionTest, _two_same_type_of_quantity_should_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::FEET);
    QuantityMeasurement quantity2(1.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.7
TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal)
{
    QuantityMeasurement quantity1(1.0, unit::INCH);
    ASSERT_NE(&quantity1, nullptr);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

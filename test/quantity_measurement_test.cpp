#include <gtest/gtest.h>
#include "../main/quantity_measurement.h"

TEST(LengthComparisionTest, _one_feet_and_twelve_inch_should_be_equal)
{
    quantity quantity1(1.0, unit::FEET);
    quantity quantity2(12.0, unit::INCH);
    ASSERT_EQ(quantity1, quantity2);
}
//TC 1.1
TEST(LengthComparisionTest, _zero_feet_and_zero_feet__should_be_equal)
{
    quantity quantity1(0.0, unit::FEET);
    quantity quantity2(0.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.2
TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    quantity quantity1(1.0, unit::FEET);
    ASSERT_NE(&quantity1, nullptr);
}

//TC 1.3
TEST(LengthComparisionTest, __two_refrance_point_to_same_address_should_be_equal)
{
    quantity *quantity1 = new quantity(1.0, unit::FEET);
    quantity *quantity2 = quantity1;
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.4
TEST(LengthComparisionTest, __first_refrance_and_second_refrance_should_not_be_equal)
{
    quantity *quantity1 = new quantity(1.0, unit::FEET);
    quantity *quantity2 = new quantity(1.0, unit::FEET);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.5
TEST(LengthComparisionTest, _two_different_type_of_quantity_should_not_be_equal)
{
    quantity quantity1(1.0, unit::FEET);
    quantity quantity2(1.0, unit::INCH);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.6
TEST(LengthComparisionTest, _two_same_type_of_quantity_should_be_equal)
{
    quantity quantity1(1.0, unit::FEET);
    quantity quantity2(1.0, unit::FEET);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.7
TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal)
{
    quantity quantity1(1.0, unit::INCH);
    ASSERT_NE(&quantity1, nullptr);
}

//TC 1.8
TEST(LengthComparisionTest, _first_inch_refrarnce_and_second_refrance_should_be_equal)
{
    quantity *quantity1 = new quantity(1.0, unit::INCH);
    quantity *quantity2 = quantity1;
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.9
TEST(LengthComparisionTest, _first_inch_refrance_and_second_inch_refrance_should_not_be_equal)
{
    quantity *quantity1 = new quantity(1.0, unit::FEET);
    quantity *quantity2 = new quantity(1.0, unit::FEET);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.10
TEST(LengthComparisionTest, _two_same_inch_type_of_quantity_should_be_equal)
{
    quantity quantity1(1.0, unit::INCH);
    quantity quantity2(1.0, unit::INCH);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.11
TEST(LengthComparisionTest, _zero_inch_and_zero_inch__should_be_equal)
{
    quantity quantity1(0.0, unit::INCH);
    quantity quantity2(0.0, unit::INCH);
    ASSERT_EQ(quantity1, quantity2);
}

//UC2
TEST(LengthComparisionTest, _three_feet_and_one_yard_should_be_equal)
{
    quantity quantity1(3.0, unit::FEET);
    quantity quantity2(1.0, unit::YARD);
    ASSERT_EQ(quantity1, quantity2);
}

//TC 1.13
TEST(LengthComparisionTest, _one_feet_and_one_yard__should_not_be_equal)
{
    quantity quantity1(1.0, unit::FEET);
    quantity quantity2(1.0, unit::YARD);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.14
TEST(LengthComparisionTest, _one_inch_and_one_yard__should_not_be_equal)
{
    quantity quantity1(1.0, unit::INCH);
    quantity quantity2(1.0, unit::YARD);
    ASSERT_NE(quantity1, quantity2);
}

//TC 1.15
TEST(LengthComparisionTest, _one_yard_and_thirtysix_inch_should_be_equal)
{
    quantity quantity1(1.0, unit::YARD);
    quantity quantity2(36.0, unit::INCH);
    ASSERT_EQ(quantity1, quantity2);
}

//UC 3
TEST(LengthComparisionTest, _two_inch_and_five_cm_should_be_equal)
{
    quantity quantity1(2.0, unit::INCH);
    quantity quantity2(5.0, unit::CM);
    ASSERT_EQ(quantity1, quantity2);
}

//UC 4
TEST(LengthComparisionTest, _addition_of_two_inch_and_two_inch__should_be_four_inch)
{
    quantity first_inch(2.0, unit::INCH);
    quantity second_inch(2.0, unit::INCH);
    quantity_measurement measurement(&first_inch, &second_inch);
    ASSERT_EQ(4.0, measurement.add_quantity(unit::INCH.value));
}

TEST(LengthComparisionTest, _addition_of_one_feet_and_two_inch__should_be_fourteen_inch)
{
    quantity first_inch(1.0, unit::FEET);
    quantity second_inch(2.0, unit::INCH);
    quantity_measurement measurement(&first_inch, &second_inch);
    ASSERT_EQ(14.0, measurement.add_quantity(unit::INCH.value));
}


TEST(LengthComparisionTest, _addition_of_one_feet_and_one_feet__should_be_twentyfour_inch)
{
    quantity first_feet(1.0, unit::FEET);
    quantity second_feet(1.0, unit::FEET);
    quantity_measurement measurement(&first_feet, &second_feet);
    ASSERT_EQ(24.0, measurement.add_quantity(unit::INCH.value));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include "../main/quantity.cpp"

TEST(LengthComparisionTest, _one_feet_and_twelve_inch_should_be_equal)
{
    quantity one_feet(1.0, unit::FEET);
    quantity twelve_inch(12.0, unit::INCH);
    ASSERT_EQ(one_feet, twelve_inch);
}

//TC 1.1
TEST(LengthComparisionTest, _zero_feet_and_zero_feet__should_be_equal)
{
    quantity first_zero_feet(0.0, unit::FEET);
    quantity second_zero_feet(0.0, unit::FEET);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

//TC 1.2
TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    quantity one_feet(1.0, unit::FEET);
    ASSERT_NE(&one_feet, nullptr);
}

//TC 1.3
TEST(LengthComparisionTest, __two_refrance_point_to_same_address_should_be_equal)
{
    quantity *one_feet = new quantity(1.0, unit::FEET);
    quantity *second_value = one_feet;
    ASSERT_EQ(one_feet, second_value);
}

//TC 1.5
TEST(LengthComparisionTest, _two_different_type_of_quantity_should_not_be_equal)
{
    quantity one_feet(1.0, unit::FEET);
    quantity one_inch(1.0, unit::INCH);
    ASSERT_NE(one_feet, one_inch);
}

//TC 1.6
TEST(LengthComparisionTest, _two_same_type_of_quantity_should_be_equal)
{
    quantity first_one_feet(1.0, unit::FEET);
    quantity second_one_feet(1.0, unit::FEET);
    ASSERT_EQ(first_one_feet, second_one_feet);
}

//TC 1.7
TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal)
{
    quantity one_inch(1.0, unit::INCH);
    ASSERT_NE(&one_inch, nullptr);
}

//TC 1.8
TEST(LengthComparisionTest, _first_inch_refrarnce_and_second_refrance_should_be_equal)
{
    quantity *one_feet = new quantity(1.0, unit::INCH);
    quantity *second_value = one_feet;
    ASSERT_EQ(one_feet, second_value);
}

//TC 1.10
TEST(LengthComparisionTest, _two_same_inch_type_of_quantity_should_be_equal)
{
    quantity first_one_inch(1.0, unit::INCH);
    quantity second_one_inch(1.0, unit::INCH);
    ASSERT_EQ(first_one_inch, second_one_inch);
}

//TC 1.11
TEST(LengthComparisionTest, _zero_inch_and_zero_inch__should_be_equal)
{
    quantity first_zero_inch(0.0, unit::INCH);
    quantity second_zero_inch(0.0, unit::INCH);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

//UC2
TEST(LengthComparisionTest, _three_feet_and_one_yard_should_be_equal)
{
    quantity three_feet(3.0, unit::FEET);
    quantity one_yard(1.0, unit::YARD);
    ASSERT_EQ(three_feet, one_yard);
}

//TC 1.13
TEST(LengthComparisionTest, _one_feet_and_one_yard__should_not_be_equal)
{
    quantity one_feet(1.0, unit::FEET);
    quantity one_yard(1.0, unit::YARD);
    ASSERT_NE(one_feet, one_yard);
}

//TC 1.14
TEST(LengthComparisionTest, _one_inch_and_one_yard__should_not_be_equal)
{
    quantity one_inch(1.0, unit::INCH);
    quantity one_yard(1.0, unit::YARD);
    ASSERT_NE(one_inch, one_yard);
}

//TC 1.15
TEST(LengthComparisionTest, _one_yard_and_thirtysix_inch_should_be_equal)
{
    quantity one_yard(1.0, unit::YARD);
    quantity thirtysix_inch(36.0, unit::INCH);
    ASSERT_EQ(one_yard, thirtysix_inch);
}

//UC 3
TEST(LengthComparisionTest, _two_inch_and_five_cm_should_be_equal)
{
    quantity two_inch(2.0, unit::INCH);
    quantity five_cm(5.0, unit::CM);
    ASSERT_EQ(two_inch, five_cm);
}

//UC 4
TEST(LengthComparisionTest, _addition_of_two_inch_and_two_inch__should_be_four_inch)
{
    quantity first_two_inch(2.0, unit::INCH);
    quantity second_two_inch(2.0, unit::INCH);
    quantity four_inch(4.0, unit::INCH);
    ASSERT_EQ(four_inch, first_two_inch + second_two_inch);
}

TEST(LengthComparisionTest, _addition_of_one_feet_and_two_inch__should_be_fourteen_inch)
{
    quantity one_feet(1.0, unit::FEET);
    quantity two_inch(2.0, unit::INCH);
    quantity fourteen_inch(14.0, unit::INCH);
    ASSERT_EQ(fourteen_inch, one_feet + two_inch);
}

TEST(LengthComparisionTest, _addition_of_one_feet_and_one_feet__should_be_twentyfour_inch)
{
    quantity first_one_feet(1.0, unit::FEET);
    quantity second_one_feet(1.0, unit::FEET);
    quantity twenty_four_inch(24.0, unit::INCH);
    ASSERT_EQ(twenty_four_inch, first_one_feet + second_one_feet);
}

TEST(LengthComparisionTest, _addition_of_two_inch_and_two_and_half_cm__should_be_three_inch)
{
    quantity two_inch(2.0, unit::INCH);
    quantity two_and_half_cm(2.5, unit::CM);
    quantity three_inch(3.0, unit::INCH);
    ASSERT_EQ(three_inch, two_inch + two_and_half_cm);
}

//UC 5
TEST(VolumeComparisionTest, _one_gallon_and_three_point_seven_eight_litre_should_be_equal)
{
    quantity one_gallon(1.0, unit::GALLON);
    quantity three_point_seven_eight_litre(3.78, unit::LITRE);
    ASSERT_EQ(one_gallon, three_point_seven_eight_litre);
}

TEST(VolumeComparisionTest, _one_litre_and_thousand_ml_should_be_equal)
{
    quantity one_litre(1.0, unit::LITRE);
    quantity thousand_ml(1000.0, unit::ML);
    ASSERT_EQ(one_litre, thousand_ml);
}

//UC 6
TEST(VolumeComparisionTest,
     _addition_of_one_gallon_and_three_point_seven_eight_litre_should_be_seven_point_five_six_litre)
{
    quantity one_gallon(1.0, unit::GALLON);
    quantity three_point_78_litre(3.78, unit::LITRE);
    quantity seven_point_56_litere(7.56, unit::LITRE);
    ASSERT_EQ(seven_point_56_litere, one_gallon + three_point_78_litre);
}

TEST(VolumeComparisionTest, _addition_of_one_litre_and_thousand_ml_should_be_two_litre)
{
    quantity one_litre(1.0, unit::LITRE);
    quantity thousand_ml(1000.0, unit::ML);
    quantity two_litres(2.0, unit::LITRE);
    ASSERT_EQ(two_litres, one_litre + thousand_ml);
}

//UC7
TEST(WeightComparisionTest, _one_kg_and_thousand_gram_should_be_equal)
{
    quantity kg(1.0, unit::KG);
    quantity gram(1000.0, unit::GRAM);
    ASSERT_EQ(kg, gram);
}

TEST(WeightComparisionTest, _one_tonne_and_thousand_kg_should_be_equal)
{
    quantity tonne(1.0, unit::TONNE);
    quantity kg(1000.0, unit::KG);
    ASSERT_EQ(tonne, kg);
}

TEST(WeightComparisionTest, _addition_of_one_tonne_and_thousand_kg_should_be_thousand_one_kg)
{
    quantity one_tonne(1.0, unit::TONNE);
    quantity one_kg(1.0, unit::KG);
    quantity one_thousand_one_kg(1001.0, unit::KG);
    ASSERT_EQ(one_thousand_one_kg, one_tonne + one_kg);
}

//UC 8
TEST(TemperatureComparisionTest, _212F_and_100C_should_be_equal)
{
    quantity fahrenheit(212.0, unit::FAHRENHITE);
    quantity celsius(100.0, unit::CELSIUS);
    ASSERT_EQ(fahrenheit, celsius.convert_celsius_to_fahrenheit());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

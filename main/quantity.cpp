#include "unit.h"

class quantity
{
public:
    double value;
    unit unit_type;

public:
    quantity(double value, unit unit_type) : unit_type(unit_type), value(value * (unit_type.value)) {}
    quantity() {}

    bool operator==(quantity other) const
    {
        if (this->unit_type.type == other.unit_type.type)
        {
            return (this->value == other.value);
        }

        if (this->unit_type.type == other.unit_type.type && this->value == other.value)
        {
            return (this->value == other.value);
        }
        return false;
    }

    bool operator==(quantity *other) const
    {
        if (other == nullptr)
        {
            return false;
        }

        return (*this == *other);
    }

    bool operator!=(quantity other) const
    {
        return !(*this == other);
    }

    quantity operator+(quantity other) const
    {
        quantity result_quantity;

        double added_value = this->value + other.value;

        result_quantity.value = added_value;

        result_quantity.unit_type = this->unit_type;

        return result_quantity;
    }
    
    quantity convert_celsius_to_fahrenheit()
    {
        quantity result_quantity;
        result_quantity.value = value * 1.8 + 32;
        result_quantity.unit_type = unit::FAHRENHITE;
        return result_quantity;
    }
};

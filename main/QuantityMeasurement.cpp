#include "unit.h"

class QuantityMeasurement
{
    double value;
    unit unit_type;

public:
    QuantityMeasurement(double value, unit unit_type) : unit_type(unit_type), value(value * (unit_type.value)) {}

    bool operator==(QuantityMeasurement other) const
    {
        if (this->unit_type.type == other.unit_type.type)
        {
            return (this->value == other.value);
        }

        return false;
    }

    bool operator==(QuantityMeasurement *other) const
    {
        if (this == nullptr && other == nullptr)
        {
            return false;
        }

        if (this->unit_type.type == other->unit_type.type)
        {
            return (this->value == other->value);
        }

        return false;
    }

     bool operator!=(QuantityMeasurement other) const
    {
        if (this->unit_type.type == other.unit_type.type && this->unit_type.value == other.unit_type.value)
        {
            return (this->value == other.value);
        }

        return (this->unit_type.type == other.unit_type.type);
    }
};

#include "quantity.cpp"

class quantity_measurement
{
private:
    quantity *first_quantity;
    quantity *second_quantity;

public:
    quantity_measurement(quantity *, quantity *);
    double add_quantity(const double);
};

quantity_measurement::quantity_measurement(quantity *first_quantity, quantity *second_quantity)
    : first_quantity(first_quantity), second_quantity(second_quantity) {}

double quantity_measurement::add_quantity(const double conversion_factor)
{
    if (first_quantity->unit_type.type == second_quantity->unit_type.type)
    {
        return (first_quantity->value + second_quantity->value) / conversion_factor;
    }

    return 0.0;
}

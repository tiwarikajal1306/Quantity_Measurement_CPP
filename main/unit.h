#include <iostream>

class unit
{
public:
    enum UNIT_TYPE
    {
        LENGTH,

    };

    double value;

    UNIT_TYPE type;

    unit() {}

private:
    unit(double value, UNIT_TYPE type);

public:
    static const unit FEET;
};
#include "unit.h"

unit::unit(double value, UNIT_TYPE type) : value(value), type(type) {}

const unit unit::FEET(12.0, unit::LENGTH);

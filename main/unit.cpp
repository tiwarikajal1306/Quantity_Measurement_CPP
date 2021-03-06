#include "unit.h"

unit::unit(double value, UNIT_TYPE type) : value(value), type(type) {}

const unit unit::FEET(30.00, unit::LENGTH);
const unit unit::INCH(2.50, unit::LENGTH);
const unit unit::YARD(90.00, unit::LENGTH);
const unit unit::CM(1.00, unit::LENGTH);
const unit unit::GALLON(3780.0, unit::VOLUME);
const unit unit::LITRE(1000.0, unit::VOLUME);
const unit unit::ML(1.0, unit::VOLUME);
const unit unit::GRAM(1.0, unit::WEIGHT);
const unit unit::KG(1000.0, unit::WEIGHT);
const unit unit::TONNE(1000000.0, unit::WEIGHT);
const unit unit::FAHRENHITE(1.0, unit::TEMPERATURE);
const unit unit::CELSIUS(1.0, unit::TEMPERATURE);
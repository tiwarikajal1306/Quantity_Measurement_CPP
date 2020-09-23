class unit
{
public:
    enum UNIT_TYPE
    {
        LENGTH,
        VOLUME,
        WEIGHT,
        TEMPERATURE
    };

    double value;

    UNIT_TYPE type;

    unit() {}

private:
    unit(double value, UNIT_TYPE type);

public:
    static const unit FEET;
    static const unit INCH;
    static const unit YARD;
    static const unit CM;
    static const unit GALLON;
    static const unit LITRE;
    static const unit ML;
    static const unit GRAM;
    static const unit KG;
    static const unit TONNE;
    static const unit FAHRENHITE;
    static const unit CELSIUS;
};

#include "models/include/EnumColor.h"

const EnumColor EnumColor::BLACK = EnumColor('B');
const EnumColor EnumColor::WHITE = EnumColor('W');
const EnumColor EnumColor::RED = EnumColor('R');
const EnumColor EnumColor::GREEN = EnumColor('G');
const EnumColor EnumColor::YELLOW = EnumColor('Y');
const EnumColor EnumColor::BLUE = EnumColor('L');

EnumColor::EnumColor()
{

}

EnumColor::EnumColor(const char value)
{
    this->value = value;
}

void EnumColor::setValue(const char value)
{
    this->value = value;
}

const char EnumColor::getValue() const
{
    return value;
}
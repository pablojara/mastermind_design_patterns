#ifndef ENUMCOLOR_H
#define ENUMCOLOR_H

#include <vector>

class EnumColor
{

    public:
        static const EnumColor WHITE;
        static const EnumColor BLACK;
        static const EnumColor GREEN;
        static const EnumColor RED;
        static const EnumColor BLUE;
        static const EnumColor YELLOW;

        const char getValue() const;
        void setValue(const char value);
        EnumColor();

    private:
        char value;

        const std::vector<EnumColor> colors {EnumColor::BLACK, EnumColor::WHITE,
                                             EnumColor::RED, EnumColor::BLUE,
                                             EnumColor::GREEN, EnumColor::YELLOW};

        EnumColor(const char value);
       
};

#endif
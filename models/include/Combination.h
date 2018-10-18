#ifndef COMBINATION_H
#define COMBINATION_H

#include "EnumColor.h"

class Combination
{
    public:
        virtual void printCombination() = 0;
    protected:
        EnumColor *combination;

};

#endif
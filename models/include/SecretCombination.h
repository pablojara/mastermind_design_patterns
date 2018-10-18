#ifndef SECRETCOMBINATION_H
#define SECRETCOMBINATION_H

#include "Combination.h"

class SecretCombination: public Combination
{

    public:
        SecretCombination();
        void printCombination();
        EnumColor *getCombination();

};

#endif
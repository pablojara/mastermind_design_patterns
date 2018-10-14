#include "models/include/SecretCombination.h"
#include <iostream>

SecretCombination::SecretCombination()
{
    combination = new EnumColor[4];
    for(int i = 0; i < 4; i++)
    {
        combination[i].setValue('R');
    }

}

void SecretCombination::printCombination()
{
    std::cout << "Secret combination: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << this->combination[i].getValue();
    }

    std::cout << std::endl;

}

EnumColor *SecretCombination::getCombination()
{
    return this->combination;
}

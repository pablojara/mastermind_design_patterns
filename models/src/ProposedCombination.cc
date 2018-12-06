#include "models/include/ProposedCombination.h"
#include <iostream>

ProposedCombination::ProposedCombination()
{
    result = new Result();
}

EnumColor *ProposedCombination::getCombination()
{
    return this->combination;
}

void ProposedCombination::readCombination()
{
    this->combination = new EnumColor[4];
    char value;
    std::cout << "Enter the proposed combination (Allowed colors are \033[1;31mR\033[0m, \033[1;32mG\033[0m, \033[1;34mB\033[0m, \033[1;33mY\033[0m): ";

    for(int i = 0; i < 4; i ++)
    {
        std::cin >> value;
        this->combination[i].setValue(value);
    }

}

void ProposedCombination::calculateResult(SecretCombination *secretCombination)
{
    EnumColor *secretCombinationArray = secretCombination->getCombination();
    for(int i = 0; i < 4; i++)
    {
        if(this->combination[i].getValue() == secretCombinationArray[i].getValue())
        {
            this->result->setHit(i);
        }
    }

}

bool ProposedCombination::checkWin()
{
    return this->result->checkWin();
}

void ProposedCombination::printResult()
{
    this->result->printResult();
}

void ProposedCombination::setCombination(EnumColor *combination)
{
    this->combination = combination;
}

Result *ProposedCombination::getResult()
{
    return this->result;
}
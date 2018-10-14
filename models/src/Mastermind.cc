#include "models/include/Mastermind.h"
#include <iostream>

Mastermind::Mastermind()
{
    proposedCombinations = new ProposedCombination[10];
}

SecretCombination Mastermind::getSecretCombination()
{
    return secretCombination;
}

ProposedCombination *Mastermind::getProposedCombinations()
{
    return proposedCombinations;
}

void Mastermind::play()
{
    int current = 0;
    do
    {
        this->proposedCombinations[current].readCombination();
        this->proposedCombinations[current].calculateResult(secretCombination);
        this->printBoard(current);
        current ++;
    }
    while(!this->proposedCombinations[current-1].checkWin() && current < 10);

    if(current < 10)
        std::cout << "You win. Number of attempts: " << current << std::endl;
    else
    {
        std::cout << "You loose.\n";
        this->secretCombination.printCombination();
    }
}

void Mastermind::printBoard(int size)
{
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i <= size; i++)
    {
        this->proposedCombinations[i].printCombination();
        this->proposedCombinations[i].printResult();
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
}


int main()
{
    Mastermind mastermind;
    mastermind.play();

    return 0;
}


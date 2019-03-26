#include "views/include/ProposedCombinationView.h"

ProposedCombinationView::ProposedCombinationView(GameController *gameController)
{
    this->gameController = gameController;
}
void ProposedCombinationView::printCombinations()
{
    ProposedCombination **combinations = gameController->getProposedCombinations();

    for(int i = 0; i < gameController->getTurn()+1; i++)
    {
        EnumColor *combination = combinations[i]->getCombination();

        for(int j = 0; j < 4; j++)
        {   
            combination[j].setValue(toupper(combination[j].getValue()));
            
            switch(combination[j].getValue()) /* Print colored text in the console using ASCII code */
            {
                case 'R':
                    std::cout <<  "\033[1;31mR  \033[0m";
                    break;
                case 'G':
                    std::cout <<  "\033[1;32mG  \033[0m";
                    break;
                case 'B':
                    std::cout <<  "\033[1;34mB  \033[0m";
                    break;
                case 'Y':
                    std::cout <<  "\033[1;33mY  \033[0m";
                    break;
                default:
                    break;
            }
        }
        std::cout << " ";
        this->printResult(i);
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void ProposedCombinationView::readCombination()
{

    EnumColor *combination = new EnumColor[4];
    char value;

    for(int i = 0; i < 4; i ++)
    {
        std::cin >> value;
        combination[i].setValue(value);
    }

    gameController->setProposedCombination(combination);

}

void  ProposedCombinationView::printResult()
{
    ProposedCombination **combinations = gameController->getProposedCombinations();
    combinations[gameController->getTurn()]->getResult()->printResult();
}

void  ProposedCombinationView::printResult(int turn)
{
    ProposedCombination **combinations = gameController->getProposedCombinations();
    combinations[turn]->getResult()->printResult();
}
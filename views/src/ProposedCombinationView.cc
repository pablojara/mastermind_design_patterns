#include "views/include/ProposedCombinationView.h"

ProposedCombinationView::ProposedCombinationView(InputCombinationController *inputCombinationController)
{
    this->inputCombinationController = inputCombinationController;
}
void ProposedCombinationView::printCombinations()
{
    ProposedCombination **combinations = inputCombinationController->getProposedCombinations();

    for(int i = 0; i < inputCombinationController->getTurn()+1; i++)
    {
        EnumColor *combination = combinations[i]->getCombination();

        for(int j = 0; j < 4; j++)
        {   
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
        combinations[i]->getResult()->printResult(); /* MIERDA*/
    }

      /*  int *results = combinations[i]->getResult()->getResult();
       std::cout << "   Results: [ ";
        for(int k = 0; i < 4; i++)
            {
                std::cout << results[k] << " ";
            }
        std::cout << "]";
    }*/
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

    inputCombinationController->setProposedCombination(combination);

}

void  ProposedCombinationView::printResult()
{

}
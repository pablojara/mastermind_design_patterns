#include "views/include/GameView.h"

GameView::GameView()
{

}

void GameView::interact(InputCombinationController *inputCombinationController)
{
    std::cout << "Enter the proposed combination (Allowed colors are \033[1;31mR\033[0m, \033[1;32mG\033[0m, \033[1;34mB\033[0m, \033[1;33mY\033[0m): ";
    ProposedCombinationView *proposedCombinationView = new ProposedCombinationView(inputCombinationController);

    proposedCombinationView->readCombination();
    inputCombinationController->calculateResult();

    proposedCombinationView->printCombinations();
    inputCombinationController->incrementTurn();

}

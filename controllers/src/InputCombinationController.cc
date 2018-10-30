#include <iostream>
#include "controllers/include/InputCombinationController.h"

InputCombinationController::InputCombinationController(Game *game):Controller(game)
{

}

void InputCombinationController::control()
{
    this->readCombination();
    this->calculateResult();
    this->printCombination();
    this->printResult();
    std::cout << std::endl;
    if(this->checkWinner())
    {
        std::cout << "WIN\n";
        this->setState(State::FINAL);
    }
    else if(this->getTurn() > 10)
    {
        std::cout << "LOOSE\n";
        this->setState(State::FINAL);
    }
    else
    {
        this->incrementTurn();
    }

}

void InputCombinationController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}
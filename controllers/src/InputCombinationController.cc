#include "controllers/include/InputCombinationController.h"

InputCombinationController::InputCombinationController(Game *game):OperationController()
{
    this->game = game;
}

void InputCombinationController::control()
{
    this->readCombination();
    this->calculateResult();
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
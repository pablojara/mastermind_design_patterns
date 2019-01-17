#include <iostream>
#include "controllers/include/GameController.h"

GameController::GameController(Game *game):Controller(game)
{

}

void GameController::control()
{
    this->readCombination();
    
    this->calculateResult();

    this->printResult();

    std::cout << "WIN\n";

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

void GameController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void GameController::setProposedCombination(EnumColor *combination)
{
    this->game->setProposedCombination(combination);
}

void GameController::incrementTurn()
{
    this->game->incrementTurn();
}

int GameController::getTurn()
{
    return this->game->getTurn();
}

ProposedCombination **GameController::getProposedCombinations()
{
    return this->game->getProposedCombinations();

}

void GameController::calculateResult()
{
    this->game->calculateResult();
}

bool GameController::checkWinner()
{
    bool winner = this->game->checkWinner();

    if(winner)
    {
        std::cout << "WIN\n";
        this->setState(State::FINAL);
    }
    else if(this->getTurn() > 9)
    {
        std::cout << "LOOSE\n";
        this->setState(State::FINAL);
    }
}
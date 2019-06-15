#include "controllers/include/Controller.h"
#include <iostream>

Controller::Controller(Game *game)
{
    this->game = game;
}

Game *Controller::getGame()
{
    return this->game;
}

State Controller::getState()
{
    return this->game->getState();
}

void Controller::setState(State state)
{
    this->game->setState(state);
}

void Controller::readCombination()
{
    this->game->readCombination();
}

void Controller::calculateResult()
{
    this->game->calculateResult();
}

bool Controller::checkWinner()
{
    this->game->checkWinner();
}

void Controller::incrementTurn()
{
    this->game->incrementTurn();
}

int Controller::getTurn()
{
    return this->game->getTurn();
}

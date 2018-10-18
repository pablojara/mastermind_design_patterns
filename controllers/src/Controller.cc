#include "controllers/include/Controller.h"

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

void Controller::printBoard()
{
    this->game->printBoard();
}

void Controller::printSecretCombination()
{
    this->game->printSecretCombination();
}

void Controller::incrementTurn()
{
    this->game->incrementTurn();
}

int Controller::getTurn()
{
    return this->game->getTurn();
}

void Controller::printResult()
{
    this->game->printResult();
}

void Controller::printCombination()
{
    this->game->printCombination();
}
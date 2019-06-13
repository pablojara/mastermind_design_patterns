#include "models/include/Game.h"
#include "models/include/State.h"
#include <iostream>

Game::Game()
{
    this->state = State::INITIAL;
    this->secretCombination = new SecretCombination();
    this->turn = 0;
    this->proposedCombinations = new ProposedCombination*[11];
    for(int i = 0; i < 11; i++)
    {
        this->proposedCombinations[i] = new ProposedCombination();
    }
    
}

Game::~Game()
{

}

void Game::setState(State state)
{
    this->state = state;
}

State Game::getState()
{
    return this->state;
}

void Game::setSecretCombination(SecretCombination *secretCombination)
{
    this->secretCombination = secretCombination;
}      
SecretCombination *Game::getSecretCombination()
{
    return this->secretCombination;
}

void Game::setProposedCombinations(ProposedCombination **proposedCombinations)
{
    this->proposedCombinations = proposedCombinations;
}

ProposedCombination **Game::getProposedCombinations()
{
    return this->proposedCombinations;
}

void Game::readCombination()
{
    this->proposedCombinations[getTurn()]->readCombination();
}

void Game::setProposedCombination(EnumColor *combination)
{
    this->proposedCombinations[getTurn()]->setCombination(combination);
}

void Game::calculateResult()
{
    this->proposedCombinations[getTurn()]->calculateResult(this->secretCombination);
}

bool Game::checkWinner()
{
    this->proposedCombinations[getTurn()]->checkWin();
}

void Game::incrementTurn()
{
    turn++;
}

int Game::getTurn()
{
    return turn;
}

void Game::printResult()
{
    this->proposedCombinations[this->getTurn()]->printResult();
}

GameMemento* Game::createMemento()
{
    return new GameMemento(this->state, this->secretCombination, this->proposedCombinations, this->turn);
}

void Game::restoreMemento(GameMemento *gameMemento)
{
    this->state = gameMemento->getState();
    this->secretCombination = gameMemento->getSecretCombination();
    this->proposedCombinations = gameMemento->getProposedCombinations();
    this->turn = gameMemento->getTurn();
    std::cout << "turn (restoreMemento):" << gameMemento->getTurn() << std::endl;
}
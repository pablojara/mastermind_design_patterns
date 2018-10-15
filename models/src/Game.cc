#include "models/include/Game.h"
#include "models/include/State.h"

Game::Game()
{
    this->state = State::INITIAL;
    this->secretCombination = new SecretCombination();
    this->proposedCombinations = new ProposedCombination *[10];
    this->turn = 0;

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

ProposedCombination **Game::getProposedCombination()
{
    return this->proposedCombinations;
}

void Game::readCombination()
{
    this->proposedCombinations[getTurn()]->readCombination();
}

void Game::calculateResult()
{
    this->proposedCombination[getTurn()]->calculateResult(this->secretCombination);
}

bool Game::checkWinner()
{
    this->proposedCombinations[getTurn()]->checkWin();
}

void printBoard()
{
    for(int i = 0; i < getTurn(); i++)
    {
        this->proposedCombinations[getTurn()]->print();
    }
}

void incrementTurn()
{
    turn++;
}

+
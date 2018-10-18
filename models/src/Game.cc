#include "models/include/Game.h"
#include "models/include/State.h"

Game::Game()
{
    this->state = State::INITIAL;
    this->secretCombination = new SecretCombination();
    this->turn = 0;
    this->proposedCombinations = new ProposedCombination*[10];
    for(int i = 0; i < 10; i++)
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
    this->proposedCombinations[getTurn()]->calculateResult(this->secretCombination);
}

bool Game::checkWinner()
{
    this->proposedCombinations[getTurn()]->checkWin();
}

void Game::printBoard()
{
    for(int i = 0; i < this->getTurn(); i++)
    {
        this->proposedCombinations[getTurn()]->printCombination();
    }
}

void Game::printSecretCombination()
{
    this->secretCombination->printCombination();
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

void Game::printCombination()
{
    this->proposedCombinations[this->getTurn()]->printCombination();
}
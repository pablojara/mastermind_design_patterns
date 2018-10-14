#include "models/include/Game.h"

Game::Game()
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

void Game::setSecretCombination(SecretCombination secretCombination)
{
    this->secretCombination = secretCombination;
}      
SecretCombination Game::getSecretCombination()
{
    return this->secretCombination;
}

void Game::setProposedCombinations(ProposedCombination *proposedCombinations)
{
    this->proposedCombinations = proposedCombinations;
}

ProposedCombination *Game::getProposedCombination()
{
    return this->proposedCombinations;
}
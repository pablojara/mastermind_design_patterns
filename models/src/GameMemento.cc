#include "models/include/GameMemento.h"

GameMemento::GameMemento(State state, SecretCombination *secretCombination, ProposedCombination **proposedCombinations, int turn)
{
    this->proposedCombinations = proposedCombinations;
    this->secretCombination = secretCombination;
    this->state = state;
    this->turn = turn;
}

int GameMemento::getTurn()
{
    return this->turn;
}

ProposedCombination **GameMemento::getProposedCombinations()
{
    return this->proposedCombinations;
}

SecretCombination *GameMemento::getSecretCombination()
{
    return this->secretCombination;
}

State GameMemento::getState()
{
    return this->state;
}


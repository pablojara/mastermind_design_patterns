#ifndef GAMEMEMENTO_H
#define GAMEMEMENTO_H


#include "models/include/State.h"
#include "models/include/SecretCombination.h"
#include "models/include/ProposedCombination.h"

class GameMemento
{
    public:
        GameMemento(State state, SecretCombination *secretCombination, ProposedCombination **proposedCombinations, int turn);
        State getState();
        SecretCombination *getSecretCombination();
        ProposedCombination **getProposedCombinations();
        int getTurn();
    private:
        State state;
        SecretCombination *secretCombination;
        ProposedCombination **proposedCombinations;
        int turn;
};

#endif
#ifndef GAME_H
#define GAME_H


#include "models/include/State.h"
#include "models/include/SecretCombination.h"
#include "models/include/ProposedCombination.h"
#include "models/include/GameMemento.h"

class Game
{
    public:
        Game();
        ~Game();
        int getTurn();
        void setState(State state);
        State getState();
        void setSecretCombination(SecretCombination *secretCombination);      
        SecretCombination *getSecretCombination();
        void setProposedCombinations(ProposedCombination **proposedCombinations);
        ProposedCombination **getProposedCombinations();
        void setProposedCombination(EnumColor *combination);
        void readCombination();
        void calculateResult();
        bool checkWinner();
        void incrementTurn();
        void printSecretCombination();
        GameMemento *createMemento();
        void restoreMemento(GameMemento *gameMemento);
        void reset();

        

    private:
        State state;
        SecretCombination *secretCombination;
        ProposedCombination **proposedCombinations;
        int turn;
};

#endif
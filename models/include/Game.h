#include "models/include/State.h"
#include "models/include/SecretCombination.h"
#include "models/include/ProposedCombination.h"

class Game
{
    public:
        Game();
        ~Game();
        int getTurn();
        void setState(State state);
        State getState();
        void setSecretCombination(SecretCombination secretCombination);      
        SecretCombination *getSecretCombination();
        void setProposedCombinations(ProposedCombination *proposedCombinations);
        ProposedCombination **getProposedCombination();
        void readCombination();
        void calculateResult();
        bool checkWinner();
        void printBoard();
        void incrementTurn();
        void printSecretCombination();

    private:
        State state;
        SecretCombination *secretCombination;
        ProposedCombination **proposedCombinations;
        int turn;
};
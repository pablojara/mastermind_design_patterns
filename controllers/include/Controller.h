#include "models/include/Game.h"
#include "models/include/State.h"
#include "models/include/SecretCombination.h"
#include "models/include/ProposedCombination.h"

class Controller
{
    public:

    private:
        Game *game;
    protected:
        Controller(Game *game);
        Game *getGame();
        State getState();
        void setState(State state);
        void readCombination();
        void calculateResult();
        bool checkWinner();
        void printBoard();
        void incrementTurn();
        void printSecretCombination();
        int getTurn();
        void printResult();
        void printCombination();
};
#include "controllers/include/GameController.h"
#include "models/include/ProposedCombination.h"
#include <iostream>

class ProposedCombinationView
{
    public:
        ProposedCombinationView(GameController *gameController);
        void printCombinations();
        void readCombination();
        void printResult();
        void printResult(int turn);
    private:
        GameController *gameController;
};
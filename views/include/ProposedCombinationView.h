#include "controllers/include/InputCombinationController.h"
#include "models/include/ProposedCombination.h"
#include <iostream>

class ProposedCombinationView
{
    public:
        ProposedCombinationView(InputCombinationController *inputCombinationController);
        void printCombinations();
        void readCombination();
        void printResult();
    private:
        InputCombinationController *inputCombinationController;
};
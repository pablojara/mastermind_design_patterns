#include "controllers/include/InputCombinationController.h"
#include "views/include/ProposedCombinationView.h"
#include <iostream>

class GameView
{
    public:
        GameView();
        void interact(InputCombinationController *inputCombinationController);
};
#include "controllers/include/GameController.h"
#include "views/include/ProposedCombinationView.h"
#include <iostream>

class GameView
{
    public:
        GameView();
        void interact(GameController *gameController);
};
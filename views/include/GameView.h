#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include "controllers/include/GameController.h"
#include "views/include/ProposedCombinationView.h"
#include <iostream>

class GameView
{
    public:
        GameView();
        void interact(GameController *gameController);
};

#endif
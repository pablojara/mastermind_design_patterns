#ifndef NEXTROUNDCOMMAND_H
#define NEXTROUNDCOMMAND_H


#include "menu/include/Command.h"
#include "views/include/GameView.h"

class NextRoundCommand: public Command
{
    public:
        NextRoundCommand(GameController *gameController);
        void execute();
    private:
        GameController *gameController;
};

#endif
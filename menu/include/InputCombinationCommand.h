#ifndef INPUTCOMBINATIONCOMMAND_H
#define INPUTCOMBINATIONCOMMAND_H


#include "menu/include/Command.h"
#include "views/include/GameView.h"

class InputCombinationCommand: public Command
{
    public:
        InputCombinationCommand(Game *game, Registry *registry);
        void execute();
        bool isActive();
    private:
        GameController *gameController;
};

#endif
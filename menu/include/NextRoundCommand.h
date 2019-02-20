#ifndef NEXTROUNDCOMMAND_H
#define NEXTROUNDCOMMAND_H


#include "menu/include/Command.h"

class NextRoundCommand: public Command
{
    public:
        NextRoundCommand(Game *game);
        void execute();
    private:
};

#endif
#ifndef REDOCOMMAND_H
#define REDOCOMMAND_H


#include "menu/include/Command.h"

class RedoCommand: public Command
{
    public:
        RedoCommand(Game *game);
        void execute();
};

#endif
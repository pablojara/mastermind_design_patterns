#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H

#include "menu/include/Command.h"

class UndoCommand: public Command
{
    public:
        UndoCommand(Game *game);
        void execute();

};

#endif
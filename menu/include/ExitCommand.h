#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H


#include "menu/include/Command.h"

class ExitCommand: public Command
{
    public:
        ExitCommand(Game *game);
        void execute();

};

#endif
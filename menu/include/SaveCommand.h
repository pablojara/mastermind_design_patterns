#ifndef SAVECOMMAND_H
#define SAVECOMMAND_H


#include "menu/include/Command.h"

class SaveCommand: public Command
{
    public:
        SaveCommand(Game *game);
        void execute();
        bool isActive();
    private:
        /*SaveController saveController*/
};

#endif
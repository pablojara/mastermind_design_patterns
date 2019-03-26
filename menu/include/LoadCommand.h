#ifndef LOADCOMMAND_H
#define LOADCOMMAND_H


#include "menu/include/Command.h"

class LoadCommand: public Command
{
    public:
        LoadCommand(Game *game);
        void execute();
        bool isActive();
    private: 
        /*LoadController loadController;*/
};

#endif
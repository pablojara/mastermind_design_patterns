#ifndef LOADCOMMAND_H
#define LOADCOMMAND_H


#include "menu/include/Command.h"
#include "controllers/include/StoreController.h"

class LoadCommand: public Command
{
    public:
        LoadCommand(Game *game);
        void execute();
        bool isActive();
    private: 
        StoreController *storeController;
};

#endif
#ifndef SAVECOMMAND_H
#define SAVECOMMAND_H


#include "menu/include/Command.h"
#include "controllers/include/StoreController.h"

class SaveCommand: public Command
{
    public:
        SaveCommand(Game *game);
        void execute();
        bool isActive();
    private:
        StoreController *storeController;
};

#endif
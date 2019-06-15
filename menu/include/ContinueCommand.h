#ifndef CONTINUECOMMAND_H
#define CONTINUECOMMAND_H

#include "menu/include/Command.h"
#include "controllers/include/ContinueController.h"

class ContinueCommand: public Command
{
    public:
        ContinueCommand(Game *game);
        void execute();
        bool isActive();
    private:
        ContinueController *continueController;

};

#endif
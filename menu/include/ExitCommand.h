#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H

#include "menu/include/Command.h"
#include "controllers/include/ExitController.h"

class ExitCommand: public Command
{
    public:
        ExitCommand(Game *game);
        void execute();
        bool isActive();
    private:
        ExitController *exitController;

};

#endif
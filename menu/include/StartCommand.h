#ifndef STARTCOMMAND_H
#define STARTCOMMAND_H


#include "menu/include/Command.h"
#include "controllers/include/StartController.h"
#include "views/include/StartView.h"

class StartCommand: public Command
{
    public:
        StartCommand(Game *game);
        void execute();
        bool isActive();
    private:
        StartController *startController;
};

#endif
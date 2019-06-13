#ifndef REDOCOMMAND_H
#define REDOCOMMAND_H

#include "menu/include/Command.h"
#include "models/include/GameMemento.h"
#include "controllers/include/RedoController.h"

class RedoCommand: public Command
{
    public:
        RedoCommand(Game *game, Registry *registry);
        void execute();
        bool isActive();
    private:
        RedoController *redoController;

};

#endif
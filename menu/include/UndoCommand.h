#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H

#include "menu/include/Command.h"
#include "models/include/GameMemento.h"
#include "controllers/include/UndoController.h"

class UndoCommand: public Command
{
    public:
        UndoCommand(Game *game, Registry *registry);
        void execute();
        bool isActive();
    private:
        UndoController *undoController;

};

#endif
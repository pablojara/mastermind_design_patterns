#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H

#include "menu/include/Command.h"
#include "models/include/GameMemento.h"
#include "controllers/include/UndoController.h"

class UndoCommand: public Command
{
    public:
        UndoCommand(Game *game, std::vector <GameMemento*> *mementoVector);
        void execute();
    private:
        std::vector <GameMemento*> *mementoVector;
        UndoController *undoController;

};

#endif
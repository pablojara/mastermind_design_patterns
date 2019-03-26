#ifndef REDOCOMMAND_H
#define REDOCOMMAND_H

#include "menu/include/Command.h"
#include "models/include/GameMemento.h"
#include "controllers/include/RedoController.h"

class RedoCommand: public Command
{
    public:
        RedoCommand(Game *game, std::vector <GameMemento*> *mementoVector);
        void execute();
    private:
        std::vector <GameMemento*> *mementoVector;
        RedoController *redoController;

};

#endif
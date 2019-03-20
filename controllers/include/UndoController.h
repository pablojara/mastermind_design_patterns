#ifndef UNDOCONTROLLER_H
#define UNDOCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"
#include "models/include/GameMemento.h"

class UndoController: public Controller
{
    public:
        UndoController(Game *game);
        void control();
        void undo();
        void accept(ControllerVisitor *controllerVisitor);
        GameMemento *createMemento();
        void restoreMemento(GameMemento *gameMemento);
};

#endif
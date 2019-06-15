#ifndef REDOCONTROLLER_H
#define REDOCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"
#include "models/include/GameMemento.h"

class RedoController: public Controller
{
    public:
        RedoController(Game *game, Registry *registry);
        void control();
        void redo();
        void accept(ControllerVisitor *controllerVisitor);
        void restoreMemento(GameMemento *gameMemento);
    private:
        Registry *registry;
};

#endif
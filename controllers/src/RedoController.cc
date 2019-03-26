#include "controllers/include/RedoController.h"

RedoController::RedoController(Game *game):Controller(game)
{

}

void RedoController::control()
{
    
}

void RedoController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void RedoController::redo()
{

}

void RedoController::restoreMemento(GameMemento *gameMemento)
{
    this->game->restoreMemento(gameMemento);
}


#include "controllers/include/RedoController.h"

RedoController::RedoController(Game *game, Registry *registry):Controller(game)
{
    this->registry = registry;
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
    this->registry->redo();
}

void RedoController::restoreMemento(GameMemento *gameMemento)
{
    this->game->restoreMemento(gameMemento);
}


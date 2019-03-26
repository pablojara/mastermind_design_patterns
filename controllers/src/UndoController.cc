#include "controllers/include/UndoController.h"

UndoController::UndoController(Game *game):Controller(game)
{

}

void UndoController::control()
{
    
}

void UndoController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void UndoController::undo()
{

}

void UndoController::restoreMemento(GameMemento *gameMemento)
{
    this->game->restoreMemento(gameMemento);
}


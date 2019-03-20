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

GameMemento *UndoController::createMemento()
{
    return this->game->createMemento();
}

void UndoController::restoreMemento(GameMemento *gameMemento)
{
    this->game->restoreMemento(gameMemento);
}


#include "controllers/include/UndoController.h"
#include "models/include/Game.h"

UndoController::UndoController(Game *game, Registry *registry):Controller(game)
{
    this->registry = registry;
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
    this->registry->undo();
}

bool UndoController::undoable()
{
    return this->registry->undoable();
}


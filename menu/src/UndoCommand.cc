#include "menu/include/UndoCommand.h"

UndoCommand::UndoCommand(Game *game, Registry *registry):Command("Undo")
{
    this->undoController = new UndoController(game, registry);
}

void UndoCommand::execute()
{

    undoController->undo();
}

bool UndoCommand::isActive()
{
    return this->undoController->undoable();
}
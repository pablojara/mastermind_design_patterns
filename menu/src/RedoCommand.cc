#include "menu/include/RedoCommand.h"

RedoCommand::RedoCommand(Game *game, Registry *registry):Command("Redo")
{
    this->redoController = new RedoController(game, registry);

}

void RedoCommand::execute()
{
    redoController->restoreMemento(this->mementoVector->at(this->mementoVector->back()->getTurn()));
    std::cout << "Reverting last command.. done.\n";
}

bool RedoCommand::isActive()
{
    return true;
}
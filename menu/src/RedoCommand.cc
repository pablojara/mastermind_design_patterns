#include "menu/include/RedoCommand.h"

RedoCommand::RedoCommand(Game *game, std::vector <GameMemento*> *mementoVector):Command("Redo")
{
    this->redoController = new RedoController(game);
    this->mementoVector = mementoVector;
}

void RedoCommand::execute()
{
    redoController->restoreMemento(this->mementoVector->at(this->mementoVector->back()->getTurn()));
    std::cout << "Reverting last command.. done.\n";
}
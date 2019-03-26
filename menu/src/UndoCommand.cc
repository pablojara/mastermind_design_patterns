#include "menu/include/UndoCommand.h"

UndoCommand::UndoCommand(Game *game, std::vector <GameMemento*> *mementoVector):Command("Undo")
{
    this->undoController = new UndoController(game);
    this->mementoVector = mementoVector;
}

void UndoCommand::execute()
{
    undoController->restoreMemento(this->mementoVector->at(this->mementoVector->back()->getTurn()-2));
    std::cout << "Reverting last command.. done.\n";
}
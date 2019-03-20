#include "menu/include/UndoCommand.h"

UndoCommand::UndoCommand(Game *game):Command("Undo")
{
    this->undoController = new UndoController(game);
}

void UndoCommand::execute()
{
    std::cout << "UndoCommand::RestoreMemento\n";
    undoController->restoreMemento(this->mementoVector.back());
}

void UndoCommand::storeMemento()
{
    std::cout << "UndoCommand::StoreMemento\n";
    this->mementoVector.push_back(undoController->createMemento());
}
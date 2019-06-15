#include "menu/include/SaveCommand.h"

SaveCommand::SaveCommand(Game *game):Command("Save")
{
    this->storeController = new StoreController(game);
}

void SaveCommand::execute()
{
    this->storeController->save();
}

bool SaveCommand::isActive()
{
    return this->storeController->isSaveable();
}
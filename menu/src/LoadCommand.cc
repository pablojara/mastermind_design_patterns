#include "menu/include/LoadCommand.h"

LoadCommand::LoadCommand(Game *game):Command("Load")
{
    this->storeController = new StoreController(game);
}

void LoadCommand::execute()
{
    this->storeController->load();
}

bool LoadCommand::isActive()
{
    return this->storeController->isLoadable();
}
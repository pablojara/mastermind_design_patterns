#include "menu/include/ExitCommand.h"

ExitCommand::ExitCommand(Game *game):Command("Exit")
{
    this->exitController = new ExitController(game);
}

void ExitCommand::execute()
{
    this->exitController->exit();
}

bool ExitCommand::isActive()
{
    return true;
}
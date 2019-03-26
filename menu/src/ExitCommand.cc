#include "menu/include/ExitCommand.h"

ExitCommand::ExitCommand(Game *game):Command("Exit")
{
    this->exitController = new ExitController(game);
}

void ExitCommand::execute()
{
    this->exitController->exit();
    std::cout << "Exit game\n";
}

bool ExitCommand::isActive()
{
    return true;
}
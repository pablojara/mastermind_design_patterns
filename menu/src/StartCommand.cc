#include "menu/include/StartCommand.h"

StartCommand::StartCommand(Game *game, Registry *registry):Command("Start")
{
    this->startController = new StartController(game, registry);
}

void StartCommand::execute()
{
    startController->start();
}

bool StartCommand::isActive()
{
    return true;
}
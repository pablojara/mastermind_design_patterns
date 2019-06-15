#include "menu/include/ContinueCommand.h"

ContinueCommand::ContinueCommand(Game *game):Command("Continue")
{
    this->continueController = new ContinueController(game);
}

void ContinueCommand::execute()
{
    this->continueController->control();
}

bool ContinueCommand::isActive()
{
    return this->continueController->continuable();
}
#include "menu/include/NextRoundCommand.h"

NextRoundCommand::NextRoundCommand(GameController *gameController):Command("InputCombination")
{
    this->gameController = gameController;
}

void NextRoundCommand::execute()
{
    GameView *gameView = new GameView();
    gameView->interact(gameController);
}

bool NextRoundCommand::isActive()
{
    return true;
}
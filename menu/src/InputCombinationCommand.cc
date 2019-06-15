#include "menu/include/InputCombinationCommand.h"

InputCombinationCommand::InputCombinationCommand(Game *game, Registry *registry):Command("InputCombination")
{
    this->gameController = new GameController(game, registry);
}

void InputCombinationCommand::execute()
{
    GameView *gameView = new GameView();
    gameView->interact(this->gameController);
    gameController->registryMemento();
}

bool InputCombinationCommand::isActive()
{
    return true;
}
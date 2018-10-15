#include "include/controllers/Logic.h"


Logic::Logic()
{
    game = new Game();
    inputCombinationController = new inputCombinationController(game);
    startController = new StartController(game);
    continueController = new ContinueController(game);
}



OperationController Game::getController()
{
    switch (game->getState())
    {
        case State::INITIAL:
            return startController;
        case State::IN_GAME:
            return inputCombinationController;
        case State::FINAL:
            std::cout << "FINAL STATE\n";
        case State::EXIT:
        default:
            return NULL;
    }
}
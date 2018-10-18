#include "controllers/include/Logic.h"
#include <iostream>


Logic::Logic()
{
    game = new Game();
    inputCombinationController = new InputCombinationController(game);
    startController = new StartController(game);
    //continueController = new ContinueController(game);
}



OperationController *Logic::getController()
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
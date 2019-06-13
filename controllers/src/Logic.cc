#include "controllers/include/Logic.h"
#include <iostream>


Logic::Logic()
{
    game = new Game();
    compositeInitialController = new CompositeInitialController(game);
    compositeInGameController = new CompositeInGameController(game);
}


Controller *Logic::getController()
{
    switch (game->getState())
    {
        case State::INITIAL:
            return compositeInitialController;
        case State::IN_GAME:
            return compositeInGameController;
        case State::FINAL:
            std::cout << "END OF GAME\n";
        case State::EXIT:
        default:
            return NULL;
    }
}

void Logic::setState(State state)
{
    this->game->setState(state);
}
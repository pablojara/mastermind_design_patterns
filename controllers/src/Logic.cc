#include "controllers/include/Logic.h"
#include <iostream>


Logic::Logic()
{
    game = new Game();
    registry = new Registry(game);
    compositeInitialController = new CompositeInitialController(game, registry);
    compositeInGameController = new CompositeInGameController(game, registry);
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
            return compositeInGameController;
        case State::EXIT:
        default:
            return NULL;
    }
}

void Logic::setState(State state)
{
    this->game->setState(state);
}
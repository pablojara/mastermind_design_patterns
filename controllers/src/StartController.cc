#include "controllers/include/StartController.h"

StartController::StartController(Game *game, Registry *registry):Controller(game)
{
    this->registry = registry;
}

void StartController::control()
{
    
}

void StartController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void StartController::start()
{
    if(this->game->getState() != State::INITIAL)
        this->reset();
    this->setState(State::IN_GAME);
}

SecretCombination *StartController::getSecretCombination()
{
    return this->game->getSecretCombination();
}


void StartController::reset()
{
    this->game->reset();
    this->registry->reset();
}
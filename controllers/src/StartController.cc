#include "controllers/include/StartController.h"

StartController::StartController(Game *game):Controller(game)
{

}

void StartController::control()
{
    this->printSecretCombination();
    
}

void StartController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void StartController::start()
{
    this->setState(State::IN_GAME);
}

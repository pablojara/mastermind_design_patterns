#include "controllers/include/StartController.h"

StartController::StartController(Game *game):OperationController(game)
{

}

void StartController::control()
{
    this->printSecretCombination();
    this->setState(State::IN_GAME);
}

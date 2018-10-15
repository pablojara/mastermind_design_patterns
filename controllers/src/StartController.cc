#include "controllers/include/StartController.h"

StartController::StartController(Game *game){
    this->game = game;
}

void control()
{
    this.printSecretCombination();
    this.setState(State::IN_GAME);
}

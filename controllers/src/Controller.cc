#include "controllers/include/Controller.h"

Controller::Controller(Game game)
{

}

Game Controller::getGame()
{
    return this->game;
}

State Controller::getState()
{
    return this->game.getState();
}

void Controller::setState(State state)
{
    this->game.setState(state);
}

SecretCombination Controller::getSecretCombination()
{
    this->game.getSecretCombination();
}

ProposedCombination *Controller::getProposedCombination()
{
    this->game.getProposedCombination();
}
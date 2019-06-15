#include "controllers/include/ContinueController.h"
#include <iostream>

ContinueController::ContinueController(Game *game):Controller(game)
{

}

void ContinueController::control()
{
    this->game->setState(State::INITIAL);
}

void ContinueController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

bool ContinueController::continuable()
{
    return State::FINAL == this->game->getState();
}
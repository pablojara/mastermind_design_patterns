#include "controllers/include/ExitController.h"

ExitController::ExitController(Game *game):Controller(game)
{

}

void ExitController::control()
{

}

void ExitController::exit()
{
    this->game->setState(State::EXIT);
}

void ExitController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}
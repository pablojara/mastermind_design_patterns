#include "controllers/include/ContinueController.h"

ContinueController::ContinueController(Game *game):Controller(game)
{

}

void ContinueController::control()
{

}

void ContinueController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}
#include "controllers/include/StoreController.h"

StoreController::StoreController(Game *game): Controller(game)
{
    this->storage = new StorageText(game);
}

void StoreController::save()
{
    
}

void StoreController::load()
{

}

bool StoreController::isSaveable()
{
    return game->getState() == State::IN_GAME;
}

bool StoreController::isLoadable()
{
    return this->storage->savedGameAvailable();
}

void StoreController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void StoreController::control()
{

}

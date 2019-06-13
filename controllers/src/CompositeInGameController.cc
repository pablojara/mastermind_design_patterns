#include "controllers/include/CompositeInGameController.h"

CompositeInGameController::CompositeInGameController(Game *game):Controller(game)
{
    gameController = new GameController(game);
    
    commandVector.push_back(new NextRoundCommand(gameController));
    commandVector.push_back(new UndoCommand(game, &mementoVector));
    commandVector.push_back(new RedoCommand(game, &mementoVector));
    commandVector.push_back(new SaveCommand(game));
    commandVector.push_back(new ExitCommand(game));
}

std::vector <Command*> CompositeInGameController::getCommandVector()
{
    return this->commandVector;
}

void CompositeInGameController::setCommands()
{

}

void CompositeInGameController::control()
{
    
}

void CompositeInGameController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void CompositeInGameController::launchCommand(int command)
{
    this->commandVector[command]->execute();
}

void CompositeInGameController::storeMemento()
{
    this->mementoVector.push_back(game->createMemento());
}

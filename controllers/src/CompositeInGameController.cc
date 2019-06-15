#include "controllers/include/CompositeInGameController.h"

CompositeInGameController::CompositeInGameController(Game *game, Registry *registry):Controller(game)
{
    //this->gameController = new GameController(game, registry);
    this->registry = registry;
    commandVector.push_back(new StartCommand(game, registry));
    commandVector.push_back(new InputCombinationCommand(game, registry));
    commandVector.push_back(new UndoCommand(game, registry));
    commandVector.push_back(new RedoCommand(game, registry));
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
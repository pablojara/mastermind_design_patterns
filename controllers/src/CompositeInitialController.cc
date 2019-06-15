#include "controllers/include/CompositeInitialController.h"

CompositeInitialController::CompositeInitialController(Game *game, Registry *registry):Controller(game)
{
    commandVector.push_back(new StartCommand(game, registry));
    commandVector.push_back(new LoadCommand(game));
    commandVector.push_back(new ExitCommand(game));
}

std::vector <Command*> CompositeInitialController::getCommandVector()
{
    return this->commandVector;
}

void CompositeInitialController::setCommands()
{

}

void CompositeInitialController::control()
{
    
}


void CompositeInitialController::accept(ControllerVisitor *controllerVisitor)
{
    controllerVisitor->visit(this);
}

void CompositeInitialController::launchCommand(int command)
{
    this->commandVector[command]->execute();
}

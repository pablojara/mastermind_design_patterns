#include "controllers/include/CompositeInGameController.h"

CompositeInGameController::CompositeInGameController(Game *game):Controller(game)
{
    gameController = new GameController(game);
    commandVector.push_back(new NextRoundCommand(game));
    commandVector.push_back(new SaveCommand(game));
    commandVector.push_back(new UndoCommand(game));
    commandVector.push_back(new RedoCommand(game));
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

void CompositeInGameController::play()
{
    GameView *gameView = new GameView();
    gameView->interact(gameController);
}
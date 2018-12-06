#include "views/include/MastermindView.h"

void MastermindView::visit(StartController *startController)
{
    startView->interact(startController);
}

void MastermindView::visit(GameController *gameController)
{
    gameView->interact(gameController);
}

void MastermindView::visit(ContinueController *continueController)
{
    continueView->interact(continueController);
}

void MastermindView::interact(Controller *controller)
{
    controller->accept(this);
}

MastermindView::MastermindView()
{
    startView = new StartView();
    gameView = new GameView();
    continueView = new ContinueView();

}
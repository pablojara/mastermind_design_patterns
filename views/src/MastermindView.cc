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

void MastermindView::visit(CompositeInitialController *compositeInitialController)
{
    initialMenuView->interact(compositeInitialController);
}

void MastermindView::visit(CompositeInGameController *compositeInGameController)
{
    inGameMenuView->interact(compositeInGameController);
}

void MastermindView::visit(ExitController *exitController)
{
    //inGameMenuView->interact(exitController);
}

void MastermindView::visit(UndoController *undoController)
{
    //inGameMenuView->interact(exitController);
}

void MastermindView::visit(RedoController *redoController)
{
    //inGameMenuView->interact(exitController);
}








/*
void MastermindView::interact(CompositeGameController *controller)
{
    controller->accept(this);
}
*/


MastermindView::MastermindView()
{
    startView = new StartView();
    gameView = new GameView();
    continueView = new ContinueView();
    initialMenuView = new InitialMenuView();

}
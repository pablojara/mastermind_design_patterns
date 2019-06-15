#include "views/include/MastermindView.h"

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

void MastermindView::visit(StartController *startController)
{

}

void MastermindView::visit(GameController *gameController)
{

}

void MastermindView::visit(ContinueController *continueController)
{

}

void MastermindView::visit(ExitController *exitController)
{

}

void MastermindView::visit(UndoController *undoController)
{

}

void MastermindView::visit(RedoController *redoController)
{

}

void MastermindView::visit(StoreController *storeController)
{

}

MastermindView::MastermindView()
{
    initialMenuView = new InitialMenuView();
    inGameMenuView = new InGameMenuView();
}
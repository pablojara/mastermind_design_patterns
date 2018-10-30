#include "views/include/MastermindView.h"

void MastermindView::visit(StartController *startController)
{
    startView->interact(startController);
}

void MastermindView::visit(InputCombinationController *inputCombinationController)
{
    inputCombinationView->interact(inputCombinationController);
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
    inputCombinationView = new InputCombinationView();
    continueView = new ContinueView();

}
#include "views/include/MastermindView.h"

MastermindView::MastermindView()
{
    
}

void MastermindView::interact(Controller *controller)
{
    controller->accept(this);
}

void visit(StartController *startController)
{
    startView->interact(startController);
}

void visit(InputCombinationController *inputCombinationController)
{
    inputCombinationView->interact(inputCombinationController);
}

void visit(ContinueController *continueControler)
{
    continueView->interact(continueController);
}

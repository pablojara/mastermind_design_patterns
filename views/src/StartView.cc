#include "views/include/StartView.h"

StartView::StartView()
{

}

void StartView::interact(StartController *startController)
{
    startController->start();
    startController->printSecretCombination();
}
#include "views/include/StartView.h"
#include <iostream>

StartView::StartView()
{

}

void StartView::interact(StartController *startController)
{
    startController->start();
    
    //startController->printSecretCombination();
}
#include "views/include/StartView.h"
#include <iostream>

StartView::StartView()
{

}

void StartView::interact(StartController *startController)
{
    startController->start();
    std::cout << "Welcome toPABLO Mastermind(R).\n\nThe secret combination is already set, you can start playing:\n\n";
}
#include "views/include/InitialMenuView.h"
#include <iostream>

InitialMenuView::InitialMenuView()
{

}

void InitialMenuView::interact(CompositeInitialController *compositeInitialController)
{
    compositeInitialController->setCommands();

    printMenu(compositeInitialController->getCommandVector());

    compositeInitialController->launchCommand(this->getOption());
}

void InitialMenuView::printMenu(std::vector <Command*> commandVector)
{
    std::cout << "MENU:\n";
    for(unsigned int i = 0; i < commandVector.size(); i++)
    {
        std::cout << i+1 << commandVector[i]->getTitle() << std::endl;
    }
}

int InitialMenuView::getOption()
{
    std::cout << "Enter a choice: ";
    int choice;
    std::cin >> choice;
    return choice;
}
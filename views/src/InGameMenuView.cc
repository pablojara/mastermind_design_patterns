#include "views/include/InGameMenuView.h"
#include <iostream>

InGameMenuView::InGameMenuView()
{
    
}

void InGameMenuView::interact(CompositeInGameController *compositeInGameController)
{ 

    compositeInGameController->setCommands();

    this->printMenu(compositeInGameController->getCommandVector());

    compositeInGameController->launchCommand(this->getOption());

    compositeInGameController->storeMemento();

}

void InGameMenuView::printMenu(std::vector <Command*> commandVector)
{
    std::cout << "MENU:\n";
    for(unsigned int i = 0; i < commandVector.size(); i++)
    {
        std::cout << "   " << i << " " << commandVector[i]->getTitle() << std::endl;
    }
}

int InGameMenuView::getOption()
{
    std::cout << "Enter a choice: ";
    int choice;
    std::cin >> choice;
    std::cout << std::endl;
    return choice;
}
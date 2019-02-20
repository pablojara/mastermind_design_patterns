#include "views/include/InGameMenuView.h"
#include <iostream>

InGameMenuView::InGameMenuView()
{

}

void InGameMenuView::interact(CompositeInGameController *compositeInGameController)
{
    
    compositeInGameController->play();    
    
    compositeInGameController->setCommands();

    this->printMenu(compositeInGameController->getCommandVector());

    compositeInGameController->launchCommand(this->getOption());
}

void InGameMenuView::printMenu(std::vector <Command*> commandVector)
{
    std::cout << "MENU:\n";
    for(unsigned int i = 0; i < commandVector.size(); i++)
    {
        std::cout << i+1 << commandVector[i]->getTitle() << std::endl;
    }
}

int InGameMenuView::getOption()
{
    std::cout << "Enter a choice: ";
    int choice;
    std::cin >> choice;
    return choice;
}
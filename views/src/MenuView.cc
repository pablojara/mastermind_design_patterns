#include "views/include/MenuView.h"

#include <iostream>

MenuView::MenuView(std::vector<Command*> vector)
{
    this->commandVector = vector;   
}

void MenuView::printMenu()
{
    std::cout << "MENU:\n";
    for(unsigned int i = 0; i < commandVector.size(); i++)
    {
        std::cout << i+1 << commandVector[i]->getTitle() << std::endl;
    }
}

State MenuView::getOption()
{
    std::cout << "Enter a choice: ";
    int choice;
    std::cin >> choice;
    return 
}
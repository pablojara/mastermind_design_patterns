#include "views/include/MenuView.h"

#include <iostream>

void MenuView::printMenu()
{
    std::cout << "MENU:\n";

    for(unsigned int i = 0; i < commandVector.size(); i++)
    {
        std::cout << i+1 << commandVector[i]->getTitle() << std::endl;
    }

}
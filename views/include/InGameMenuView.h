#ifndef INGAMEMENUVIEW_H
#define INGAMEMENUVIEW_H

#include "controllers/include/CompositeInGameController.h"

class InGameMenuView
{
    public:
        InGameMenuView();
        void interact(CompositeInGameController *compositeInGameController);
        void printMenu(std::vector <Command*> commandVector);
        int getOption();

};

#endif
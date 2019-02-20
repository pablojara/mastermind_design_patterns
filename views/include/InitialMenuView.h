#ifndef INITIALMENUVIEW_H
#define INITIALMENUVIEW_H

#include "controllers/include/CompositeInitialController.h"

class InitialMenuView  /*TODO: Crear vista padre para que hereden InGame y esta */
{
    public:
        InitialMenuView();
        void interact(CompositeInitialController *compositeInitialController);
        void printMenu(std::vector <Command*> commandVector);
        int getOption();

};

#endif
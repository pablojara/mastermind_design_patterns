#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H

#include "controllers/include/Controller.h"

class ContinueController: public Controller
{
    public:
        ContinueController(Game *game);
        void accept(ControllerVisitor *controllerVisitor);
        void control();
        bool continuable();
};

#endif
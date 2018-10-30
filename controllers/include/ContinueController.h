#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H


#include "controllers/include/Controller.h"

class ContinueController: public Controller
{
    public:
        void accept(ControllerVisitor *controllerVisitor);
        void control();
        ContinueController(Game *game);

};

#endif
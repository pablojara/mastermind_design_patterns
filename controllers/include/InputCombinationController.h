#ifndef INPUTCOMBINATIONCONTROLLER_H
#define INPUTCOMBINATIONCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"

class InputCombinationController: public Controller
{
    public:
        void control();
        InputCombinationController(Game *game);
        void accept(ControllerVisitor *controllerVisitor);

};

#endif
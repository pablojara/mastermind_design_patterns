#ifndef EXITCONTROLLER_H
#define EXITCONTROLLER_H


#include "controllers/include/Controller.h"

class ExitController: public Controller
{
    public:
        void accept(ControllerVisitor *controllerVisitor);
        void control();
        void exit();
        ExitController(Game *game);

};

#endif
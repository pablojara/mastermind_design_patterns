#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"

class StartController: public Controller
{
    public:
        StartController(Game *game);
        void control();
        void start();
        void accept(ControllerVisitor *controllerVisitor);
};

#endif
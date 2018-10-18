#ifndef OPERATIONCONTROLLER_H
#define OPERATIONCONTROLLER_H


#include "controllers/include/Controller.h"
#include "models/include/Game.h"

class OperationController: public Controller
{
    public:
        virtual void control() = 0;
    protected:
        OperationController(Game *game):Controller(game){

        }
};

#endif
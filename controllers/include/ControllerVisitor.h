#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H

#include "StartController.h"
#include "InputCombinationController.h"
#include "ContinueController.h"

class StartController;

class InputCombinationController;

class ContinueController;

class ControllerVisitor
{
    public:
        virtual void visit(StartController *startController) = 0;
        virtual void visit(InputCombinationController *inputCombinationController) = 0;
        virtual void visit(ContinueController *continueController) = 0;
        

};

#endif
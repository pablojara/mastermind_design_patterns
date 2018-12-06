#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H

class StartController;

class GameController;

class ContinueController;


class ControllerVisitor
{
    public:
        virtual void visit(StartController *startController) = 0;
        virtual void visit(GameController *gameController) = 0;
        virtual void visit(ContinueController *continueController) = 0;
};

#endif
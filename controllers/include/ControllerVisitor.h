#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H

class StartController;

class GameController;

class ContinueController;

class CompositeInitialController;

class CompositeInGameController;

class ControllerVisitor
{
    public:
        virtual void visit(StartController *startController) = 0;
        virtual void visit(GameController *gameController) = 0;
        virtual void visit(ContinueController *continueController) = 0;
        virtual void visit(CompositeInitialController *continueController) = 0;
        virtual void visit(CompositeInGameController *compositeInGameController) = 0;
};

#endif
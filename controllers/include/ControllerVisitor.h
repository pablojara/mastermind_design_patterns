#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H

class StartController;

class GameController;

class ContinueController;

class CompositeInitialController;

class CompositeInGameController;

class ExitController;

class UndoController;

class RedoController;

class StoreController;

class ControllerVisitor
{
    public:
        virtual void visit(StartController *startController) = 0;
        virtual void visit(GameController *gameController) = 0;
        virtual void visit(ContinueController *continueController) = 0;
        virtual void visit(CompositeInitialController *continueController) = 0;
        virtual void visit(CompositeInGameController *compositeInGameController) = 0;
        virtual void visit(ExitController *exitController) = 0;
        virtual void visit(UndoController *undoController) = 0;
        virtual void visit(RedoController *redoController) = 0;
        virtual void visit(StoreController *continueController) = 0;
};

#endif
#include "controllers/include/ControllerVisitor.h"
#include "views/include/StartView.h"
#include "views/include/GameView.h"
#include "views/include/ContinueView.h"
#include "views/include/InitialMenuView.h"
#include "views/include/InGameMenuView.h"

class MastermindView: public ControllerVisitor
{
   
    public:
        MastermindView();
        void visit(StartController *startController);
        void visit(GameController *gameController);
        void visit(ContinueController *continueControler);
        void visit(CompositeInitialController *compositeInitialController);
        void visit(CompositeInGameController *compositeInGameController);
        void visit(ExitController *exitController);
        void visit(UndoController *undoController);
        void visit(RedoController *redoController);
        void interact(Controller *controller);
        
    private:
        StartView *startView;
        GameView *gameView;
        ContinueView *continueView;
        InitialMenuView *initialMenuView;
        InGameMenuView *inGameMenuView;


};
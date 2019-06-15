#include "controllers/include/ControllerVisitor.h"
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
        void visit(StoreController *storeController);        
        void interact(Controller *controller);
        
    private:
        InitialMenuView *initialMenuView;
        InGameMenuView *inGameMenuView;


};
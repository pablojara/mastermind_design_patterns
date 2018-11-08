#include "controllers/include/ControllerVisitor.h"
#include "views/include/StartView.h"
#include "views/include/GameView.h"
#include "views/include/ContinueView.h"

class MastermindView: public ControllerVisitor
{
   
    public:
        MastermindView();
        void visit(StartController *startController);
        void visit(InputCombinationController *inputCombinationController);
        void visit(ContinueController *continueControler);
        void interact(Controller *controller);
        
    private:
        StartView *startView;
        GameView *gameView;
        ContinueView *continueView;


};
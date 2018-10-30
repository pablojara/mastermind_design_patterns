#include "controllers/include/ControllerVisitor.h"
#include "views/include/StartView.h"
#include "views/include/InputCombinationView.h"
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
        InputCombinationView *inputCombinationView;
        ContinueView *continueView;


};
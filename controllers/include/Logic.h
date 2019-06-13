#include "models/include/Game.h"
#include "models/include/Registry.h"
#include "controllers/include/StartController.h"
#include "controllers/include/ContinueController.h"
#include "controllers/include/CompositeInitialController.h"
#include "controllers/include/CompositeInGameController.h"
#include "controllers/include/GameController.h"
#include "controllers/include/Controller.h"
#include "models/include/State.h"

class Logic
{
    public:
        Logic();
        Controller *getController();
        void setState(State state);

    private:
        Game *game;
        Registry *registry;
        StartController *startController;
        ContinueController *continueController;
        GameController *gameController;
        CompositeInitialController *compositeInitialController;
        CompositeInGameController *compositeInGameController;
};
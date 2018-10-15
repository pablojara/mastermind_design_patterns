#include "models/include/Game.h"
#include "controllers/include/StartController.h"
#include "controllers/include/ContinueController.h"
#include "controllers/include/OperateController.h"
#include "models/include/State.h"


class Logic
{
    public:
        Logic();
        OperationController getController();

    private:
        Game *game;
        StartController *startController;
        ContinueController *continueController;
        inputCombinationController *inputCombinationController;
};
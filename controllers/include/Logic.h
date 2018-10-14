#include "models/include/Game.h"
#include "controllers/include/StartController.h"
#include "controllers/include/ContinueController.h"

class Logic
{
    public:
        Logic();
    private:
        Game game;
        StartController startController;
        ContinueController continueController;
};
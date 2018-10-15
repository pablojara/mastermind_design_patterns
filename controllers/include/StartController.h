#include "controllers/include/operationController.h"
#include "controllers/include/InputCombinationController.h"


class StartController: public OperationController
{
    private:
        InputCombinationController *inputCombinationController;

    public:
        StartController(Game *game);
        void control();




};
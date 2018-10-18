#include "controllers/include/OperationController.h"

class ContinueController: public OperationController
{
    public:
        void control();
        ContinueController(Game *game);

};
#include "controllers/include/OperationController.h"

class StartController: public OperationController
{
    public:
        StartController(Game *game);
    public:
        void control();

};
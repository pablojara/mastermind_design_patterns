#ifndef INPUTCOMBINATIONCONTROLLER_H
#define INPUTCOMBINATIONCONTROLLER_H

#include "controllers/include/OperationController.h"

class InputCombinationController: public OperationController
{
    public:
        void control();
        InputCombinationController(Game *game);

};

#endif
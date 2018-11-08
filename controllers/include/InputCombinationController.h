#ifndef INPUTCOMBINATIONCONTROLLER_H
#define INPUTCOMBINATIONCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"
#include "models/include/EnumColor.h"

class InputCombinationController: public Controller
{
    public:
        void control();
        InputCombinationController(Game *game);
        void accept(ControllerVisitor *controllerVisitor);
        void setProposedCombination(EnumColor *combination);
        void incrementTurn();
        int getTurn();
        ProposedCombination **getProposedCombinations();
        void calculateResult();
};
#endif
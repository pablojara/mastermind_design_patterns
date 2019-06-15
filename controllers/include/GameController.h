#ifndef INPUTCOMBINATIONCONTROLLER_H
#define INPUTCOMBINATIONCONTROLLER_H

#include "controllers/include/Controller.h"
#include "controllers/include/ControllerVisitor.h"
#include "models/include/EnumColor.h"

class GameController: public Controller
{
    public:
        void control();
        GameController(Game *game, Registry *registry);
        void accept(ControllerVisitor *controllerVisitor);
        void setProposedCombination(EnumColor *combination);
        void incrementTurn();
        int getTurn();
        ProposedCombination **getProposedCombinations();
        void calculateResult();
        bool checkWinner();
        void registryMemento();
    private:
        Registry *registry;
};
#endif
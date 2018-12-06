#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "models/include/Game.h"
#include "models/include/State.h"
#include "models/include/SecretCombination.h"
#include "models/include/ProposedCombination.h"
#include "controllers/include/ControllerVisitor.h"

class Controller
{
    public:
        virtual void control() = 0;
        virtual void accept(ControllerVisitor *controllerVisitor) = 0;
        
    protected:
        Game *game;
        Controller(Game *game);
        Game *getGame();
        State getState();
        void setState(State state);
        void readCombination();
        void calculateResult();
        bool checkWinner();
        void incrementTurn();
        int getTurn();
        void printResult();

};

#endif
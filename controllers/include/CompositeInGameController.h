#ifndef COMPOSITEINGAMECONTROLLER_H
#define COMPOSITEINGAMECONTROLLER_H

#include "menu/include/ExitCommand.h"
#include "menu/include/LoadCommand.h"
#include "menu/include/RedoCommand.h"
#include "menu/include/SaveCommand.h"
#include "menu/include/StartCommand.h"
#include "menu/include/UndoCommand.h"
#include "menu/include/InputCombinationCommand.h"
#include "menu/include/Command.h"
#include "views/include/GameView.h"
#include "controllers/include/GameController.h"
#include "controllers/include/Controller.h"
#include <vector>

class CompositeInGameController: public Controller
{
    public:
        CompositeInGameController(Game *game, Registry *registry);
        void accept(ControllerVisitor *controllerVisitor);
        void control();
        void setCommands();
        void launchCommand(int option);
        std::vector <Command*> getCommandVector();
    private:
        std::vector <Command*> commandVector;
        Registry *registry;
};

#endif
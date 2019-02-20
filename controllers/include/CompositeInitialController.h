#ifndef COMPOSITEINITIALCONTROLLER_H
#define COMPOSITEINITIALCONTROLLER_H

#include "menu/include/ExitCommand.h"
#include "menu/include/LoadCommand.h"
#include "menu/include/RedoCommand.h"
#include "menu/include/SaveCommand.h"
#include "menu/include/StartCommand.h"
#include "menu/include/UndoCommand.h"
#include "menu/include/Command.h"
#include <vector>

#include "controllers/include/Controller.h"

class CompositeInitialController: public Controller
{
    public:
        void accept(ControllerVisitor *controllerVisitor);
        void control();
        CompositeInitialController(Game *game);
        void setCommands();
        void launchCommand(int option);
        std::vector <Command*> getCommandVector();
    private:
        std::vector <Command*> commandVector;
};

#endif
#ifndef MENU_H
#define MENU_H

#include "menu/include/Command.h"
#include "models/include/Game.h"
#include "menu/include/ExitCommand.h"
#include "menu/include/LoadCommand.h"
#include "menu/include/RedoCommand.h"
#include "menu/include/SaveCommand.h"
#include "menu/include/StartCommand.h"
#include "menu/include/UndoCommand.h"
#include "views/include/MenuView.h"
#include "models/include/State.h"
#include <vector>

class Menu
{
    public:
        Menu();
        State execute();
    private:
        std::vector<Command*> commandVector;
        State getOption();
        void setCommands();
};

#endif
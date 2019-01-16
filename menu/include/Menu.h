#ifndef MENU_H
#define MENU_H

#include "Command.h"
#include <vector>

class Menu
{
    public:
        std::vector<Command*> commandVector;
        Menu();
        void setCommands();
        void execute();
        int getOption();
    private:


};
#endif
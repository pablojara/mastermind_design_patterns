#include "menu/include/Command.h"
#include <vector>

class MenuView
{
    public:
        MenuView(std::vector<Command*> commandVector);
        void printMenu();
        State getOption();
    private:
        int option;
        std::vector <Command*> commandVector;

};
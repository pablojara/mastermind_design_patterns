#include "menu/include/Command.h"
#include <vector>

class MenuView
{
    public:
        void printMenu();
        int getOption();
    private:
        int option;
        std::vector <Command*> commandVector;

};
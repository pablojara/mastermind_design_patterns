#include "menu/include/Menu.h"
#include "menu/include/ExitCommand.h"
#include "menu/include/LoadCommand.h"
#include "menu/include/RedoCommand.h"
#include "menu/include/SaveCommand.h"
#include "menu/include/StartCommand.h"
#include "menu/include/UndoCommand.h"
#include "views/include/MenuView.h"

Menu::Menu()
{
    //this->commandVector = new std::vector<Command*>();
    this->setCommands();
}

void Menu::setCommands()
{
    commandVector.push_back(new ExitCommand());
    commandVector.push_back(new LoadCommand());
    commandVector.push_back(new RedoCommand());
    commandVector.push_back(new SaveCommand());
    commandVector.push_back(new StartCommand());
    commandVector.push_back(new UndoCommand());
}

void Menu::execute()
{

}
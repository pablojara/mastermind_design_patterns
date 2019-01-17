#include "menu/include/Menu.h"

Menu::Menu()
{
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

State Menu::execute()
{
    MenuView *menuView = new MenuView(this->commandVector);

    menuView->printMenu();
    
    State option = menuView->getOption();

    return option;
    
}
#include "menu/include/StartCommand.h"

StartCommand::StartCommand(Game *game):Command("Start")
{
    this->startController = new StartController(game);
}

void StartCommand::execute()
{
    startController->start();
    std::cout << "Welcome to Mastermind(R).\n\nThe secret combination is already set, you can start playing:\n\n";
}
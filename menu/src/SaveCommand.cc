#include "menu/include/SaveCommand.h"

SaveCommand::SaveCommand(Game *game):Command("Save")
{

}

void SaveCommand::execute()
{

}

bool SaveCommand::isActive()
{
    return true;
}
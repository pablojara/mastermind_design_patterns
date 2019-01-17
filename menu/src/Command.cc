#include "menu/include/Command.h"

Command::Command(std::string title)
{
    this->title = title;
}

std::string Command::getTitle()
{
    return this->title;
}
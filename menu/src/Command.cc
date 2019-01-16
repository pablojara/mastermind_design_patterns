#include "menu/include/Command.h"

Command::Command(char* title)
{
    this->title = title;
}

char* Command::getTitle()
{
    return this->title;
}
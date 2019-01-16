#ifndef COMMAND_H
#define COMMAND_H

#include "models/include/Game.h"
#include "string.h"
#include <iostream>

class Command 
{
    public:
        Command(std::string title);
        std::string getTitle(){return title;};
        virtual void execute();
    private:
        std::string title;           

};

#endif

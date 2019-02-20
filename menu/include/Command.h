#ifndef COMMAND_H
#define COMMAND_H

#include "models/include/Game.h"
#include "controllers/include/Controller.h"
#include "string.h"
#include <iostream>

class Command 
{
    public:
        Command(std::string title);
        std::string getTitle();
        virtual void execute() = 0;
    private:
        std::string title;  
};

#endif

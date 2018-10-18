#include "models/include/Mastermind.h"
#include <iostream>

Mastermind::Mastermind()
{
    this->logic = new Logic();
}

void Mastermind::play()
{
    OperationController *controller;
    do
    {
        controller = logic->getController();
        if(controller != NULL)
        {
            controller->control();
        }
    }while(controller != NULL);
}

int main()
{
    Mastermind mastermind;
    mastermind.play();

    return 0;
}


#include "models/include/Mastermind.h"
#include <iostream>

Mastermind::Mastermind()
{
    this->logic = new Logic();
    this->view = new MastermindView();
}

void Mastermind::play()
{
    Controller *controller;
    do
    {
        controller = logic->getController();
        if(controller != NULL)
        {
            /*view->interact(controller);*/
        }
    }while(controller != NULL);
}

int main()
{
    Mastermind mastermind;
    mastermind.play();

    return 0;
}


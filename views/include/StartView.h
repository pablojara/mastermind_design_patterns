#ifndef STARTVIEW_H
#define STARTVIEW_H


#include "controllers/include/StartController.h"


class StartView
{
    public:
        StartView();
        void interact(StartController *startController);
};

#endif
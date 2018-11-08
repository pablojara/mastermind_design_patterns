#include "controllers/include/StartController.h"
#include <iostream>

class SecretCombinationView
{
    public:
        SecretCombinationView(StartController *startController);
        void printSecretCombination();
    private:
        StartController *startController;
};
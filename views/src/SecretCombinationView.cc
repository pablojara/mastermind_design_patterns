#include "views/include/SecretCombinationView.h"

SecretCombinationView::SecretCombinationView(StartController *startController)
{
    this->startController = startController;
}

void SecretCombinationView::printSecretCombination()
{
    EnumColor *combination = startController->getSecretCombination()->getCombination();

    std::cout << "Secret combination: ";

    for(int i = 0; i < 4; i++)
    {
        std::cout << combination[i].getValue();
    }

    std::cout << std::endl;
}
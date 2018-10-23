#include "controllers/include/Logic.h"
#include "controllers/include/Controller.h"
#include "views/include/MastermindView.h"

class Mastermind
{

    public:
        Mastermind();
        void play();
        int main();

    private:
        Logic *logic;
        MastermindView *view;


};



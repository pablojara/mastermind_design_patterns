#include "ProposedCombination.h"

class Mastermind
{

    public:
        Mastermind();
        SecretCombination getSecretCombination();
        ProposedCombination *getProposedCombinations();
        void printBoard(int size);
        void play();
        int main();

    private:
        SecretCombination secretCombination;
        ProposedCombination *proposedCombinations;
        


};



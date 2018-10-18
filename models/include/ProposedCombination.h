#ifndef PROPOSEDCOMBINATION_H
#define PROPOSEDCOMBINATION_H


#include "Result.h"
#include "SecretCombination.h"

class ProposedCombination: public Combination
{
    public:
        ProposedCombination(); 
        EnumColor  *getCombination();
        void readCombination();
        void calculateResult(SecretCombination *secretCombination);
        void printCombination();
        void printResult();
        bool checkWin();

    private:
        Result result;



};

#endif
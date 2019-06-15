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
        void printResult();
        bool checkWin();
        void setCombination(EnumColor *combination);
        Result *getResult();


    private:
        Result *result;

};

#endif
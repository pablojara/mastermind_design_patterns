#include "State.h"
#include "SecretCombination.h"
#include "ProposedCombination.h"

class Game
{
    public:
        Game();
        void setState(State state);
        State getState();
        void setSecretCombination(SecretCombination secretCombination);      
        SecretCombination getSecretCombination();
        void setProposedCombinations(ProposedCombination *proposedCombinations);
        ProposedCombination *getProposedCombination();
        
    private:
        State state;
        SecretCombination secretCombination;
        ProposedCombination *proposedCombinations;
};
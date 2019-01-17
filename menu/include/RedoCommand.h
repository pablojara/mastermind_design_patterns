#include "menu/include/Command.h"

class RedoCommand: public Command
{
    public:
        RedoCommand();
        void execute();
};
#include "menu/include/Command.h"

class UndoCommand: public Command
{
    public:
        UndoCommand();
        void execute();

};
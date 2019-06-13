#ifndef REGISTRY_H
#define REGISTRY_H

#include "models/include/Game.h"
#include "models/include/GameMemento.h"

class Registry {
    
    public:
        Registry(Game *game);
        void registry();
        void undo();
        void redo();
        bool undoable();
        bool redoable();

    private:
        std::vector <GameMemento*> *mementoList;
        Game *game;
        int head;
};

#endif
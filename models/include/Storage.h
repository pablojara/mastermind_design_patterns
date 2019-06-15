#ifndef STORAGE_H
#define STORAGE_H

#include "models/include/Game.h"

class Storage {
    public:
        Storage(Game *game) {this->game = game;};
        virtual void save() = 0;
        virtual void load() = 0;
        virtual bool savedGameAvailable() = 0;

    protected:
        Game *game;

};

#endif
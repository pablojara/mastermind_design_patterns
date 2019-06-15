#ifndef STORAGETEXT_H
#define STORAGETEXT_H

#include "models/include/Storage.h"
#include "models/include/Game.h"

class StorageText : public Storage{
    public:
        StorageText(Game *game);
        void save();
        void load();
        bool savedGameAvailable();
};

#endif
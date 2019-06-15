#ifndef STORECONTROLLER_H
#define STORECONTROLLER_H

#include "controllers/include/Controller.h"
#include "models/include/StorageText.h"
#include "controllers/include/ControllerVisitor.h"


class StoreController: public Controller {
    public:
        StoreController(Game *game);
        void control();
        void accept(ControllerVisitor *controllerVisitor);
        void save();
        void load();
        bool isSaveable();
        bool isLoadable();
    private:
        StorageText *storage;

};

#endif
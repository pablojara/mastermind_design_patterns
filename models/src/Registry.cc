#include "models/include/Registry.h"

Registry::Registry(Game *game)
{
    this->game = game;
    this->mementoList = new std::vector <GameMemento*>();
    this->head = 0;
    //this->mementoList->insert(this->head, this->game->createMemento());
    //with push back
}

void Registry::registry()
{
    for(int i = 0; i < this->head; i++)
    {
        this->mementoList->erase(0);
    }
    this->head = 0;
    this->mementoList->insert(this->head, this->game->createMemento());
}

void Registry::undo() {
    this->head++;
    game->restoreMemento(this->mementoList->at(this->head));
}

void Registry::redo() {
    this->head--;
    game->restoreMemento(this->mementoList->at(this->head));

}

bool Registry::undoable(){
    return this->head < this->mementoList->size() -1;
}

bool Registry::redoable() {
    return this->head >= 1:
}
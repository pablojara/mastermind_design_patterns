#include "models/include/Registry.h"
#include <iostream>

Registry::Registry(Game *game)
{
    this->game = game;
    this->mementoList = new std::vector <GameMemento*>();
    this->head = 0;
}

void Registry::registry()
{
    for(int i = 0; i < this->head; i++)
    {
        this->mementoList->pop_back();
    }
    this->head = 0;
    this->mementoList->push_back(this->game->createMemento());
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
    return this->head >= 1;
}

void Registry::reset()
{
    this->mementoList = new std::vector <GameMemento*>();
    this->mementoList->push_back(this->game->createMemento());
    this->head = 0;
}
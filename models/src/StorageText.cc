#include "models/include/StorageText.h"

StorageText::StorageText(Game *game): Storage(game)
{

}

void StorageText::load()
{
    //storage to text logic (not needed to implement the bridge design pattern)
}

void StorageText::save()
{
    //storage to text logic (not needed to implement the bridge design pattern)
}

bool StorageText::savedGameAvailable()
{
    //storage to text logic (not needed to implement the bridge design pattern)
    return true;
}
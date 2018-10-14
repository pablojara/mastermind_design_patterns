#include "models/include/Result.h"
#include <iostream>
Result::Result()
{
    this->result = new int[4];
    for(int i = 0; i < 4; i ++)
    {
        result[i] = 0;
    }
}

void Result::setHit(int i)
{
    this->result[i] = 1;
}

bool Result::checkWin()
{
    for(int i = 0; i < 4; i++)
    {   
        if(this->result[i] == 0)
            return false;
    }
    return true;
}

void Result::printResult()
{
    std::cout << "Results: [ ";
    for(int i = 0; i < 4; i++)
    {
        std::cout << this->result[i] << " ";
    }
    std::cout << "]";
}
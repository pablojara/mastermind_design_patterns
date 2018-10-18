#ifndef RESULT_H
#define RESULT_H


class Result
{

    public:
        Result();
        int getResult();
        void setHit(int i);
        bool checkWin();
        void printResult();
    private:
        int *result;

};

#endif
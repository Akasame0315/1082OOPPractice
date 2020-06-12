#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <string>
using namespace std;

class Score {
public:
    Score();
    Score(string, int);

    void setName(string);
    string getName();

    void setMath(int);
    int getMath();

    void print();

private:
    string name;
    int math;


};
#endif
#include "Score.h"

int main()
{
    string n;
    int m;

    Score score1("John", 90);
    Score score2("Mary", 80);

    cin >> n >> m;

    score1.setName(n);
    score2.setMath(m);

    score1.print();
    score2.print();

    return 0;
}
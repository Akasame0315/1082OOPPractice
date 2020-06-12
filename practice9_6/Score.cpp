#include "Score.h"

Score::Score() {

}
Score::Score(string newName, int newMath) {
    name = newName;
    math = newMath;
}


void Score::setName(string newName) {
    name = newName;
}
string Score::getName() {
    return name;
}

void Score::setMath(int newMath) {
    math = newMath;
}
int Score::getMath() {
    return math;
}

void Score::print() {
    cout << getName() << " " << getMath() << endl;
}
#ifndef BMI_H
#define BMI_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Bmi {
public:
    Bmi(string, double, double);

    double getBmi();

private:
    string name;
    double weight;
    double height;

};
#endif
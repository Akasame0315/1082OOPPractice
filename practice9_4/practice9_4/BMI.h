#ifndef BMI_H
#define BMI_H
#include <iostream>
using namespace std;

class BMI {
public:
	BMI(double ,double);
	double getBMI();
private:
	string name;
	double weight;
	double height;
};
#endif
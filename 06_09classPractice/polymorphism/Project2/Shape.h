#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Shape {
public:
	Shape();
	Shape(string);

	void setColor(string);
	string getColor() const;

	virtual string toString() const = 0;
	virtual double getVolume() const = 0;

private:
	string color;
};
#endif
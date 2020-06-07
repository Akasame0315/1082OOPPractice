#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <sstream>
using namespace std;

class Shape {
public:
	Shape();
	Shape(const string&, bool);

	void setColor(const string&);
	string getColor() const;

	void setFilled(bool);
	bool isFilled() const;

	string toString() const;

	virtual double getArea() const = 0;

private:
	string color;
	bool filled;
};
#endif
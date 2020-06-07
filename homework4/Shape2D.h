#ifndef SHAPE2D_H
#define SHAPE2D_H
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;

class Shape2D {
public:
	Shape2D();
	Shape2D(const string&, bool);

	void setColor(const string&);
	string getColor() const;

	void setFilled(bool);
	bool isFilled() const;

	string toString() const;

	virtual double getPerimeter() const = 0;

private:
	string color;
	bool filled;
};
#endif
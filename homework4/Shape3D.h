#ifndef SHAPE3D_H
#define SHAPE3D_H
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;

class Shape3D {
public:
	Shape3D();
	Shape3D(const string&, bool);

	void setColor(const string&);
	string getColor() const;

	void setFilled(bool);
	bool isFilled() const;

	string toString() const;

	virtual double getVolume() const = 0;

private:
	string color;
	bool filled;
};
#endif
#ifndef CUBOID_H
#define CUBOID_H
#include "Shape.h"

class Cuboid : public Shape {
public:
	Cuboid();
	Cuboid(double, double, double);
	Cuboid(double, double, double, string);

	void setLength(double);
	double getLength() const;

	void setWidth(double);
	double getWidth() const;

	void setHeight(double);
	double getHeight() const;

	double getVolume() const;

	string toString()const;

private:
	double length;
	double width;
	double height;

};
#endif

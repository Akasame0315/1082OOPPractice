#ifndef CUBE_H
#define CUBE_H
#include "Shape3D.h"
#include "Shape.h"

class Cube : public Shape3D, public Shape {
public:
	Cube();
	Cube(double);
	Cube(double, string, bool);

	void setSide(double);
	double getSide() const;

	double getVolume() const;
	double getArea() const;

	string toString() const;

private:
	double side;

};
#endif
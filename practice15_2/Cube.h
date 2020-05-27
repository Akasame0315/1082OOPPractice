#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject {
public:
	Cube();
	Cube(double);
	Cube(double, string);

	void setLength(double);
	double getLength();

	double getVolume();
	double getArea();

private:
	double length;
};
#endif

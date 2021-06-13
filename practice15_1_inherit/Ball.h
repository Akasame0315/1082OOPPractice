#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h" 

class Ball : public GeometricObject {
public:
	Ball();
	Ball(double);
	Ball(double, string);

	void setRadius(double);
	double getRadius();

	double getVolume();
	double getArea();

private:
	double radius;
};
#endif
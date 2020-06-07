#ifndef BALL_H
#define BALL_H
#include "Shape3D.h"
#include "Shape.h"

class Ball : public Shape3D, public Shape{
public:
	Ball();
	Ball(double);
	Ball(double, string, bool);

	void setRadius(double);
	double getRadius() const;
	
	double getVolume() const;
	double getArea() const;

	string toString() const;

private:
	double radius;

};
#endif
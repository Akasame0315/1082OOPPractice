#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include "Shape.h"

class Circle : public Shape2D, public Shape {
public:
	Circle();
	Circle(double);
	Circle(double, string, bool);

	void setRadius(double);
	double getRadius() const;

	double getPerimeter() const;
	double getArea() const;

	string toString() const;

private:
	double radius;

};
#endif
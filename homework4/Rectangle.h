#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape2D.h"
#include "Shape.h"

class Rectangle : public Shape2D, public Shape {
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(double, double, string, bool);

	void setWidth(double);
	double getWidth() const;

	void setHeight(double);
	double getHeight() const;

	double getPerimeter() const;
	double getArea() const;

	string toString() const;

private:
	double width, height;
};
#endif
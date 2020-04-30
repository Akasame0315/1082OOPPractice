#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	double width;
	double height;

	Rectangle(double, double);
	double getArea();
	double getPerimeter();
};
#endif // !RECTANGLE_H
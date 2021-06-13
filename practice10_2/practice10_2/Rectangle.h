#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double, double);

	double getWidth();
	void setWidth(double);

	double getHeight();
	void setHeight(double);

	int getArea();
};
#endif
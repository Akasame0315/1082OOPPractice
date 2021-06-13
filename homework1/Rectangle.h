#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:

	double width, height;
	static int numOfRect;

public:

	Rectangle();
	Rectangle(double, double);

	void setWidth(double);
	double getWidth() const;

	void setHeight(double);
	double getHeight() const;

	double getArea() const;
	double getPerimeter() const;
	static int getNumOfRect();
};
#endif
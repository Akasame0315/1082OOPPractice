#include "Circle.h"

Circle::Circle() {

}
Circle::Circle(double newRadius) {
	this->radius = newRadius;
}
Circle::Circle(double newRadius, string newColor, bool fill) {
	this->radius = newRadius;
	Shape::setColor(newColor);
	Shape::setFilled(fill);
}

void Circle::setRadius(double newRadius) {
	this->radius = newRadius;
}
double Circle::getRadius() const {
	return radius;
}

double Circle::getPerimeter() const {
	return (2 * getRadius()) * 3.14159;
}
double Circle::getArea() const {
	return (getRadius() * getRadius()) * 3.14159;
}

string Circle::toString() const {
	stringstream ss;
	ss << "circle, " << getRadius() << ", ";

	return ss.str();
}
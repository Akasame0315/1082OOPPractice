#include "Rectangle.h"

Rectangle::Rectangle() {

}
Rectangle::Rectangle(double newWidth, double newHeight) {
	this->width = newWidth;
	this->height = newHeight;
}

Rectangle::Rectangle(double newWidth, double newHeight, string newColor, bool fill) {
	this->width = newWidth;
	this->height = newHeight;
	Shape::setColor(newColor);
	Shape::setFilled(fill);
}

void Rectangle::setWidth(double newWidth) {
	this->width = newWidth;
}
double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setHeight(double newHeight) {
	this->height = newHeight;
}
double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getPerimeter() const {
	return (getWidth() + getHeight()) * 2;
}
double Rectangle::getArea() const {
	return getWidth() * getHeight();
}

string Rectangle::toString() const {
	stringstream ss;

	ss << "Rectangle, " << getWidth() << ", " << getHeight() << ", ";

	return ss.str();
}
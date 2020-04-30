#include "Rectangle.h"

Rectangle::Rectangle(double newHeight, double newWidth) {
	height = newHeight;
	width = newWidth;
}
double Rectangle::getArea() {
	return width * height;
	}
double Rectangle::getPerimeter() {
	return (width + height) * 2;
	}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::getHeight() {
	return height;
}
void Rectangle::setWidth(double newWidth) {
	if (width >= 0)
		width = newWidth;
	else
		width = 0;
	}
void Rectangle::setHeight(double newHeight) {
	if (height >= 0)
		height = newHeight;
	else
		height = 0;
	}


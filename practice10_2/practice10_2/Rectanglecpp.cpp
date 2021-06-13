#include "Rectangle.h"

Rectangle::Rectangle(double newWidth, double newHeight) {
	width = newWidth;
	height = newHeight;
}

double Rectangle::getWidth() {
	return width;
}
void Rectangle::setWidth(double newWidth) {
	if (newWidth >= 0)
		width = newWidth;
	else
		width = 0;
}

double Rectangle::getHeight() {
	return height;
}
void Rectangle::setHeight(double newHeight) {
	if (newHeight >= 0)
		height = newHeight;
}

int Rectangle::getArea() {
	return width * height;
}
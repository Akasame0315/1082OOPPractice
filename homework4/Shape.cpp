#include "Shape.h"

Shape::Shape() {

}
Shape::Shape(const string& newColor, bool fill) {
	this->color = newColor;
	this->filled = fill;
}

void Shape::setColor(const string& newColor) {
	this->color = newColor;
}
string Shape::getColor() const {
	return color;
}

void Shape::setFilled(bool fill) {
	this->filled = fill;
}
bool Shape::isFilled() const {
	return filled;
}

string Shape::toString() const {
	stringstream ss;

	ss << getColor() << ", " << isFilled();

	return ss.str();
}
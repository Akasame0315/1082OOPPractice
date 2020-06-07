#include "Shape2D.h"

Shape2D::Shape2D() {

}
Shape2D::Shape2D(const string& newColor, bool fill) {
	this->color = newColor;
	this->filled = fill;
}

void Shape2D::setColor(const string& newColor) {
	this->color = newColor;
}
string Shape2D::getColor() const {
	return color;
}

void Shape2D::setFilled(bool fill) {
	this->filled = fill;
}
bool Shape2D::isFilled() const {
	return filled;
}

string Shape2D::toString() const {
	stringstream ss;

	ss << getColor() << ", " << isFilled();

	return ss.str();
}
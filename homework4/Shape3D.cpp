#include "Shape3D.h"

Shape3D::Shape3D() {

}
Shape3D::Shape3D(const string& newColor, bool fill) {
	this->color = newColor;
	this->filled = fill;
}

void Shape3D::setColor(const string& newColor) {
	this->color = newColor;
}
string Shape3D::getColor() const {
	return color;
}

void Shape3D::setFilled(bool fill) {
	this->filled = fill;
}
bool Shape3D::isFilled() const {
	return filled;
}

string Shape3D::toString() const {
	stringstream ss;

	ss << getColor() << ", " << isFilled();

	return ss.str();
}
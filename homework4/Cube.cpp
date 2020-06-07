#include "Cube.h"

Cube::Cube() {

}
Cube::Cube(double newSide) {
	this->side = newSide;
}

Cube::Cube(double newSide, string newColor, bool fill) {
	this->side = newSide;
	Shape::setColor(newColor);
	Shape::setFilled(fill);
}

void Cube::setSide(double newSide) {
	this->side = newSide;
}
double Cube::getSide() const {
	return side;
}

double Cube::getVolume() const {
	return getSide() * getSide() * getSide();
}
double Cube::getArea() const {
	return getSide() * getSide() * 6;
}

string Cube::toString() const {
	stringstream ss;
	ss << "cube: " << getSide() << ", ";

	return ss.str();
}
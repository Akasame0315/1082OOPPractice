#include "Cube.h"
#include "GeometricObject.h"

Cube::Cube() {
	length = 0;
}
Cube::Cube(double newLength) {
	length = newLength;
}
Cube::Cube(double newLength, string newColor) {
	length = newLength;
	setColor(newColor);
}

void Cube::setLength(double newLength) {
	length = newLength;
}
double Cube::getLength() {
	return length;
}

double Cube::getVolume() {
	return getLength() * getLength() * getLength();
}
double Cube::getArea() {
	return getLength() * getLength() * 6.0;
}
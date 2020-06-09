#include "Cuboid.h"

Cuboid::Cuboid() {

}
Cuboid::Cuboid(double newLength, double newWidth, double newHeight) {
	setLength(newLength);
	setWidth(newWidth);
	setHeight(newHeight);
}
Cuboid::Cuboid(double newLength, double newWidth, double newHeight, string newColor) {
	setLength(newLength);
	setWidth(newWidth);
	setHeight(newHeight);
	setColor(newColor);
}

void Cuboid::setLength(double newLength) {
	length = newLength;
}
double Cuboid::getLength() const {
	return length;
}

void Cuboid::setWidth(double newWidth) {
	width = newWidth;
}
double Cuboid::getWidth() const {
	return width;
}

void Cuboid::setHeight(double newHeight) {
	height = newHeight;
}
double Cuboid::getHeight() const {
	return height;
}

double Cuboid::getVolume() const {
	return (getLength() * getWidth() * getHeight());
}

string Cuboid::toString() const {
	stringstream ss;

	ss << "Cuboid:(" <<  setprecision(0) << fixed << getLength() << "," << getWidth() << "," << getHeight() << ")," << setprecision(1) << fixed << getVolume() << "," << getColor() << endl;

	return ss.str();
}
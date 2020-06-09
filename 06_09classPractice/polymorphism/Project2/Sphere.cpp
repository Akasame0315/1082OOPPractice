#include "Sphere.h"

Sphere::Sphere() {

}
Sphere::Sphere(double newRadius) {
	setRadius(newRadius);
}
Sphere::Sphere(double newRadius, string newColor) {
	setRadius(newRadius);
	setColor(newColor);
}

void Sphere::setRadius(double newRadius) {
	radius = newRadius;
}
double Sphere::getRadius() const {
	return radius;
}

double Sphere::getVolume() const {
	return (getRadius() * getRadius()* getRadius()) * 3.14159 * 4 / 3;
}

string Sphere::toString() const {
	stringstream ss;

	ss << "Sphere:(" << getRadius() << "),";

	return ss.str();
}
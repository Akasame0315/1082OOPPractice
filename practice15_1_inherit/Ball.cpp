#include "Ball.h"
#include "GeometricObject.h"

Ball::Ball() {
	radius = 0;
}
Ball::Ball(double newRadius) {
	radius = newRadius;
}
Ball::Ball(double newRadius, string newColor) {
	radius = newRadius;
	setColor(newColor);
}

void Ball::setRadius(double newRadius) {
	radius = newRadius;
}
double Ball::getRadius() {
	return radius;
}

double Ball::getVolume() {
	return 3.14159 * (getRadius() * getRadius() * getRadius()) * 4 / 3;
}
double Ball::getArea() {
	return 3.14159 * (getRadius() * getRadius()) * 4;
}
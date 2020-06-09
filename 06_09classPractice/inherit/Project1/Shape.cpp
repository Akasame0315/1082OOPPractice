#include "Shape.h"

Shape::Shape() {

}
Shape::Shape(string newColor) {
	setColor(newColor);
}

void Shape::setColor(string newColor) {
	color = newColor;
}

string Shape::getColor() const {
	return color;
}
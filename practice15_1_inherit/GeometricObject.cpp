#include "GeometricObject.h"

GeometricObject::GeometricObject() {

}

void GeometricObject::setColor(string newColor) {
	color = newColor;
}
string GeometricObject::getColor() {
	return color;
}
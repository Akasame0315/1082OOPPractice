#include "Ball.h"
#include "Circle.h"
#include "Cube.h"
#include "Rectangle.h"
#include "Shape.h"

void equalArea(Shape& s1, Shape& s2) {
	if (s1.getArea() == s2.getArea())
		cout << "==";
	else
		cout << "!=";

}
void equalVolume(Shape3D& s1, Shape3D& s2) {
	if (s1.getVolume() == s2.getVolume())
		cout << "==";
	else
		cout << "!=";
}
void equalPerimeter(Shape2D& s1, Shape2D& s2) {
	if (s1.getPerimeter() == s2.getPerimeter())
		cout << "==";
	else
		cout << "!=";
}
void display(const Shape& s) {
	cout << s.getColor() << ", " << setprecision(2) << fixed << s.getArea() << endl;
}

int main() {
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	cout << "circle, " << circle.getRadius() << ", ";
	display(circle);

	cout << "Rectangle, " << setprecision(0) << fixed << rectangle.getWidth() << ", " << rectangle.getHeight() << ", ";
	display(rectangle);

	cout << "ball, " << setprecision(0) << fixed << ball.getRadius() << ", ";
	display(ball);

	cout << "cube, " << setprecision(0) << fixed << cube.getSide() << ", ";
	display(cube);

	cout << "circle " << circle.getPerimeter() << " ";
	equalPerimeter(circle, rectangle);
	cout << " rectangle " << rectangle.getPerimeter() << endl;

	cout << "ball " << ball.getVolume() << " ";
	equalVolume(ball, cube);
	cout << "cube " << cube.getVolume() << endl;



}
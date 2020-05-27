#include "Ball.h"
#include "GeometricObject.h"
#include "Cube.h"
#include <iomanip>

void display(GeometricObject& g) {

	cout << setprecision(1) << fixed << ", area:" << g.getArea() << ", volume:" << g.getVolume() << ", color:" << g.getColor() << endl;
}

int main() {
	double radius, length;
	string ballColor, cubeColor;

	cin >> radius >> ballColor >> length >> cubeColor;

	Ball ball(radius, ballColor);
	Cube cube(length, cubeColor);

	cout << "Ball" << "\nradius:" << setprecision(1) << fixed << ball.getRadius();
	display(ball);

	cout << "Cube" << "\nlength:" << setprecision(1) << fixed << cube.getLength();
	display(cube);

	system("pause");
	return 0;
}
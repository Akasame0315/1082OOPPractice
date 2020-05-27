#include "Ball.h"
#include "GeometricObject.h"
#include "Cube.h"
#include <iomanip>

int main() {
	double radius, length;
	string ballColor, cubeColor;

	cin >> radius >> ballColor >> length >> cubeColor;

	Ball ball(radius, ballColor);
	Cube cube(length, cubeColor);

	cout << "Ball" << "\nradius:" << setprecision(1) << fixed << ball.getRadius() << ", area:" << ball.getArea() << ", volume:" << ball.getVolume() << ", color:" << ball.getColor() << endl;

	cout << "Cube" << "\nlength:" << setprecision(1) << fixed << cube.getLength() << ", area:" << cube.getArea() << ", volume:" << cube.getVolume() << ", color:" << cube.getColor() << endl;

	system("pause");
	return 0;
}
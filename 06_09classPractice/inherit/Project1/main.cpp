#include "Cuboid.h"
#include "Sphere.h"

int main() {
	double a, b, c, d;
	string scolor, ccolor;

	cin >> a >> scolor >> b >> c >> d >> ccolor;

	Sphere sphere(a, scolor);
	Cuboid cuboid(b, c, d, ccolor);

	cout << sphere.toString();
	cout << cuboid.toString();

	system("pause");
	return 0;

}
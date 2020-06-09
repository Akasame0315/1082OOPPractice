#include "Cuboid.h"
#include "Sphere.h"
void display(Shape& s) {
	cout << s.toString();
	cout << setprecision(1) << fixed << s.getVolume() << "," << s.getColor() << endl;
}


int main() {
	double a, b, c, d;
	string scolor, ccolor;

	cin >> a >> scolor >> b >> c >> d >> ccolor;

	Sphere sphere(a, scolor);
	Cuboid cuboid(b, c, d, ccolor);
	
	sphere.toString();
	display(sphere);
	
	cuboid.toString();
	display(cuboid);

	system("pause");
	return 0;

}
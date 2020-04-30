#include <iostream>
#include<iomanip>
using namespace std;

class Rectangle {
public:
	double width;
	double height;

	Rectangle() {
		width = 0;
		height = 0;
	}

	Rectangle(double newWidth, double newHeight) {
		width = newWidth;
		height = newHeight;
	}
	double getArea() {
		return width * height;
	}
	double getPerimeter() {
		return (width + height) * 2;
	}
};

int main()
{
	double w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle rectangle1(w1, h1);
	Rectangle rectangle2(w2, h2);
	Rectangle rectangle3(5.0, 2.5);

	cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
	cout << setprecision(2) << fixed << rectangle3.getArea() << " " << rectangle3.getPerimeter() << endl;

	system("pause");
	return 0;
}
#include "Rectangle.h"
#include <iostream>
using namespace std;

int sum(Rectangle rectArray[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + rectArray[i].getArea();
	}
	return sum;
}

int main() {
	Rectangle rectArray[5];

	double width, height;

	for (int i = 0; i < 5; i++) {
		cin >> width >> height;
		rectArray[i].setWidth(width);
		rectArray[i].setHeight(height);
	}
	for (int i = 0; i < 5; i++) {
		cout << rectArray[i].getArea() << " ";
	}
	cout << endl;

	cout << "Total: " << Rectangle::getNumOfRect() << " rectangles" << endl;

	cout << "Area: " << sum(rectArray, 5);


}
#include <iostream>
#include "Rectangle.h"
using namespace std;

int sum(Rectangle rectArray[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum = sum + rectArray[i].getArea();
	}
	return sum;
}

void printRectangleArray(Rectangle rectArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
	}
	cout << "Total: " << sum(rectArray, size) << endl;
}

int main() {
	double w1, w2, w3, w4;
	double h1, h2, h3, h4;

	cin >> w1 >> h1 >> w2 >> h2 >> w3 >> h3 >> w4 >> h4;

	Rectangle rec1(w1, h1);
	Rectangle rec2(w2, h2);
	Rectangle rec3(w3, h3);
	Rectangle rec4(w4, h4);

	Rectangle list[4] = {rec1, rec2, rec3, rec4};

	printRectangleArray(list, 4);

	system("pause");
	return 0;
} 
#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
public:
    double width;
    double height;

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
    double w1, h1, w2, h2;

    cin >> w1 >> h1 >> w2 >> h2;

    Rectangle rect1(w1, h1);
    Rectangle rect2(w2, h2);

    cout << setprecision(2) << fixed << rect1.getArea() << " " << rect1.getPerimeter() << endl;
    cout << setprecision(2) << fixed << rect2.getArea() << " " << rect2.getPerimeter() << endl;

    rect2.width = 2.5;
    rect2.height = 5.0;

    cout << setprecision(2) << fixed << rect2.getArea() << " " << rect2.getPerimeter() << endl;

    return 0;
}
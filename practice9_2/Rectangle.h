#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    double width;
    double height;

    Rectangle(double newWidth, double newHeight);

    double getArea();

    double getPerimeter();
};
#endif
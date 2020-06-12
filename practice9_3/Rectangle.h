#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    
    Rectangle(double newWidth, double newHeight);
    
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    
    double getArea();
    
    double getPerimeter();
    
private:
    double width;
    double height;
    
};
#endif
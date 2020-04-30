#ifndef Rectangle_h
#define Rectangle_h
class Rectangle {
public:
	Rectangle(double, double );
	double getArea();
	double getPerimeter();
	double getWidth();
	double getHeight();
	void setWidth(double);
	void setHeight(double);

private:
	double width;
	double height;
};
#endif
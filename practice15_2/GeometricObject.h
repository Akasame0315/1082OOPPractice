#ifndef GeometricObject_H
#define GeometricObject_H
#include <iostream>
using namespace std;

class GeometricObject {
public:
	GeometricObject();

	void setColor(string);
	string getColor();

	virtual double getVolume() = 0;;
	virtual double getArea() = 0;

private:
	string color;

};
#endif


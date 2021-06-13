#ifndef GeometricObject_H
#define GeometricObject_H
#include <iostream>
using namespace std;

class GeometricObject {
public:
	GeometricObject();

	void setColor(string);
	string getColor();

private:
	string color;

};
#endif

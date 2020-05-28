#include <iostream>
#include <iomanip>
#include<string>
#include "BMI.h"
using namespace std;

int main()
{
	string name;
	double w,h;
	cin >> name >> w >> h;
	BMI bmi1(w, h);

	cout << setprecision(2) << fixed << name << " " << bmi1.getBMI() << endl;

	system("pause");
	return 0;
}
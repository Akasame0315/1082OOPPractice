#include "BMI.h"

int main()
{
	string name;
	double w, h;

	cin >> name >> w >> h;

	Bmi bmi(name, w, h);

	cout << name << " " << setprecision(2) << fixed << bmi.getBmi() << endl;


	return 0;
}
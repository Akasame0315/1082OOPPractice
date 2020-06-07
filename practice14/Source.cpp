#include "Rational.h"
#include <iostream>

int main() {
	Rational r1(2, 3);
	Rational r2(5, 7);
	Rational r3(3, 5);
	Rational r4(7, 2);
	Rational r5(5, 6);
	Rational r6(5, 7);

	Rational r7 = ++((r2.multiply(r3)).add(r1));
	Rational r8 = --((r4.subtract(r5)).divide(r6));

	cout << "first=" << ((r2.multiply(r3)).add(r1)).toString() << endl;

	cout << "second=" << ((r4.subtract(r5)).divide(r6)).toString() << endl;

	cout << "++first=" << r7.toString() << endl;

	cout << "--second=" << r8.toString() << endl;

	if (r7 < r8)
		cout << r7.toString() << "<" << r8.toString() << endl;
	/*else if (r7 == r8)
		cout << r7.toString() << "=" << r8.toString() << endl;
	else
		cout << r7.toString() << ">" << r8.toString() << endl;*/

	system("pause");
	return 0;
}
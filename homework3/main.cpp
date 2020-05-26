#include "Complex.h"

int main() {

	//分開寫成物件
	/*Complex complex1(3, 4);
	Complex complex2(2, -4);
	Complex complex3(3, -1);
	Complex complex4(4, 3);
	Complex complex5(5, 6);*/

	//用陣列寫成物件
	Complex complex[] = { Complex(3, 4), Complex(2, -4), Complex(3, -1), Complex(4, 3), Complex(5, 6) };

	Complex first = complex[0]+(complex[1]*complex[2]);
	Complex second = complex[3] - complex[4];

	cout << "first="<< first.toString() << endl;
	cout << "second=" << second.toString() << endl;

	//++跟--要寫在輸出後面，不然原本的first和second會被改掉
	Complex xFirst = ++first;
	Complex xSecond = --second;

	cout << "++first=" << xFirst.toString() << endl;
	cout << "--second=" << xSecond.toString() << endl;

	//寫在前面的寫法
	/*Complex xFirst = first++;
	Complex xSecond = second--;

	cout << "first=" << xFirst.toString() << endl;
	cout << "second=" << xSecond.toString() << endl;

	cout << "++first=" << first.toString() << endl;
	cout << "--second=" << second.toString() << endl;*/

	system("pause");
	return 0;
}
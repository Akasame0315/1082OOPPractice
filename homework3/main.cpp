#include "Complex.h"

int main() {

	//���}�g������
	/*Complex complex1(3, 4);
	Complex complex2(2, -4);
	Complex complex3(3, -1);
	Complex complex4(4, 3);
	Complex complex5(5, 6);*/

	//�ΰ}�C�g������
	Complex complex[] = { Complex(3, 4), Complex(2, -4), Complex(3, -1), Complex(4, 3), Complex(5, 6) };

	Complex first = complex[0]+(complex[1]*complex[2]);
	Complex second = complex[3] - complex[4];

	//�ˬdcomplex�H��cpp�ɦ��S���w�q�L�X���T���t��
	/*for (int i = 0; i < 5; i++) {
		cout << "complex" << i << "= " << complex[i] << endl;
	}*/

	cout << "first="<< first << endl;
	cout << "second=" << second.toString() << endl;

	//++��--�n�g�b��X�᭱�A���M�쥻��first�Msecond�|�Q�ﱼ
	++first;
	--second;

	cout << "++first=" << first.toString() << endl;
	cout << "--second=" << second.toString() << endl;

	//�g�b�e�����g�k
	/*Complex xFirst = first++;
	Complex xSecond = second--;

	cout << "first=" << xFirst.toString() << endl;
	cout << "second=" << xSecond.toString() << endl;

	cout << "++first=" << first.toString() << endl;
	cout << "--second=" << second.toString() << endl;*/

	system("pause");
	return 0;
}
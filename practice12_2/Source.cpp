#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

	//��J9�Ӧr��
	char c;

	Stack <char> bottle;

	for (int i = 0; i < 9; i++) {
		cin >> c;

		bottle.push(c);

		//cout << "bottle.pop: " << bottle.pop() << endl;
	}

	int n1, symbol, n2, ans = 0;
	//7-9/9-3*2
	//�������Ʀr�� ACSII��(char)
	//�ɥR�G�Ʀr��ASCII�� -48 �A ASCII: �[��43 �B �45 �B ����42 �B ����47
	for (int i = 0; i < 4; i++) {
		n1 = bottle.pop() - 48;
		symbol = bottle.pop();
		n2 = bottle.pop() - 48;
		//cout << "n1, symbol, n2: " << n1 << " " << symbol << " " << n2 << endl;
		//�i�H�Q�Φ���h�ˬd

		//���X�Ӫ����Ǭ� >> n1, symbol, n2 �A �ҥH�p�⬰ n2 (+-*/) n1�C

		if (symbol == 43) ans = n2 + n1;
		else if (symbol == 45) ans = n2 - n1;
		else if (symbol == 42) ans = n2 * n1;
		else if (symbol == 47) ans = n2 / n1;
		

		//�A����J����
		bottle.push(ans + 48);
		//�ѩ�o����J���Oint �A �ҥH�D�ʥ[�J48
		cout << ans << endl;

	}

	system("pause");
	return 0;

}
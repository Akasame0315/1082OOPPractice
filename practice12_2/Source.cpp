#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

	//輸入9個字元
	char c;

	Stack <char> bottle;

	for (int i = 0; i < 9; i++) {
		cin >> c;

		bottle.push(c);

		//cout << "bottle.pop: " << bottle.pop() << endl;
	}

	int n1, symbol, n2, ans = 0;
	//7-9/9-3*2
	//給予的數字為 ACSII值(char)
	//補充：數字的ASCII需 -48 ， ASCII: 加為43 、 減為45 、 乘為42 、 除為47
	for (int i = 0; i < 4; i++) {
		n1 = bottle.pop() - 48;
		symbol = bottle.pop();
		n2 = bottle.pop() - 48;
		//cout << "n1, symbol, n2: " << n1 << " " << symbol << " " << n2 << endl;
		//可以利用此串去檢查

		//拿出來的順序為 >> n1, symbol, n2 ， 所以計算為 n2 (+-*/) n1。

		if (symbol == 43) ans = n2 + n1;
		else if (symbol == 45) ans = n2 - n1;
		else if (symbol == 42) ans = n2 * n1;
		else if (symbol == 47) ans = n2 / n1;
		

		//再次放入答案
		bottle.push(ans + 48);
		//由於這次放入的是int ， 所以主動加入48
		cout << ans << endl;

	}

	system("pause");
	return 0;

}
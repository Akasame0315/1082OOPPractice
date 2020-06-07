#include <queue> //先進先出
#include <iostream>
using namespace std;

int main() {
	queue<char> Q;

	for (int i = 0; i < 7; i++) {
		char c;
		cin >> c;
		//把c推進Q
		Q.push(c);
	}

	for (int i = 0; i < 3; i++) {
		//+11-62*
		int symbol = Q.front();
		cout << "symbol: " << symbol << endl;
		Q.pop();//把符號pop掉

		int n1 = Q.front() - 48;
		cout << "n1: " << n1 << endl;
		Q.pop();//把前面數字pop掉

		int n2 = Q.front() - 48;
		cout << "n2: " << n2 << endl;
		Q.pop();

		int ans = 0;
		//用switch判斷+-*/
		switch (symbol) {
			case '+':
				ans = n1 + n2;
				break;
			case '-':
				ans = n1 - n2;
				break;
			case '*':
				ans = n1 * n2;
				break;
			case '/':
				ans = n1 / n2;
				break;
		}
		cout << ans << endl;
		//把計算後的答案push回Q
		Q.push(ans + 48);
	}

	system("pause");
	return 0;
}
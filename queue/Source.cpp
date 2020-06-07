#include <queue> //���i���X
#include <iostream>
using namespace std;

int main() {
	queue<char> Q;

	for (int i = 0; i < 7; i++) {
		char c;
		cin >> c;
		//��c���iQ
		Q.push(c);
	}

	for (int i = 0; i < 3; i++) {
		//+11-62*
		int symbol = Q.front();
		cout << "symbol: " << symbol << endl;
		Q.pop();//��Ÿ�pop��

		int n1 = Q.front() - 48;
		cout << "n1: " << n1 << endl;
		Q.pop();//��e���Ʀrpop��

		int n2 = Q.front() - 48;
		cout << "n2: " << n2 << endl;
		Q.pop();

		int ans = 0;
		//��switch�P�_+-*/
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
		//��p��᪺����push�^Q
		Q.push(ans + 48);
	}

	system("pause");
	return 0;
}
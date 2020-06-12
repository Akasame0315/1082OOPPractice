#include "Score.h"

int main()
{
	string n1, n2;
	int m1, m2;

	Score score1("John", 90);
	Score score2("Mary", 80);

	cin >> n1 >> m1 >> n2 >> m2;

	score1.setName(n1);
	score2.setMath(m2);

	cout << score1.getName() << " " << score1.getMath() << endl;
	cout << score2.getName() << " " << score2.getMath() << endl;

	return 0;
}
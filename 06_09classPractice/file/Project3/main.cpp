#include "Teacher.h"

int main() {
	string n1, n2, n3, n4;
	int a1, a2, a3, a4;
	double s1, s2, s3, s4;

	ofstream out;
	out.open("Teacher.txt", ios::out | ios::app);

	cin >> n1 >> a1 >> s1;
	Teacher t1(n1, a1, s1);
	t1.writeToFile(out);

	cin >> n2 >> a2 >> s2;
	Teacher t2(n2, a2, s2);
	t2.writeToFile(out);

	cin >> n3 >> a3 >> s3;
	Teacher t3(n3, a3, s3);
	t3.writeToFile(out);

	cin >> n4 >> a4 >> s4;
	Teacher t4(n4, a4, s4);
	t4.writeToFile(out);

	out.close();

	ifstream in;
	in.open("Teacher.txt", ios::in);

	t1.readFromFile(in);
	t2.readFromFile(in);
	t3.readFromFile(in);
	t4.readFromFile(in);

	in.close();

	system("pause");
	return 0;
}
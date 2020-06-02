#include "StuCard.h"
#include <fstream>

int main() {
	ifstream input("stuCard.txt");

	string name1 = "Jerry";
	bool sex1 = 1;
	double score1[] = { 80.0, 70.0, 90.0 };

	input >> name1 >> sex1 >> score1[0] >> score1[1] >> score1[2];
	cout << name1 << " " << sex1 << " " << setprecision(1) << fixed << score1[0] << " " << score1[1] << " " << score1[2] << endl;

	string name2 = "John";
	bool sex2 = 1;
	double score2[] = { 85.0, 77.0, 95.0 };

	input >> name2 >> sex2 >> score2[0] >> score2[1] >> score2[2];
	cout << name2 << " " << sex2 << " " << setprecision(1) << fixed << score2[0] << " " << score2[1] << " " << score2[2] << endl;

	string name3 = "Mary";
	bool sex3 = 0;
	double score3[] = { 83.0, 75.0, 70.0 };

	input >> name3 >> sex3 >> score3[0] >> score3[1] >> score3[2];
	cout << name3 << " " << sex3 << " " << setprecision(1) << fixed << score3[0] << " " << score3[1] << " " << score3[2] << endl;

	string name4 = "Tom";
	bool sex4 = 1;
	double score4[] = { 73.0, 95.0, 67.0 };

	input >> name4 >> sex4 >> score4[0] >> score4[1] >> score4[2];
	cout << name4 << " " << sex4 << " " << setprecision(1) << fixed << score4[0] << " " << score4[1] << " " << score4[2] << endl;

	string name5 = "Claire";
	bool sex5 = 0;
	double score5[] = { 88.0, 79.0, 71.0 };

	input >> name5 >> sex5 >> score5[0] >> score5[1] >> score5[2];
	cout << name5 << " " << sex5 << " " << setprecision(1) << fixed << score5[0] << " " << score5[1] << " " << score5[2] << endl;

	input.close();

	/*double score1[] = { 80.0, 70.0, 90.0 };
	stuCard stu1("Jerry", 1, score1);

	double score2[] = { 85.0, 77.0, 95.0 };
	stuCard stu2("John", 1, score2);

	stu1.writeToFile;
	stu1.readToFile;*/

	system("pause");
	return 0;
}
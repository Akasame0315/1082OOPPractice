#include "Date.h"
#include "StuCard.h"

double* classAver(StuCard StuCard[], int size) {
	double* aver1 = new double();
	double sco1 = 0;
	
	for (int i = 0; i < 5; i++) {
		sco1 += StuCard[i].getScore(size);
	}

	*aver1 = sco1 / 5;
	return aver1;

}

int main() {
	double score1[] = { 80.0,70.0,90.0 };
	double score2[] = { 85.0, 77.0, 95.0 };
	double score3[] = { 83.0, 75.0, 70.0 };
	double score4[] = { 73.0, 95.0, 67.0 };


	StuCard stu1("Jerry", 1, score1, Date(3, 20, 1997));
	StuCard stu2("John", 1, score2, Date(5,20,1995));
	StuCard stu3("Mary", 0, score3, Date(2,18,2003));
	StuCard stu4("Tom", 1, score4, Date(11,8,2003));

	string name;
	bool sex;
	double s1, s2, s3;
	int month, day, year;

	cin >> name >> sex >> s1 >> s2 >> s3 >> month >> day >> year;

	Date date5(month, day, year);
	double score5[] = { s1,s2,s3 };

	StuCard stu5(name, sex, score5, date5);

	StuCard StuAry[] = { stu1,stu2,stu3,stu4,stu5 };

	StuAry[0].printCard();
	StuAry[1].printCard();
	StuAry[2].printCard();
	StuAry[3].printCard();
	StuAry[4].printCard();

	cout <<"Average: "<< *classAver(StuAry, 0) << ", " << *classAver(StuAry, 1) << ", " << *classAver(StuAry, 2) << endl;

	system("pause");
	return 0;
}
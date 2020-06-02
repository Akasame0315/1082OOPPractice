#ifndef STUCARD_H
#define STUCARD_H
#include "Date.h"
#include <iostream>
using namespace std;

class StuCard {
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthday;

public:
	StuCard(string, bool, double newAry[], Date);

	void setName(string);
	string getName() const;

	void setSex(bool);
	bool getSex() const;

	void setScore(int size, double newScoreAry[]);
	double getScore(int) const;

	void setDate(Date);
	Date getDate() const;

	double average();
	int getAge(int) const;

	void printCard();
};
#endif



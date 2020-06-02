#ifndef STUCARD_H
#define STUCARD_H
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

class stuCard {
public:
	stuCard(string, bool, double newAry[]);

	void setName(string);
	string getName();

	void setSex(bool);
	bool getSex();

	void setScore(int, double newAry[]);
	double getScore(int);

	void writeToFile(istream& in);
	void readToFile(ostream& out);

private:
	string name;
	bool sex;
	double scoreAry[3];
};
#endif

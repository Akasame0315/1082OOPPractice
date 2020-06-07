#ifndef STUCARD_H
#define STUCARD_H
#include <fstream>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class StuCard {
public:
	StuCard(string, bool, double[3]);

	void setName(string);
	string getName();

	void setSex(bool);
	bool getSex();

	void setScore(int, double[3]);
	double getScore(int);

	//¼g¤J
	void writeToFile(ofstream&);
	//ÅªÀÉ
	void readFromFile(ifstream&);

private:
	string name;
	bool sex;
	double scoreAry[3];
};
#endif
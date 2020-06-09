#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

class Teacher {
public:
	Teacher();
	Teacher(string, int, double);

	void setName(string);
	void setAge(int);
	void setScore(double);
	
	string getName() const;
	int getAge() const;
	double getScore() const;

	void readFromFile(ifstream&);
	void writeToFile(ofstream&);


private:
	string name;
	int age;
	double score;

};
#endif

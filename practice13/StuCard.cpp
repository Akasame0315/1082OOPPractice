#include "StuCard.h"

stuCard::stuCard(string newName, bool newSex, double newAry[]) {
	this->name = newName;
	this->sex = newSex;
	scoreAry[0] = newAry[0];
	scoreAry[1] = newAry[1];
	scoreAry[2] = newAry[2];
}

void stuCard::setName(string newName) {
	name = newName;
}
string stuCard::getName() {
	return name;
}

void stuCard::setSex(bool newSex) {
	sex = newSex;
}
bool stuCard::getSex() {
	return sex;
}

void stuCard::setScore(int size, double newAry[]) {
	scoreAry[size] = newAry[size];
}
double stuCard::getScore(int size) {
	return scoreAry[size];
}

void stuCard::writeToFile(istream& in) {
	string n;
	bool s;
	double ary[3];
	
	in >> n >> s >> ary[0] >> ary[1] >> ary[2];
}
void stuCard::readToFile(ostream& out) {
	out << getName() << " " << getSex() << " ";
	for (int i = 0; i < 3; i++) {
		out << getScore(i) << " ";
	}
	out << endl;

	cout << getName() << " " << getSex() << " " << getScore(0) << getScore(1) << getScore(2) << endl;
}
#include "StuCard.h"

StuCard::StuCard(string newName, bool newSex, double newAry[3]) {
	this->name = newName;
	this->sex = newSex;
	for (int i = 0; i < 3; i++) {
		scoreAry[i] = newAry[i];
	}
}

void StuCard::setName(string newName) {
	this->name = newName;
}
string StuCard::getName() {
	return name;
}

void StuCard::setSex(bool newSex) {
	this->sex = newSex;
}
bool StuCard::getSex() {
	return sex;
}

void StuCard::setScore(int i, double newAry[3]) {
	scoreAry[i] = newAry[i];
}
double StuCard::getScore(int i) {
	return scoreAry[i];
}

void StuCard::writeToFile(ofstream& out) {
	out << name << " " << sex << " " << setprecision(1) << fixed << scoreAry[0] << " " << scoreAry[1] << " " << scoreAry[2] << endl;
}
void StuCard::readFromFile(ifstream& in) {
	string n;
	bool s;
	double g[3];
	
	in >> n >> s >> g[0] >> g[1] >> g[2];

	cout << n << " " << s << " " << setprecision(1) << fixed << g[0] << " " << g[1] << " " << g[2] << endl;
}
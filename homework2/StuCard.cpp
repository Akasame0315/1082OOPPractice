#include "StuCard.h"
#include <iomanip>

StuCard::StuCard(string newName, bool newSex, double newAry[], Date newBirthday) {
	name = newName;
	sex = newSex;
	scoreAry[0] = newAry[0];
	scoreAry[1] = newAry[1];
	scoreAry[2] = newAry[2];
	birthday = newBirthday;

}

void StuCard::setName(string newName) {
	name = newName;
}
string StuCard::getName() const {
	return name;
}

void StuCard::setSex(bool newSex) {
	sex = newSex;
}
bool StuCard::getSex() const {
	return sex;
}

void StuCard::setScore(int size, double newScoreAry[]) {
	for (int i = 0; i < size; i++) {
		scoreAry[i] = newScoreAry[i];
	}
}


double StuCard::getScore(int i) const {
	return scoreAry[i];
}

void StuCard::setDate(Date newBirthday) {
	birthday = newBirthday;
}
Date StuCard::getDate() const {
	return birthday;
}

double StuCard::average() {
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		sum = sum + getScore(i);
	}
	return sum / 3.0;
}
int StuCard::getAge(int birthYear) const {
	return 2020 - birthYear;
}

void StuCard::printCard() {
	cout << getName() << ", " << getSex() << ", ";
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << getScore(i) << ", ";
	}
	cout << birthday.getMonth() << "/" << birthday.getDay() << "/" << birthday.getYear() << ", ";
	cout << average() << ", ";
	cout << getAge(birthday.getYear()) << endl;
}
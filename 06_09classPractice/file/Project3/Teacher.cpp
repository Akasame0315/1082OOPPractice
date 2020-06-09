#include "Teacher.h"

Teacher::Teacher() {

}
Teacher::Teacher(string newName, int newAge, double newScore) {
	setName(newName);
	setAge(newAge);
	setScore(newScore);
}

void Teacher::setName(string newName) {
	name = newName;
}
void Teacher::setAge(int newAge) {
	age = newAge;
}
void Teacher::setScore(double newScore) {
	score = newScore;
}

string Teacher::getName() const {
	return name;
}
int Teacher::getAge() const {
	return age;
}
double Teacher::getScore() const {
	return score;
}

void Teacher::readFromFile(ifstream& in) {
	string n;
	int a;
	double s;

	in >> n >> a >> s;
	cout << getName() << " " << getAge() << setprecision(1) << fixed << getScore() << endl;
}
void Teacher::writeToFile(ofstream& out) {
	out << name << " " << age << setprecision(1) << fixed << score << endl;
}
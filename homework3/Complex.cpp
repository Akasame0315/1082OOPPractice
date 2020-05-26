#include "Complex.h"
#include <sstream>

Complex::Complex() {
	intNumber = 0;
	complexNumber = 0;
}
Complex::Complex(int newIntNum, int newComNum) {
	intNumber = newIntNum;
	complexNumber = newComNum;
}

int Complex::getIntNumber() const {
	return intNumber;
}
int Complex::getComplexNumber() const {
	return complexNumber;
}

Complex Complex::add(Complex secondComplexNumber) const {
	int i = intNumber + secondComplexNumber.getIntNumber();
	int c = complexNumber + secondComplexNumber.getComplexNumber();

	return Complex(i, c);
}
Complex Complex::subtract(Complex secondComplexNumber) const {
	int i = intNumber - secondComplexNumber.getIntNumber();
	int c = complexNumber - secondComplexNumber.getComplexNumber();

	return Complex(i, c);
}
Complex Complex::multiply(Complex secondComplexNumber) const {
	/*int i1 = intNumber * secondComplexNumber.intNumber;
	int i2 = complexNumber * secondComplexNumber.complexNumber * (-1);
	int i = i1 + i2;

	int c1 = intNumber * secondComplexNumber.complexNumber;
	int c2 = complexNumber * secondComplexNumber.intNumber;
	int c = c1 + c2;

	return Complex(i, c);*/

	int i = (intNumber * secondComplexNumber.intNumber) + (complexNumber * secondComplexNumber.complexNumber * (-1));
	int c = (intNumber * secondComplexNumber.complexNumber) + (complexNumber * secondComplexNumber.intNumber);

	return Complex(i, c);

}
string Complex::toString() const {
	stringstream ss;

	ss << intNumber;
	ss << complexNumber << "i";

	return ss.str();
}

Complex& Complex::operator+=(const Complex& secondComplex) {
	*this = add(secondComplex);
	return *this;
}
Complex& Complex::operator-=(const Complex& secondComplex) {
	*this = subtract(secondComplex);
	return *this;
}
Complex& Complex::operator*=(const Complex& secondComplex) {
	*this = multiply(secondComplex);
	return *this;
}

int& Complex::operator[](int index) {
	if (index == 0)
		return intNumber;
	else
		return complexNumber;
}

Complex& Complex::operator++() {
	intNumber = intNumber + 1;
	return *this;
}
Complex& Complex::operator--() {
	intNumber = intNumber - 1;
	return *this;
}

Complex Complex::operator++(int dummy) {
	Complex temp(intNumber, complexNumber);
	intNumber = intNumber + 1;
	return temp;
}
Complex Complex::operator--(int dummy) {
	Complex temp(intNumber, complexNumber);
	intNumber = intNumber - 1;
	return temp;
}

Complex Complex::operator+() {
	return *this;
}
Complex Complex::operator-() {
	return Complex(-intNumber, -complexNumber);
}

ostream& operator<<(ostream& out, const Complex& complex) {
	out << complex.intNumber << "+" << complex.complexNumber;
	return out;
}
istream& operator>>(istream& in, Complex& complex) {
	in >> complex.intNumber;
	in >> complex.complexNumber;
	return in;
}

Complex operator+(const Complex& c1, const Complex& c2) {
	return c1.add(c2);
}
Complex operator-(const Complex& c1, const Complex& c2) {
	return c1.subtract(c2);
}
Complex operator*(const Complex& c1, const Complex& c2) {
	return c1.multiply(c2);
}
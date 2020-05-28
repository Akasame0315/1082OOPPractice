#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;

class Complex {
public:
	Complex();
	Complex(int, int);

	int getIntNumber() const;
	int getComplexNumber() const;

	Complex add(Complex) const;
	Complex subtract(Complex) const;
	Complex multiply(Complex) const;
	string toString() const;
	
	Complex& operator+=(const Complex& secondComplex);
	Complex& operator-=(const Complex& secondComplex);
	Complex& operator*=(const Complex& secondComplex);

	int& operator[](int index);

	Complex& operator++();
	Complex& operator--();

	Complex operator++(int dummy);
	Complex operator--(int dummy);

	Complex operator+();
	Complex operator-();

	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);


private:
	int intNumber;
	int complexNumber;
};

Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);

#endif
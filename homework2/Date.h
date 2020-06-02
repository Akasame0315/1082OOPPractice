#ifndef DATE_H
#define DATE_H

class Date {
private:
	int month, year, day;

public:
	Date();
	Date(int, int, int);

	void setMonth(int);
	int getMonth() const;

	void setDay(int);
	int getDay() const;

	void setYear(int);
	int getYear() const;

};
#endif

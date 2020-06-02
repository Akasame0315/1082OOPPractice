#include "Date.h"

Date::Date() {
	month = 1;
	day = 1;
	year = 1990;
}

Date::Date(int newMonth, int newDay, int newYear) {
	month = newMonth;
	day = newDay;
	year = newYear;
}

void Date::setMonth(int newMonth) {
	month = newMonth;
}
int Date::getMonth() const {
	return month;
}

void Date::setDay(int newDay) {
	day = newDay;
}
int Date::getDay() const {
	return day;
}

void Date::setYear(int newYear) {
	year = newYear;
}
int Date::getYear() const {
	return year;
}
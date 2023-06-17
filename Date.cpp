#include"Date.h"
void Date::setDate(int tday, int tmon, int tyear)
{
	day = tday;
	month = tmon;
	year = tyear;
}
void Date::setDay(int d)
{
	day = d;
}
void Date::setMonth(int m)
{
	month = m;
}
void Date::setYear(int y)
{
	year = y;
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
void Date::displaydate()
{
	cout << day << "-" << month << "-" << year << endl;
}
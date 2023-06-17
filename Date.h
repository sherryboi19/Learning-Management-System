#pragma once
#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int tday = 0, int tmon = 0, int tyear = 0) :day(tday), month(tmon), year(tyear)
	{
	}
	void setDate(int tday, int tmon, int tyear);
	
	void setDay(int d);
	
	void setMonth(int m);
	
	void setYear(int y);
	
	int getDay();
	
	int getMonth();
	
	int getYear();
	
	void displaydate();
	
	~Date()
	{

	}
};
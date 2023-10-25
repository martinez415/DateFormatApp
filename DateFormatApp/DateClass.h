#pragma once
#include <string>
#include <iostream>
using namespace std;

class DateClass
{
private:
	int Month;
	int Day;
	int Year;
	string MonthName();

public:
	DateClass(int, int, int);
	void PrintMonth();
};


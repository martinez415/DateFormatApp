#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class DateClass
{
private:
	int Month;
	int Day;
	int Year;
	string MonthName();

public:
	DateClass(int m, int d, int y);
	void PrintMonth();
};


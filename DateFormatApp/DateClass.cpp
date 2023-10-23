#include "DateClass.h"
#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

DateClass::DateClass(int m, int d, int y) {
	this->Month = m;
	this->Day = d;
	this->Year = y;
}


string DateClass::MonthName() {
	// Array of months
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	// For loop to loop through the array, it will return the month based upon the Month integer - 1, this is to get the correct index number
	// User enters 1 - 12 while index is 0 - 11
	for (int x = 1; x < 12; x++) {
		return months[Month - 1];
	}
}


void DateClass::PrintMonth() {
	cout << "You've entered: " << MonthName() << " " << Day << ", " << Year << endl;
}
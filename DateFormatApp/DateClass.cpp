#include "DateClass.h"
#pragma once
#include <string>
#include <iostream>
using namespace std;

// Constructor
DateClass::DateClass(int m, int d, int y) {
	this->Month = m;
	this->Day = d;
	this->Year = y;
}

// Method to obtain string representation of Month
string DateClass::MonthName() {
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	return months[Month - 1];
	
}

// Print out to display date
void DateClass::PrintMonth() {
	// Call the MonthName() method to return the string representation of the month
	cout << "You've entered: " << this->MonthName() << " " << this->Day << ", " << this->Year << endl;
}

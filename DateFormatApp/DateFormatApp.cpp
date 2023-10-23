#include <string>
#include <iostream>
#include <iomanip>
#include "DateClass.h";
using namespace std;

int main()
{ 
    cout << "Date Format App\n================" << endl;

    int month;
    int day;
    int year;

    cout << "Enter the month as an integer: ";
    cin >> month;
    cout << "Enter the day as an integer: ";
    cin >> day;
    cout << "Enter the year as an integer: ";
    cin >> year;

    bool validateDate = false;

    while (!validateDate) {

        if (month > 12) {
            cout << "Error! Invalid Month... Please re-enter: ";
            cin >> month;
            DateClass date(month, day, year);
            date.PrintMonth();
            validateDate = true;
        }
        if (month == 2 && day > 28) {
            cout << "Error! Invalid date... Please re-enter: ";
            cin >> day;
            DateClass date(month, day, year);
            date.PrintMonth();
            validateDate = true;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11 && day > 30) {
            cout << "Error! Invalid date... Please re-enter: ";
            cin >> day;
            DateClass date(month, day, year);
            date.PrintMonth();
            validateDate = true;
        }
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 11 && day > 31) {
            cout << "Error! Invalid date... Please re-enter: ";
            cin >> day;
            DateClass date(month, day, year);
            date.PrintMonth();
            validateDate = true;
        }
        else {
            DateClass date(month, day, year);
            date.PrintMonth();
            validateDate = true;
        }
     
    }
}
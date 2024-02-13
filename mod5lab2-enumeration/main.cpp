//Addison Teschan
//Feb 12 2024
//
//Enumeration example for class
//

#include <iostream>
using namespace std;

enum DaysOfWeek {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum MonthsOfYear {January, February, March, April, May, June, July, August, September, October, November, December};

int main(){
    int i;
    cout << "Enter a number between 1 and 7: ";
    cin >> i;
    cout << "The day of the week is ";
    DaysOfWeek day = DaysOfWeek(i-1);

    switch(day){
        case Monday: cout << "Monday"; break;
        case Tuesday: cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday: cout << "Thursday"; break;
        case Friday: cout << "Friday"; break;
        case Saturday: cout << "Saturday"; break;
        case Sunday: cout << "Sunday"; break;
    }

    cout << endl;
    cout << "Enter a number between 1 and 12: ";
    cin >> i;
    cout << "The month of the year is ";
    MonthsOfYear month = MonthsOfYear(i-1);

    switch(month){
        case January: cout << "January"; break;
        case February: cout << "February"; break;
        case March: cout << "March"; break;
        case April: cout << "April"; break;
        case May: cout << "May"; break;
        case June: cout << "June"; break;
        case July: cout << "July"; break;
        case August: cout << "August"; break;
        case September: cout << "September"; break;
        case October: cout << "October"; break;
        case November: cout << "November"; break;
        case December: cout << "December"; break;
    }
    cout << endl;
  return 0;
}

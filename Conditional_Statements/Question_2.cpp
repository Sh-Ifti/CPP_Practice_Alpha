// Write a C++ program that takes a year from the user and print whether
// that year is a leap year or not.
//
// Hint : A leap year is exactly divisible by 4 except for century years (years ending with
// 00). The century year is a leap year only if it is perfectly divisible by 400.
// Eg : 1999 is not a leap year
// 2000 is a leap year
// 2004 is a leap year

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a Leap Year";
    }
    else
    {
        cout << year << " is not a Leap Year";
    }

    return 0;
}
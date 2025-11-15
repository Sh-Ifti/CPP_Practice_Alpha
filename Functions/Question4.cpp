// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

void largestSum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is the largest";
    }

    else if (b > a && b > c)
    {
        cout << b << " is the largest";
    }

    else
    {
        cout << c << " is the largest";
    }
}

int main()
{
    int num1, num2, num3;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Enter 3rd number: ";
    cin >> num3;

    largestSum(num1, num2, num3);

    return 0;
}
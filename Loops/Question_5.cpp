// For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
// This is a series where each number is a sum of previous 2 numbers in the series.Eg
// : 1 = 0 + 1,
// 2 = 1 + 1,
// 3 = 1 + 2,
// 5 = 2 + 3,
// 8 = 3 + 5 & so on.

#include <iostream>
using namespace std;

int main()
{
    int limit;

    cout << "Enter the last limit: ";
    cin >> limit;

    int num1 = 0, num2 = 1;

    cout << "First " << limit << " Fibonacci numbers: " << num1 << " " << num2 << " ";

    for (int i = 2; i <= limit - 1; i++)
    {
        int num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
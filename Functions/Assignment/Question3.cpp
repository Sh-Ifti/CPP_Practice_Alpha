// Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

#include <iostream>
using namespace std;

int squareFunc(int a, int b)
{
    return (a * a) + (b * b) + (2 * a * b);
}

int main()
{
    int num1, num2;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Result is " << squareFunc(num1, num2);
    return 0;
}
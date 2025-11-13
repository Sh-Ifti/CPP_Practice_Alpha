// WAP to input a number and check whether the number is an Armstrong
// number or not.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int n = num; // Copying the number;

    int cubeSum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        cubeSum += digit * digit * digit;
        n /= 10;
    }
    if (cubeSum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
// Write a function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int res = 0;

    while (n > 0)
    {
        int lastDig = n % 10;
        res = res + lastDig;
        n /= 10;
    }
    return res;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of the digits of " << num << " : " << sumOfDigits(num);
    return 0;
}
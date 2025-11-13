// For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number.
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a 3 digit number: ";
    cin >> num;

    int n = num; // Copying the number

    int digit1 = n % 10; // Storing the unit place digit
    n = n / 10;          // Getting the 2 digit number
    int digit2 = n % 10; // Storing the tenth place digit
    n = n / 10;          // Getting the 1 digit number which also the hundredth place digit
    int digit3 = n;      // Storing the hundredth digit in a new variable

    int cubeSum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

    if (cubeSum == num)
    {
        cout << num << " is an Armstrong number";
    }
    else
    {
        cout << num << " is not an Armstong number";
    }

    return 0;
}
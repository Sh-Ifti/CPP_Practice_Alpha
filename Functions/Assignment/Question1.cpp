// Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number.
// Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321
// is not a palindrome because the reverse of 321 is 123, which is not equal to 321.

#include <iostream>
using namespace std;

int reverse(int n)
{
    int res = 0;

    while (n > 0)
    {
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n /= 10;
    }

    return res;
}
void checkPalindrome(int n)
{
    int revNum = reverse(n);

    if (n == revNum)
        cout << n << " is a Palindrome number";
    else
        cout << n << " is not a Palindrome number";
}
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    checkPalindrome(num);
    return 0;
}
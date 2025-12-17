// For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N >= 2)

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the last limit: ";
    cin >> num;
    cout << "Prime numbers from 2 to " << num << " : ";
    for (int i = 2; i <= num; i++)
    {
        int curr = i; // Checking current number
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << " ";
        }
    }
    cout << endl;

    return 0;
}
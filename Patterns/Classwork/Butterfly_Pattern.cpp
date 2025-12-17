// Enter n: 4
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;
    // Upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // First half's stars
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) // Middle Spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // Second half's stars
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower Half
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) // First half's stars
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) // Middle Spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // Second half's stars
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
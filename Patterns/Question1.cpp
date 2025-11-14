// Print the 0-1 Triangle Pattern.
// For n = 5
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // Outer loop
    {
        for (int j = 1; j <= i; j++) // Inner loop
        {
            if ((i + j) % 2 == 0) // This condition checks wheather to print 0 or 1 in the corresponding column
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }
    return 0;
}
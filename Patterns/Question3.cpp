/* Print the Palindromic Pattern with Numbers.
For n = 5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // Outer loop
    {
        for (int j = 1; j <= n - i; j++) // Inner loop for spaces
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) // Inner loop for numbers
        {
            cout << j;
        }
        for (int j = 2; j <= i; j++) // Inner loop for numbers again
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
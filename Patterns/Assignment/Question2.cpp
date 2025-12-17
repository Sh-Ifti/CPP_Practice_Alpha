// Print the Rhombus Pattern.
// For n = 5
//     *****
//    *****
//   *****
//  *****
// *****

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
        for (int j = 1; j <= n; j++) // Inner loop for stars
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
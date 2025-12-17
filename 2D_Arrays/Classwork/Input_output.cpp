#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the size of the row: ";
    cin >> r;

    cout << "Enter the size of the column: ";
    cin >> c;

    int arr[r][c];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\n2D Array: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
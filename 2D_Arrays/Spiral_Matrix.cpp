#include <iostream>
using namespace std;

void spiralMatrix(int arr[][4], int r, int c)
{
    int srow = 0, scol = 0, erow = r - 1, ecol = c - 1;

    while (srow <= erow && scol <= ecol)
    {
        for (int j = scol; j <= ecol; j++) // Top
        {
            cout << arr[srow][j] << " ";
        }

        for (int i = srow + 1; i <= erow; i++) // Right
        {
            cout << arr[i][ecol] << " ";
        }

        for (int j = ecol - 1; j >= scol; j--) // Bottom
        {
            if (srow == erow) // Edge case for the middle value for top and bottom row. It will print the same value that has already been printed by the top row.
            {
                break;
            }
            cout << arr[erow][j] << " ";
        }

        for (int i = erow - 1; i >= srow + 1; i--) // Left
        {
            if (scol == ecol) // Edge case for the middle value for left and right column. It will print the same value that has already been printed by the right column.
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }
        srow++, scol++, erow--, ecol--;
    }
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    spiralMatrix(arr, 4, 4);

    return 0;
}

// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Time complexity: O(n)
#include <iostream>
using namespace std;

int diagonalSum(int arr[][3], int n) // For secondary diagonal, (column = n - row - 1) always
{
    int sum = 0;
    // Time Complexity O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum += arr[i][j];
    //         }
    //         else if (j == n - i - 1)
    //         {
    //             sum += arr[i][j];
    //         }
    //     }
    // }
    // Time complexity O(n)
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        if (i != n - i - 1) // Check for secondary diagonal columns
        {
            sum += arr[i][n - i - 1];
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "Diagonal Sum = " << diagonalSum(arr, 3);

    return 0;
}

// Diagonal Sum = 25
// Brute Force Approach

#include <iostream>
using namespace std;

// bool searchKey(int arr[][3], int n, int key) // Time complexity: O(n^2)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (key == arr[i][j])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool searchKey(int arr[][4], int r, int c, int key) // Time complexity: O(n+m)
{
    int i = 0, j = c - 1;

    while (i < r && j >= 0) // Starting from the top rightmost corner
    {
        if (arr[i][j] == key)
        {
            cout << "Key found at index (" << i << ", " << j << ")\n";
            return true;
        }
        else if (arr[i][j] > key) // If the current cell value is greater than the key
        {
            j--; // then shift the cell left by reducing column to find smaller value
        }
        else // If the current cell value is smaller than the key
        {
            i++; // then shift the cell down by increasing the row to find greater value
        }
    }
    cout << "Key is not found" << endl;

    return false;
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    cout << searchKey(arr, 4, 4, 32);

    return 0;
}

// Key found at index (3, 0)
// 1

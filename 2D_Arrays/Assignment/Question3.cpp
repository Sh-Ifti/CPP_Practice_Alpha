// Write a program to Find Transpose of a Matrix.
// What is Transpose?
// Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
// matrix,
// Matrix
// a11 a12 a13
// a21 a22 a23
// Transposed Matrix
// a11 a21
// a12 a22
// a13 a23

#include <iostream>
using namespace std;

int main()
{
    int row = 2, col = 3;
    int arr[row][col] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << "Given Matrix: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[col][row] = {{0}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "Transpose Matrix: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Given Matrix: 
// 1 2 3
// 4 5 6
// Transpose Matrix:
// 1 4
// 2 5
// 3 6
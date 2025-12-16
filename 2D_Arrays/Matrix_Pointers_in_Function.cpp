#include <iostream>
using namespace std;

void func(int mat[][4], int r, int c)
{
    cout << "0th row ptr: " << mat << endl;
    cout << "1st row ptr: " << mat + 1 << endl;
    cout << "(2, 2) = " << *(*(mat + 2) + 2) << endl;
}

void func2(int (*mat)[4], int r, int c)
{
    cout << "0th row ptr: " << mat << endl;
    cout << "1st row ptr: " << mat + 1 << endl;
    cout << "(3, 1) = " << *(*(mat + 3) + 1) << endl;
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    func(arr, 4, 4);
    func2(arr, 4, 4);

    return 0;
}

// 0th row ptr: 0x61fee0
// 1st row ptr: 0x61fef0
// (2, 2) = 37
// 0th row ptr: 0x61fee0
// 1st row ptr: 0x61fef0
// (3, 1) = 33
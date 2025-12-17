#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    cout << arr << " = " << &arr[0][0] << endl;
    cout << arr + 1 << " = " << &arr[1][0] << endl; // 2D array always points to the row
    cout << arr + 1 << " != " << &arr[0][1] << endl;

    return 0;
}
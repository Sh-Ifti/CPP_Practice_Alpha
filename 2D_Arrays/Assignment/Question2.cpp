// Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18

#include <iostream>
using namespace std;

int main()
{
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}};

    int row = 3, col = 3, sum = 0;

    for (int i = 1; i < row - 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += nums[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}

// 18
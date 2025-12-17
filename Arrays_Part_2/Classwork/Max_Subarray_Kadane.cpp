#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Max Subarray Sum = " << maxSum;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    maxSubarraySum(arr, n);

    return 0;
}

/*
Enter the size of the array: 3
Enter the elements:
-1
-2
-3

Max Subarray Sum = -1
*/
#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;

            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
        cout << endl;
    }
    cout << "\nMaximum Subarray Sum is " << maxSum;
}

void maxSubarraySum2(int *arr, int n)
{
    int maxSum = INT8_MIN;

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
        }
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
    }
    cout << "\nMax Subarray Sum is " << maxSum;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    maxSubarraySum1(arr, n);
    maxSubarraySum2(arr, n);

    return 0;
}

/*
Enter the size of the array: 6
Enter the elements: 2
-3
6
-5
4
2

2, -1, 5, 0, 4, 6,
-3, 3, -2, 2, 4,
6, 1, 5, 7,
-5, -1, 1,
4, 6,
2,

Maximum Subarray Sum is 7
Max Subarray Sum is 7
*/
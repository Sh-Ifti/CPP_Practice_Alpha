#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT8_MIN;

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

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void countingSort(int *arr, int n)
{
    int freq[1000] = {0};
    int maxVal = INT_MIN, minVal = INT_MAX;

    for (int i = 0; i < n; i++) // Making the frequency array for each element and finding the range
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);

        freq[arr[i]]++;
    }

    for (int i = minVal, j = 0; i <= maxVal; i++) // Sorting the array
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
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

    cout << "Before Sort: ";
    printArray(arr, n);

    countingSort(arr, n);

    cout << "\nAfter Sort: ";
    printArray(arr, n);

    return 0;
}

// Enter the size of the array: 8
// Enter the elements: 
// 1
// 4
// 1
// 3
// 2
// 4
// 3
// 7
// Before Sort: 1, 4, 1, 3, 2, 4, 3, 7, 
// After Sort: 1, 1, 2, 3, 3, 4, 4, 7,

//Time Complexity = O(n + range)
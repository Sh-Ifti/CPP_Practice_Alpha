#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
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

    selectionSort(arr, n);

    cout << "\nAfter Sort: ";
    printArray(arr, n);

    return 0;
}

// Enter the size of the array: 5
// Enter the elements: 
// 5
// 4
// 3
// 2
// 1
// Before Sort: 5, 4, 3, 2, 1, 
// After Sort: 1, 2, 3, 4, 5, 
// Time complexity: O(n^2)
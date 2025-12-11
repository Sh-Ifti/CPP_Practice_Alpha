#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);

            prev--;
        }
        arr[prev + 1] = curr;
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

    insertionSort(arr, n);

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
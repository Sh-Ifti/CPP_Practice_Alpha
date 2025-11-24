#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int binSearch(int *arr, int size, int key)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (mid < key) // Search in the 2nd half
        {
            start = mid + 1;
        }
        else // Search in the 1st half
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in sorted order: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Inputs: ";
    printArray(arr, n);
    cout << endl;

    int key;
    cout << "Enter the element you want: ";
    cin >> key;

    cout << key << " is at index NO. " << binSearch(arr, n, key);

    return 0;
}
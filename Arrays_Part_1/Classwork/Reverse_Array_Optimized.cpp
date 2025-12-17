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

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Input array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before reverse: ";
    printArray(arr, n);

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "After reverse: ";
    printArray(arr, n);

    return 0;
}
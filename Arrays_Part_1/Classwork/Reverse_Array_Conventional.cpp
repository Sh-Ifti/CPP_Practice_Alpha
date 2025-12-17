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

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before reverse: ";
    printArray(arr, n);

    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;

        copyArr[i] = arr[j];
    }

    cout << "After reverse: ";
    printArray(copyArr, n);

    return 0;
}
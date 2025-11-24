#include <iostream>
using namespace std;

void printSubArray(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    cout << "\nSubarray: " << endl;
    printSubArray(arr, n);

    return 0;
}
// Return the index number of the searched element

#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
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

    cout << "Input " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";

    int element;

    cin >> element;
    cout << element << " is at index No. " << linearSearch(arr, n, element) << endl;

    return 0;
}
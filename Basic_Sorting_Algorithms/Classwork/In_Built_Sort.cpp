#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{
    int n1, n2;

    cout << "Enter the size of the 1st array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter the size of the 2nd array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout << "\n1st array before sorting: ";
    printArray(arr1, n1);

    cout << "\n1st array after sorting: ";
    sort(arr1, arr1 + n1); // For ascending order
    printArray(arr1, n1);

    cout << endl;

    cout << "\n2nd array before sorting: ";
    printArray(arr2, n2);

    cout << "\n2nd array after sorting: ";
    sort(arr2, arr2 + n2, greater<int>()); // For descending order
    printArray(arr2, n2);

    return 0;
}

/*
Enter the size of the 1st array: 5
Enter the elements: 
5
4
3
2
1

Enter the size of the 2nd array: 5
Enter the elements: 
1
2
3
4
5

1st array before sorting: 5, 4, 3, 2, 1,
1st array after sorting: 1, 2, 3, 4, 5,

2nd array before sorting: 1, 2, 3, 4, 5,
2nd array after sorting: 5, 4, 3, 2, 1,
*/
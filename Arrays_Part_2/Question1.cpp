/*
Question 1 : Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct.
Examples :
Input: nums = [1,2,3,4]
Output: false
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

#include <iostream>
using namespace std;

bool checkDuplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
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

    cout <<"Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;

    if (checkDuplicate(arr, n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
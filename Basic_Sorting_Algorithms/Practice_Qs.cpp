/*
Sort this array of characters using insertion sort in descending order.
char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'}
*/

#include <iostream>
using namespace std;

void printArray(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void insertionSort(char *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] < curr)
        {
            swap(arr[prev], arr[prev + 1]);

            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};

    int n = sizeof(ch) / sizeof(char);

    cout << "Before Sort: ";
    printArray(ch, n);

    insertionSort(ch, n);

    cout << "\nAfter Sort: ";
    printArray(ch, n);

    return 0;
}

/*
Before Sort: f, b, a, e, c, d, 
After Sort: f, e, d, c, b, a,

Time complexity = O(n^2)
*/
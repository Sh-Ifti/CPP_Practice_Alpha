/*
Question 1 : Use the following sorting algorithms to sort an array in DESCENDING
order :
a. Bubble Sort
b. Selection Sort
c. Insertion Sort
d. Counting Sort
You can use this array as an example : [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
*/

#include <iostream>
#include <climits>
using namespace std;

void printArray(int *arr, int n);
void bubbleSort(int *arr, int n);
void selectionSort(int *arr, int n);
void insertionSort(int *arr, int n);
void countingSort(int *arr, int n);

int main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Before sorting: ";
    printArray(arr, n);

    cout << "\nBubble Sort: ";
    bubbleSort(arr, n);
    printArray(arr, n);

    cout << "\nSelection Sort: ";
    selectionSort(arr, n);
    printArray(arr, n);

    cout << "\nInsertion Sort: ";
    insertionSort(arr, n);
    printArray(arr, n);

    cout << "\nCounting Sort: ";
    countingSort(arr, n);
    printArray(arr, n);

    return 0;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(int *arr, int n)
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

void countingSort(int *arr, int n)
{
    int freq[1000] = {0};
    int maxVal = INT_MIN, minVal = INT_MAX;

    for (int i = 0; i < n; i++) // Making the frequency array for each element and finding the range
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);

        freq[arr[i]]++;
    }

    for (int i = maxVal, j = 0; i >= minVal; i--) // Sorting the array
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}
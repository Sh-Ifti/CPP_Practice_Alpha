#include <iostream>
using namespace std;

int main()
{

    // Max and Min number in an arry

    int n;

    cout << "Enter length of an array: ";
    cin >> n;

    int arr[n];

    cout << "Inputs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max, min;
    for (int i = 0; i < n; i++)
    {

        max = arr[0];
        min = arr[0];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max is " << max << endl;
    cout << "Min is " << min << endl;

    return 0;
}
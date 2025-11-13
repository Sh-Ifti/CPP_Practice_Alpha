// WAP to print the multiplication table of a number, entered by the user

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number for multiplication table: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }
    return 0;
}
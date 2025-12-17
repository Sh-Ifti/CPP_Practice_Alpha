// Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)

#include <iostream>
using namespace std;

int main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Area: " << (22.0 / 7) * r * r << endl;

    return 0;
}
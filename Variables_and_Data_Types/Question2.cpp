// Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)

#include <iostream>
using namespace std;

int main()
{
    float pencil, pen, eraser, cost = 0;
    cout << "Enter pencil's cost: ";
    cin >> pencil;
    cout << "Enter pen's cost: ";
    cin >> pen;
    cout << "Enter eraser's cost: ";
    cin >> eraser;

    cost = pencil + pen + eraser;

    float tax = cost + cost * 0.18;

    cout << "Total cost: " << cost << endl;
    cout << "Total cost after GST: " << tax << endl;

    return 0;
}
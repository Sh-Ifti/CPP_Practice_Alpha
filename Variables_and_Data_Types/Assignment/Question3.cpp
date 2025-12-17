// Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T)Output :
// (P*R*T) / 100

#include <iostream>
using namespace std;

int main()
{
    float P, R, T;

    cout << "Input principal: ";
    cin >> P;
    cout << "Input rate: ";
    cin >> R;
    cout << "Input time: ";
    cin >> T;

    cout << "Simple interest: " << (P * R * T) / 100 << endl;

    return 0;
}
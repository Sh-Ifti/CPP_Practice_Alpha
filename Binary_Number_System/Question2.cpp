// Convert the following decimal numbers into binary forms :
// ● 25
// ● 49
// ● 31
// ● 88

#include <iostream>
using namespace std;

void decToBin(int dec)
{
    int n = dec;
    int bin = 0;
    int pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        bin = bin + rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout << "(" << dec << ")10 = " << "(" << bin << ")2" << endl;
}

int main()
{
    decToBin(25);
    decToBin(49);
    decToBin(31);
    decToBin(88);

    return 0;
}
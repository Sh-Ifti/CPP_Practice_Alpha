// Convert the following binary numbers into decimal forms :
// ● 111111
// ● 10110
// ● 10011
// ● 110010

#include <iostream>
using namespace std;

void binToDec(int bin)
{
    int n = bin;
    int dec = 0;
    int pow = 1;

    while (n > 0)
    {
        int lastDig = n % 10;
        dec = dec + lastDig * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout << "(" << bin << ")2 = (" << dec << ")10" << endl;
}
int main()
{
    binToDec(111111);
    binToDec(10110);
    binToDec(10011);
    binToDec(110010);

    return 0;
}
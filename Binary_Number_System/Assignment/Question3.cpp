/*
Following are the rules of adding 2 binary digits :
0 + 0 = 0, carry = 0
1 + 0 = 1, carry = 0
0 + 1 = 1, carry = 0
1 + 1 = 0, carry = 1
So, in math if 2 + 3 = 5, in binary it looks like
  1 0
+ 1 1
1 0 1
Using this method, try to add these 2 numbers (63 & 22) in their binary form and
verify that the binary output is equal to the decimal value 85.
*/

#include <iostream>
using namespace std;

int binToDec(int bin)
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
    return dec;
}
int decToBin(int dec)
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
    return bin;
}
int binAdd(int bin1, int bin2)
{
    int ans = 0;
    int carry = 0;
    int pow = 1;

    while (bin1 > 0 || bin2 > 0 || carry > 0)
    {
        int d1 = bin1 % 10;
        int d2 = bin2 % 10;

        int sumBit = (d1 + d2 + carry) % 2;
        carry = (d1 + d2 + carry) / 2;

        ans = ans + sumBit * pow;

        pow *= 10;

        bin1 /= 10;
        bin2 /= 10;
    }
    return ans;
}

int main()
{

    int dec1 = 63, dec2 = 22;
    int bin1 = decToBin(63), bin2 = decToBin(22);
    cout << "(" << dec1 << ")10 = (" << bin1 << ")2" << endl;
    cout << "(" << dec2 << ")10 = (" << bin2 << ")2" << endl
         << endl;

    int binSum = binAdd(bin1, bin2);

    cout << bin1 << " + " << bin2 << " = " << binSum << endl
         << endl;

    cout << "(" << binSum << ")2 = " << "(" << binToDec(binSum) << ")10" << endl
         << endl;

    cout << dec1 << " + " << dec2 << " = " << dec1 + dec2 << endl;

    return 0;
}
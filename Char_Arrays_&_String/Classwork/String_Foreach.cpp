#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "apna college";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << "-";
    // }
    // cout << endl;

    for (char ch : str) // for each loop
    {
        cout << ch << "-";
    }

    return 0;
}

// a-p-n-a- -c-o-l-l-e-g-e-
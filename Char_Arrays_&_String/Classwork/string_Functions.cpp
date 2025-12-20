#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello, i love c++ c++";
    cout << str.length() << endl;
    cout << str.at(4) << endl;
    cout << str.substr(1, 5) << endl;
    cout << str.find("c++", 16) << endl;
    int idx = str.find("python");
    cout << idx << endl;

    return 0;
}

// 21
// o
// ello,
// 18
// -1
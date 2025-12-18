#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100] = "Hello";
    cout << str1 << endl;

    char str2[100];
    strcpy(str2, str1);
    cout << str2 << endl;

    char str3[] = "World";
    strcat(str1, str3);
    cout << str1 << endl;
    cout << str3 << endl;

    strcat(str2, str3);
    cout << str2 << endl;

    cout << strcmp(str1, str2) << endl;
    cout << strcmp(str2, str3) << endl;
    cout << strcmp(str3, str2) << endl;

    return 0;
}

// Hello
// Hello
// HelloWorld
// World
// HelloWorld
// 0
// -1
// 1
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char ch[], int n)
{
    int st = 0, end = n - 1;

    while (st < end)
    {
        if (ch[st++] != ch[end--])
        {
            cout << "Invalid Palindrome" << endl;
            return false;
        }
    }
    cout << "Valid Palindrome" << endl;
    return true;
}

int main()
{
    char word[] = "racecar";

    isPalindrome(word, strlen(word));

    return 0;
}

// Valid Palindrome
// Time Complexity: O(n)
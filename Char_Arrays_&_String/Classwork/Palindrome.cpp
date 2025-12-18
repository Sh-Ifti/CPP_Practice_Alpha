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
    char word2[] = "racer";

    isPalindrome(word, strlen(word));
    isPalindrome(word2, strlen(word));

    return 0;
}

// Valid Palindrome
// Invalid Palindrome
// Time Complexity: O(n)
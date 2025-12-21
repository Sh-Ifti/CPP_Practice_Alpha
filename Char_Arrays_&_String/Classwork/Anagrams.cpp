#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0)
        {
            cout << "Invalid Anagram" << endl;
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout << "Valid Anagram" << endl;
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    string str3 = "car";
    string str4 = "rat";

    cout << isAnagram(str1, str2) << endl;
    cout << isAnagram(str3, str4) << endl;

    return 0;
}

// Valid Anagram
// 1
// Invalid Anagram
// 0
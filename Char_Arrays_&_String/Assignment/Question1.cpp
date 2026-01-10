//  Count how many times lowercase vowels occurred in a String entered
// by the user.

#include <iostream>
#include <string>
using namespace std;

int countVowel(string s)
{
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "Ami Tomake Valobashi";

    cout << "Total Vowels: " << countVowel(s) << endl;

    return 0;
}

// Total Vowels: 9
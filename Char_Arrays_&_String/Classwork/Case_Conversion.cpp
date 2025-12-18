#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
    cout << word << endl;
}

void toLower(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];

        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
    cout << word << endl;
}

int main()
{
    char word[] = "ApPlE";
    toUpper(word, strlen(word));
    toLower(word, strlen(word));
    return 0;
}
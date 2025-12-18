#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char word[30];
    // cin >> word;

    // cout << "Your word is " << word << endl;
    // cout << "length: " << strlen(word) << endl;

    char sentence[30];
    cin.getline(sentence, 30, '*');

    cout << "Your word is " << sentence[0] << endl;
    cout << "length: " << strlen(sentence) << endl;
    return 0;
}

// apple*
// Your word is a
// length: 5
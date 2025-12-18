#include <iostream>
#include <cstring>
using namespace std;

void reverse(char ch[], int n)
{
    int st = 0, end = n - 1;

    while (st < end)
    {
        swap(ch[st], ch[end]);
        st++;
        end--;
    }
}

int main()
{
    char word[] = "code";

    cout << "Before Reverse: " << word;

    reverse(word, strlen(word));

    cout << "\nAfter Reverse: " << word;

    return 0;
}

// Before Reverse: code
// After Reverse: edoc
// Time Complexity: O(n)
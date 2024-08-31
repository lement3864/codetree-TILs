#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    char first, second;

    cin >> text;

    first = text[0];
    second = text[1];

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == first)
        {
            text[i] = second;
        }
        else if (text[i] == second)
        {
            text[i] = first;
        }
    }

    cout << text;

    return 0;
}
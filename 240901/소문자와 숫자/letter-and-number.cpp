#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    for (int i = 0; i < text.length(); ++i)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            cout << (char)tolower(text[i]);
        }
        if (text[i] >= '0' && text[i] <= '9')
        {
            cout << text[i];
        }
    }

    return 0;
}
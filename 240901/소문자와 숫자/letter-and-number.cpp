#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    for (int i = 0; i < text.length(); ++i)
    {
        if (isalpha(text[i]))
        {
            cout << (char)tolower(text[i]);
        }
        if (isdigit(text[i]))
        {
            cout << text[i];
        }
    }

    return 0;
}
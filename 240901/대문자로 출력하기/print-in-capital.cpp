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
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                cout << char(text[i] - 'a' + 'A');
            }
            else
            {
                cout << text[i];
            }
        }
    }

    return 0;
}
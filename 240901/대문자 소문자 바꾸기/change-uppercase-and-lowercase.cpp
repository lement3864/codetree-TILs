#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string text, result = "";

    cin >> text;

    for (int i = 0; i < text.length(); ++i)
    {
        // 대문자 일때
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            result += tolower(text[i]);
        }
        // 소문자 일때
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            result += toupper(text[i]);
        }
    }

    cout << result;

    return 0;
}
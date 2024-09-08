#include <iostream>
#include <string>

using namespace std;

bool Pal(string text) {
    string temp = "";
    for (int i = text.length() - 1; i >= 0; --i)
    {
        temp += text[i];
    }

    if (temp == text)
        return true;
    else
        return false;
}

int main() {
    
    string text;

    cin >> text;

    if (Pal(text))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
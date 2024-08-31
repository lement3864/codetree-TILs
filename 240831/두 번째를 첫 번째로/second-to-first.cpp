#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    char temp1, temp2;

    cin >> text;

    temp1 = text[0];
    temp2 = text[1];

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == temp2)
        {
            text[i] = temp1;
        }
    }

    cout << text;

    return 0;
}
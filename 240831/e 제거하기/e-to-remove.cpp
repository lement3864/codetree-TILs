#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string text;

    cin >> text;

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == 'e')
        {
            text.erase(i, 1);
            break;
        }
    }

    cout << text;

    return 0;
}
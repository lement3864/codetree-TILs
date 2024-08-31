#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    int cntEE = 0, cntEB = 0;

    cin >> text;

    for (int i = 0; i < text.length() - 1; ++i)
    {
        if (text[i] == 'e' && text[i + 1] == 'e')
        {
            cntEE++;
        }

        if (text[i] == 'e' && text[i + 1] == 'b')
        {
            cntEB++;
        }
    }

    cout << cntEE << " " << cntEB;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    while (true)
    {
        string text;

        cin >> text;

        if (text == "END") break;

        for (int i = text.length() - 1; i >= 0; --i)
        {
            cout << text[i];
        }

        cout << endl;
    }

    return 0;
}
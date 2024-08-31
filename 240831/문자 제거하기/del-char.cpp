#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;
    int idx;

    cin >> text;

    while (text.length() != 1)
    {
        cin >> idx;

        if (idx >= text.length())
        {
            text.erase(text.length() - 1, 1);
        }
        else
        {
            text.erase(idx, 1);
        }

        cout << text << endl;
    }

    return 0;
}
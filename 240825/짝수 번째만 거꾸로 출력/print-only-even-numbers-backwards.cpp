#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    for (int i = text.length() - 1; i >= 0; --i)
    {
        if (i % 2 != 0)
            cout << text[i];
    }    

    return 0;
}
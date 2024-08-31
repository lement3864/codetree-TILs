#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    int len = text.length();

    cout << text << endl;

    for (int i = 0; i < len; ++i)
    {
        text = text.substr(len - 1, 1) + text.substr(0, len - 1);

        cout << text << endl;
    }


    return 0;
}
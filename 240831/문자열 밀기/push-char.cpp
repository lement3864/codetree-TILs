#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    int len = text.length();

    text = text.substr(1, len - 1) + text.substr(0, 1);

    cout << text;

    return 0;
}
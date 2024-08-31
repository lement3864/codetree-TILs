#include <iostream>
#include <string>

using namespace std;

int main() {

    string text;

    cin >> text;

    text[1] = 'a';
    text[text.length() - 2] = 'a';

    cout << text;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    text.erase(1,1);
    text.erase(text.length() - 2, 1);

    cout << text;

    return 0;
}
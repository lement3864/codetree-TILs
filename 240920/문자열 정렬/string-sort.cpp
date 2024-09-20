#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string text;

    cin >> text;

    sort(text.begin(), text.end());

    cout << text;
    
    return 0;
}
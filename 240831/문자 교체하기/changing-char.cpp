#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text1, text2;

    cin >> text1 >> text2;

    text2[0] = text1[0];
    text2[1] = text1[1];

    cout << text2;

    return 0;
}
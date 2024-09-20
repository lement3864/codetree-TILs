#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string text1, text2;

    cin >> text1 >> text2;

    sort(text1.begin(), text1.end());
    sort(text2.begin(), text2.end());

    if (text1 == text2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
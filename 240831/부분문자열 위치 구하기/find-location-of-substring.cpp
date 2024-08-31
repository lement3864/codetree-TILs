#include <iostream>
using namespace std;

int main() {
    
    string text1, text2;

    cin >> text1 >> text2;

    if (text1.find(text2) != string::npos)
    {
        cout << text1.find(text2);
    }
    else
    {
        cout << -1;
    }

    return 0;
}
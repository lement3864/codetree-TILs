#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    string str;

    cin >> str >> n;

    
    for (int i = str.length() - 1; i >= str.length() - n; --i)
    {
        cout << str[i];
    }

    return 0;
}
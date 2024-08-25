#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    string str;

    cin >> str >> n;

    if (str.length() >= n)
    {
        for (int i = str.length() - 1; i >= str.length() - n; --i)
        {
            cout << str[i];
        }
    }
    else
    {
        for (int i = str.length() - 1; i >= 0; --i)
        {
            cout << str[i];
        }
    }

    return 0;
}
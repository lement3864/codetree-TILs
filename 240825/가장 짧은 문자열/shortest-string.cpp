#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    if (len1 >= len2)
    {
        if (len2 >= len3)
            cout << len1 - len3;
        else
            cout << len1 - len2;
    }
    else if (len2 >= len3)
    {
        if (len1 >= len3)
            cout << len2 - len3;
        else
            cout << len2 - len1;
    }
    else if (len3 >= len1)
    {
        if (len1 >= len2)
            cout << len3 - len2;
        else
            cout << len3 - len1;
    }

    return 0;
}
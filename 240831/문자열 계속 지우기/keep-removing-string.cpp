#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string strA, strB;

    cin >> strA >> strB;

    while (true)
    {
        if (strA.find(strB) == string::npos)
            break;
        else
        {
            strA.erase(strA.find(strB), strB.length());
        }
    }

    cout << strA;

    return 0;
}
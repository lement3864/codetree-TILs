#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string strA, strB;
    string A, B;

    cin >> strA >> strB;

    // A문자열 변환
    for (int i = 0; i < strA.length(); ++i)
    {
        if (isdigit(strA[i]))
        {
            A += strA[i];
        }
        else
        {
            break;
        }
    }

    // B문자열 변환
    for (int i = 0; i < strB.length(); ++i)
    {
        if (isdigit(strB[i]))
        {
            B += strB[i];
        }
        else
        {
            break;
        }
    }

    cout << stoi(A) + stoi(B);

    return 0;
}
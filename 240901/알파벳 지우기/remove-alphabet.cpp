#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string strA, strB;
    string A = "", B = "";

    cin >> strA >> strB;

    // 문자열 A 숫자만 거르기
    for (int i = 0; i < strA.length(); ++i)
    {
        if (strA[i] >= '0' && strA[i] <= '9')
        {
            A += strA[i];
        }
    }

    // 문자열 B 숫자만 거르기
    for (int i = 0; i < strB.length(); ++i)
    {
        if (strB[i] >= '0' && strB[i] <= '9')
        {
            B += strB[i];
        }
    }

    // 정수로 전환 후 합 구하기
    cout << stoi(A) + stoi(B);

    return 0;
}
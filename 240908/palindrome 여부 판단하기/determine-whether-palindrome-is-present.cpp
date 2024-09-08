#include <iostream>
#include <string>

using namespace std;

// 1. 문자열을 반대로 돌린 배열을 만들어 기존 배열과 비교하는 방법
// bool Pal(string text) {
//     string temp = "";
//     for (int i = text.length() - 1; i >= 0; --i)
//     {
//         temp += text[i];
//     }

//     if (temp == text)
//         return true;
//     else
//         return false;
// }

// 2. 포인터로 문자열을 가져와서 제일 앞과 끝을 순차적으로 비교하는 방법
bool Pal(string &text) {
    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] != text[text.length() - i - 1])
            return false;
        
        return true;
    }
}

int main() {
    
    string text;

    cin >> text;

    if (Pal(text))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
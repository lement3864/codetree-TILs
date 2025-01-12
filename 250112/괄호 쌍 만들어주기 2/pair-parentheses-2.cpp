// 1. '(('를 찾으면 새로운 반복문을 돌면서 '))' 찾으면 카운트

#include <iostream>
#include <string>

using namespace std;

int cnt = 0;

string text;

int main() {

    cin >> text;

    for (int i = 0; i < (int)text.size() - 1; ++i) {
        // 연속으로 '('가 나오면
        if (text[i] == '(' && text[i + 1] == '(') {
            for (int j = i + 1; j < (int)text.size() - 1; ++j) {
                if (text[j] == ')' && text[j + 1] == ')') {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
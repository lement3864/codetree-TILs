// 1. 이진법 숫자를 자릿수 마다 하나씩 변경을 하고 결과값이랑 비교 후 최대값을 저장

#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

string binary;

int result = INT_MIN;

int main() {

    cin >> binary;

    for (int i = 0; i < (int)binary.size(); ++i) {
        // i번째 자릿수 변경
        binary[i] = '0' + '1' - binary[i];

        int num = 0;

        for (int j = 0; j < (int)binary.size(); ++j) {
            num = num * 2 + (binary[j] - '0');
        }

        // 최대값으로 변경
        result = max(result, num);

        // 자릿수 원래대로 되돌리기
        binary[i] = '0' + '1' - binary[i];
    }

    cout << result;

    return 0;
}
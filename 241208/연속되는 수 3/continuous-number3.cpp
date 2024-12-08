// 1. +, - 인 경우를 나눠서 연속되는 수 체크 (두 수를 곱해서 +가 나오면 연속 중, -면 전환)
// 2. 부호 바뀔 때 마다 연속된 수 리셋

#include <iostream>
using namespace std;

int N;
int arr[1001];
int result = 0;

int main() {
    
    cin >> N;

    for (int t = 0; t < N; ++t) {
        cin >> arr[t];
    }

    int temp = 1;

    for (int i = 0; i < N; ++i) {
        // 다른 부호의 숫자가 나올 때 temp 리셋
        if (i == 0 || arr[i] * arr[i - 1] < 0) {
            if (result <= temp) {
                result = temp;
            }

            temp = 1;
        }
        // 숫자가 연속될 때
        else if (arr[i] * arr[i - 1] > 0) {
            temp++;
        }
    }

    // 연속된 수만 존재할 때 예외처리
    if (result <= temp) {
        result = temp;
    }

    cout << result;

    return 0;
}
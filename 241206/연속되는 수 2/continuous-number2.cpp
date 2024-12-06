// 1. 새로운 숫자가 입력되면 reset
// 2. 새로운 숫자가 나오기 전까지 result 보다 연속된 값이 크면 갱신

#include <iostream>
using namespace std;

int N;                          // 주어지는 숫자 수
int num[1001];                  // 숫자 배열
int result = 0;                 // 결과 값
int temp = 1;                   // 연속된 숫자 수 

int main() {
    
    cin >> N;

    // 배열에 숫자 받기
    for (int t = 0; t < N; ++t) {
        cin >> num[t];
    }

    for (int i = 0; i < N; ++i) {
        // 새로운 숫자 등장 시 -> 연속된 숫자 갯수 리셋 + 결과값과 비교해서 갱신
        if (i == 0 || num[i] != num[i - 1]) {
            if (result <= temp) {
                result = temp;
            }

            temp = 1;
        }
        // 연속된 숫자 등장 시 -> 연속된 숫자++
        else if (num[i] == num[i - 1]) {
            temp++;
        }
    }

    // 연속된 숫자 만 주어진 경우 예외 처리
    if (result <= temp)
        result = temp;

    // 결과 값 출력
    cout << result;

    return 0;
}
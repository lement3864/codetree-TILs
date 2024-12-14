#include <iostream>

#define MAX_N 1000

using namespace std;

int n;
int t;
int arr[MAX_N];


int main() {

    int result = 0; // 최대 길이 저장
    int cnt = 0;    // 현재 연속 부분 수열 길이

    cin >> n >> t;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] > t) {
            cnt++; // t보다 크면 현재 길이 증가
            result = max(result, cnt); // 최대 길이 갱신
        } else {
            cnt = 0; // 조건에 맞지 않으면 초기화
        }
    }

    cout << result << endl; // 결과 출력

    return 0;
}
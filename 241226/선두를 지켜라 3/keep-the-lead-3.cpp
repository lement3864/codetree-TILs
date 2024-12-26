// 1. A, B 배열 각각 입력 받기
// 2. 배열을 비교하면서 선두에 있는 사람 전당에 등록
// 3. 전당의 이전값과 현재값이 다를 때 마다 카운트

#include <iostream>

#define MAX_TIME 1000000

using namespace std;

int n, m;
int idx_A = 0;
int idx_B = 0;
int cnt = 0;

int time_A[MAX_TIME];
int time_B[MAX_TIME];
int winner[MAX_TIME];

int main() {

    cin >> n >> m;

    // A의 시간별 위치 입력
    for (int i = 0; i < n; ++i) {
        int time, move;

        cin >> move >> time;

        while (time--) {
            idx_A++;
            time_A[idx_A] = time_A[idx_A - 1] + move; 
        }
    }   

    // B의 시간별 위치 입력
    for (int i = 0; i < m; ++i) {
        int time, move;

        cin >> move >> time;

        while (time--) {
            idx_B++;
            time_B[idx_B] = time_B[idx_B - 1] + move; 
        }
    } 

    // 시간 별로 A가 이길때 1, B가 이길때 2, 같을 때 3 으로 체크
    for (int i = 0; i < idx_A; ++i) {
        if (time_A[i] > time_B[i])
            winner[i] = 1;
        else if (time_A[i] < time_B[i])
            winner[i] = 2;
        else
            winner[i] = 3;
    }

    // 전당의 조합이 변경 될 때마다 카운트
    for (int i = 0; i < idx_A - 1; ++i) {
        if (winner[i] != winner[i + 1])
            cnt++;
    }

    cout << cnt;

    return 0;
}
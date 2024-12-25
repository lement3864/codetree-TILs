// 1. A, B의 초 당 현재 위치를 기록하는 배열 생성
// 2. A, B 중 한 쪽이 먼저 끝나면 현재위치는 변하지 않고 계속 유지
// 2-1. A, B의 입력을 모두 받고 배열 길이가 짧은 쪽을 보정
// 3. A, B의 현재 위치가 이전에 다르고 현재가 같은 위치라면 cnt

#include <iostream>

#define MAX_TIME 1000001

using namespace std;

int n, m;
int cnt = 0;

int pos_A[MAX_TIME];
int pos_B[MAX_TIME];

int main() {
    
    int time;
    int idx_A = 1;
    int idx_B = 1;
    char dir;

    cin >> n >> m;

    // 배열 A에 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> time >> dir;

        if (dir == 'R') {
            while (time--) {
                pos_A[idx_A] = pos_A[idx_A - 1] + 1;
                idx_A++;
            }
        }
        else {
            while (time--) {
                pos_A[idx_A] = pos_A[idx_A - 1] - 1;
                idx_A++;
            }
        }
    }    

    // 배열 B에 입력 받기
    for (int i = 0; i < m; ++i) {
        cin >> time >> dir;

        if (dir == 'R') {
            while (time--) {
                pos_B[idx_B] = pos_B[idx_B - 1] + 1;
                idx_B++;
            }
        }
        else {
            while (time--) {
                pos_B[idx_B] = pos_B[idx_B - 1] - 1;
                idx_B++;
            }
        }
    }

    // 배열 길이 짧은 쪽 -> 현재위치 계속 유지 하도록 길이 맞추기
    int cor;
    
    // A배열의 길이가 더 클 때
    if (idx_A >= idx_B) {
        cor = idx_A - idx_B;
        
        for (int i = 0; i < cor; ++i) {
            pos_B[idx_B] = pos_B[idx_B - 1];
            idx_B++;
        }
    }
    // B배열의 길이가 더 클 때
    else {
        cor = idx_B - idx_A;

        for (int i = 0; i < cor; ++i) {
            pos_A[idx_A] = pos_A[idx_A - 1];
            idx_A++;
        }
    }

    // 이전 값이 다르고 다음 값이 서로 같으면 카운트
    for (int i = 0; i < idx_A - 1; ++i) {
        if (pos_A[i] != pos_B[i] && pos_A[i + 1] == pos_B[i + 1])
            cnt++;
    }

    cout << cnt;

    return 0;
}
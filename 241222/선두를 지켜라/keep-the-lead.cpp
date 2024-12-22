// 1. 배열 A, B를 각각 생성해서 시간단위로 idx에 현재위치 체크
// 2. 두 배열을 비교하면서 한쪽의 값이 다른 쪽의 값보다 커지는 순간 카운트

#include <iostream>

#define MAX_TIME 1000000            // 배열의 최대값

using namespace std;

int n, m;                           // A, B의 입력 횟수 

int time_A[MAX_TIME];               // A의 시간당 현재 위치 배열
int time_B[MAX_TIME];               // B의 시간당 현재 위치 배열

int cur_A = 0;                      // A의 현재위치
int cur_B = 0;                      // B의 현재위치

int idx_A = 0;                      // A의 입력받은 시간
int idx_B = 0;                      // B의 입력받은 시간

int cnt = 0;

int main() {
    
    cin >> n >> m;

    // A의 시간 당 현재위치 입력
    for (int i = 0; i < n; ++i) {
        
        int v, t;
        
        cin >> v >> t;

        while (t--) {
            cur_A += v;
            time_A[idx_A] = cur_A;
            idx_A++;
        }
    }

    // B의 시간 당 현재위치 입력
    for (int i = 0; i < m; ++i) {
        
        int v, t;
        
        cin >> v >> t;

        while (t--) {
            cur_B += v;
            time_B[idx_B] = cur_B;
            idx_B++;
        }
    }

    // for (int i = 0; i < idx_A; ++i) {
    //     cout << time_A[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < idx_B; ++i) {
    //     cout << time_B[i] << " ";
    // }
    // cout << endl;

    // 배열을 비교하며 한쪽이 다른 쪽보다 커질때마다 카운트

    bool big_A = false;                 // A가 앞설 때
    bool big_B = false;                 // B가 앞설 때

    // 초기에 누가 선두인지 체크
    if (time_A[0] > time_B[0]) {
        big_A = true;
    }
    else if (time_B[0] > time_A[0]) {
        big_B = true;
    }

    for (int i = 1; i < idx_A; ++i) {
        // A가 추월할 경우
        if (big_B && time_A[i] > time_B[i]) {
            big_A = true;
            big_B = false;
            cnt++;
            // cout << i << " 일때 A가 추월!";
        }
        // B가 추월할 경우
        else if (big_A && time_A[i] < time_B[i]) {
            big_A = false;
            big_B = true;
            cnt++;
            // cout << i << " 일때 B가 추월!";
        }
    }

    cout << cnt;

    return 0;
}
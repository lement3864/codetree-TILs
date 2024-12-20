// 1. 배열 A, B를 각각 생성
// 2. 1초 간격으로 배열에 현재 위치를 집어넣기
// 3. 두 배열을 비교하면서 현재 위치의 값이 같아지는 배열 위치 출력

#include <iostream>

#define MAX_ARR 1000000

using namespace std;

int n, m;
int result = -1;
int arr_a[MAX_ARR];
int arr_b[MAX_ARR];

int main() {
    
    int move;
    int cur_a = 0;
    int cur_b = 0;
    int idx_a = 0;
    int idx_b = 0;

    int time = 0;

    char dir;

    cin >> n >> m;

    // A의 움직임 배열
    for (int i = 0; i < n; ++i) {
       
        cin >> dir >> move;

        time += move;

        if (dir == 'R') {
            for (int j = 0; j < move; ++j) {
                cur_a++;
                arr_a[idx_a] = cur_a;
                idx_a++;
            }
        }
        else {
            for (int j = 0; j < move; ++j) {
                cur_a--;
                arr_a[idx_a] = cur_a;
                idx_a++;
            }
        }
    }

    // B의 움직임 배열
    for (int i = 0; i < m; ++i) {
       
        cin >> dir >> move;

        if (dir == 'R') {
            for (int j = 0; j < move; ++j) {
                cur_b++;
                arr_b[idx_b] = cur_b;
                idx_b++;
            }
        }
        else {
            for (int j = 0; j < move; ++j) {
                cur_b--;
                arr_b[idx_b] = cur_b;
                idx_b++;
            }
        }

    }

    // A, B 배열 비교
    for (int i = 0; i < time; ++i) {
        if (arr_a[i] == arr_b[i]) {
            result = i + 1;
            break;
        }
    }

    cout << result;

    return 0;
}
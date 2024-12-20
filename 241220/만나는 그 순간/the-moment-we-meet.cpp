// 1. 배열 A, B를 각각 생성
// 2. 1초 간격으로 배열에 현재 위치를 집어넣기
// 3. 두 배열을 비교하면서 현재 위치의 값이 같아지는 배열 위치 출력

#include <iostream>

#define MAX_ARR 1000000

using namespace std;

int n, m;
int result;
int arr_a[MAX_ARR];
int arr_b[MAX_ARR];

int main() {
    
    int move;
    int cur_a = 0;
    int cur_b = 0;

    char dir;

    cin >> n >> m;

    // A의 움직임 배열
    for (int i = 0; i < n; ++i) {
       
        cin >> dir >> move;

        if (dir == 'R') {
            for (int j = 0; j < move; ++j) {
                cur_a++;
                arr_a[cur_a] = cur_a;
            }
        }
        else {
            for (int j = 0; j < move; ++j) {
                cur_a--;
                arr_a[cur_a] = cur_a;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
       
        cin >> dir >> move;

        if (dir == 'R') {
            for (int j = 0; j < move; ++j) {
                cur_b++;
                arr_b[cur_b] = cur_b;
            }
        }
        else {
            for (int j = 0; j < move; ++j) {
                cur_b--;
                arr_b[cur_b] = cur_b;
            }
        }

    }

    // A, B 배열 비교
    for (int i = 1; i < MAX_ARR; ++i) {
        if (arr_a[i] == arr_b[i]) {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}
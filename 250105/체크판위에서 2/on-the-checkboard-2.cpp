// 1. 항상 오른쪽 아래로 이동 + 다른 색으로 이동
// 2. 점프위치가 2곳임 (시작, 도착 점 제외)

#include <iostream>

#define MAX_ARR 16

using namespace std;

int r, c;
int cnt = 0;

char arr[MAX_ARR][MAX_ARR];

int main() {
    
    cin >> r >> c;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < r; ++i) {
        for (int j = 1; j < c; ++j) {
            for (int k = i + 1; k < r - 1; ++k) {
                for (int l = j + 1; l < c - 1; ++l) {
                    if (arr[0][0] != arr[i][j] && 
                        arr[i][j] != arr[k][l] && 
                        arr[k][l] != arr[r - 1][c - 1]) {
                            cnt++;
                        }
                }
            }
        }
    }

    

    cout << cnt;

    return 0;
}
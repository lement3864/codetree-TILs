// 1. 배열 중앙에서 시작
// 2. 체크 -> 전진 -> 체크 > 방향 전환
// 3. 배열을 다 채울때 까지 반복

#include <iostream>

using namespace std;

int n;
int x, y;
int dir = 0;

int arr[101][101];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

// 배열을 벗어나는지 체크 하는 함수
bool CheckMove (int x, int y) {

    return (0 <= x && x < n && 0 <= y && y < n);
}

bool CheckDir() {
    int ndir = (dir + 1) % 4;
    int nx = x + dx[ndir];
    int ny = y + dy[ndir];

    if (arr[nx][ny] == 0) 
        return 1;
    else
        return 0;
    
}

int main() {

    cin >> n;

    // 시작위치 설정
    x = n / 2;
    y = n / 2;
    arr[x][y] = 1;

    // 배열을 다 채울때 까지 반복
    for (int i = 2; i <= n * n; ++i) {
        // 체크 후 전진
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (CheckMove(nx, ny) && arr[nx][ny] == 0) {
            x += dx[dir];
            y += dy[dir];

            arr[x][y] = i;
        }

        // 체크 후 방향 전환
        if (CheckDir()) {
            dir = (dir + 1) % 4;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
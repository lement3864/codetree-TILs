// 1. 다음 칸에 숫자가 없고, 배열 범위를 벗어나지 않으면 숫자를 증가시키면서 입력

#include <iostream>

using namespace std;

int n, m;
int dir = 0;
int x = 0, y = 0;

int arr[101][101];

// S, E, N, W
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool Checked(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    
    cin >> n >> m;

    arr[0][0] = 1;

    for (int i = 2; i <= n * m; ++i) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!Checked(nx, ny) || arr[nx][ny] != 0)
            dir = (dir + 1) % 4;

        x = x + dx[dir];
        y = y + dy[dir];

        arr[x][y] = i;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
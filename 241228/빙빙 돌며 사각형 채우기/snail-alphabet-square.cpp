// 1. dir 방향으로 전진하며 증가하는 알파벳을 배열에 체크
// 2. 배열을 벗어나거나, 이미 배열에 알파벳이 적혀있으면 방향 전환

#include <iostream>

using namespace std;

int n, m;
int dir = 0;
int x = 0, y = 0;

int alp = 66;

int arr[101][101];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool Checked(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    
    cin >> n >> m;

    arr[x][y] = 65;

    for (int i = 1; i < n * m; ++i) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!Checked(nx, ny) || arr[nx][ny] != 0)
            dir = (dir + 1) % 4;
        
        x = x + dx[dir];
        y = y + dy[dir];

        arr[x][y] = alp++;

        if (alp == 91)
            alp = 65;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << char(arr[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}
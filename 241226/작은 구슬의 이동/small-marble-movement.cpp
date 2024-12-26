// 1. 1초에 한 칸씩 이동 
// 2. 배열의 끝에 닿으면 방향 전환(전환하는데 1초)
// 3. t초가 될때까지 반복
// 4. 마지막 위치 출력

#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int arr[50][50];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

// 이동하는 좌표가 배열 범위를 벗어나는지 체크하는 함수
bool Checked(int x, int y) {
    return (1 <= x && x <= n && 1 <= y && y <= n);
}

// 배열을 벗어나면 방향을 전환하는 함수
int ChangeDir(int n) {
    if (n == 3)
        return 1;
    else if (n == 1)
        return 3;
    else if (n == 0)
        return 2;
    else 
        return 0;
}

int main() {
    int dir;

    cin >> n >> t;
    cin >> r >> c >> d;
    

    // 초기 이동 방향
    if (d == 'L')
        dir = 3;
    else if (d == 'R')
        dir = 1;
    else if (d == 'U')
        dir = 2;
    else
        dir = 0;

    // 주어진 시간 동안 반복하며 초당 좌표위치 저장
    while (t--) {
        int nr = r + dx[dir];
        int nc = c + dy[dir];

        // 벽에 안 닿으면 기존 방향으로 진행하고 r, c값 초기화
        if (Checked(nr, nc)) {
            r = nr;
            c = nc;
        }
        // 벽에 닿으면 방향 전환
        else {
            dir = ChangeDir(dir);
        }

        // cout << t << "초일때 현재 위치: " << r << " " << c << endl;
    }

    cout << r << " " << c;

    return 0;
}
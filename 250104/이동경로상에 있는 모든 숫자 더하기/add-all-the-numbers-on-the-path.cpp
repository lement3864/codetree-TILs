// 1. 배열 중앙에서 시작
// 2. 명령대로 한칸씩 이동하며 배열 요소를 더하기
// 2-1. 배열 벗어나는 명령이면 무시
// 3. 총합 출력

#include <iostream>
#include <string>

using namespace std;

int n, t;
int x, y;
int dir = 0;
int cnt = 0;

int dx[4] = {-1, 0, 1, 0};      // N E S W
int dy[4] = {0, 1, 0, -1};

int arr[100][100];

string order;

void MoveForward () {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (0 <= nx && nx < n && 0 <= ny && ny < n) {
        x = nx;
        y = ny;
        cnt += arr[x][y];
    }
}

void TurnRight () {
    dir = (dir + 1) % 4;
}

void TurnLeft () {
    dir = (dir + 3) % 4;
}

int main() {

    cin >> n >> t;
    cin >> order;

    x = n / 2;
    y = n / 2;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cnt += arr[x][y];

    for (int i = 0; i < t; ++i) {
        if (order[i] == 'F') {
            MoveForward();
        }
        else if (order[i] == 'R') {
            TurnRight();
        }
        else {
            TurnLeft();
        }
    }

    cout << cnt;
    
    return 0;
}
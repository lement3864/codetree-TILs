// 1. 입력받은 위치를 배열에 입력
// 2. 위치의 상하좌우 인접한 배열에 색이 칠해져있는지 체크
// 3. 3개이상 칠해져있으면 1출력, 없으면 0

#include <iostream>

using namespace std;

int n, m;

int arr[100][100];

int dx[4] = {-1, 0, 1 ,0};
int dy[4] = {0, 1, 0, -1};

// 편안한 상태 체크 함수
int CheckedChill (int x, int y) {
    int cnt = 0;
    int dir = 0;

    // 좌표를 기준으로 상하좌우 체크 -> cnt = 3이면 편안한 상태
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (arr[nx][ny] == 1)
            cnt++;
        
        dir++;
    }

    // 편안한 상태 체크 후 출력
    if (cnt == 3)
        return 1;
    else
        return 0;
}

int main() {
    
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int r, c;

        cin >> r >> c;

        arr[r][c] = 1;

        cout << CheckedChill(r, c) << endl; 
    }

    return 0;
}
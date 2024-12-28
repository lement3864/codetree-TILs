// 1. 특정 위치에서 시작
// 1-1. 4n
// 2. /, \를 만나면 카운트
// 3. 방향에 맞춰서 다음 좌표 이동
// 3-1. \이면 반시계방향으로 전환, /이면 시계방향으로 전환
// 4. 반복
// 5. 배열 범위 밖에 닿으면 종료

// ex
// 2번 위치에서 시작 -> 시작 좌표값 (0,2)
// (0, 2) 위치에서의 거울 체크 후 카운팅 하고 다음 좌표로 이동 -> 반복
// 마지막 좌표에서 거울 체크 후 좌표 이동 시 배열을 벗어나기 때문에 반복 종료

#include <iostream>

using namespace std;

int n;
int k;
int x, y;
int dir = 0;
int result = 0;

char arr[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

// 시작위치, 방향 지정 함수
void Start () {
    // 윗면 (1 <= k <= n)
    if (1 <= k && k <= n) {
        x = 1;
        y = k;
        dir = 0;
    }
    // 오른쪽면 (n < k <= 2n)
    else if (n < k && k <= 2 * n) {
        x = k - n;
        y = n;
        dir = 1;
    }
    // 아랫면 (2n < k <= 3n)
    else if (2 * n < k && k <= 3 * n) {
        x = n;
        y = 3 * n - k + 1;
        dir = 2;
    }
    // 왼쪽면 (3n < k <= 4n)
    else {
        x = 4 * n - k + 1;
        y = 1;
        dir = 3;
    }
}

// "/"일때 방향 별 처리
void Slash() {
    if (dir == 0) {
        dir = 1;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else if (dir == 1) {
        dir = 0;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else if (dir == 2) {
        dir = 3;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else {
        dir = 2;
        x = x + dx[dir];
        y = y + dy[dir];
    }
}

// "\"일때 방향 별 처리
void BackSlash() {
    if (dir == 0) {
        dir = 3;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else if (dir == 1) {
        dir = 2;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else if (dir == 2) {
        dir = 1;
        x = x + dx[dir];
        y = y + dy[dir];
    }
    else {
        dir = 0;
        x = x + dx[dir];
        y = y + dy[dir];
    }
}

int Progress () {
    int cnt = 0;

    while (true) {
        // 배열을 벗어나면 중지
        if (x < 1 || n < x || y < 1 || n < y)
            break;
        
        if (arr[x][y] == '/') {
            cnt++;
            Slash();
        }
        else if (arr[x][y] == '\\') {
            cnt++;
            BackSlash();
        }

        // cout << x << " " << y << " " << dir << endl;
    }

    return cnt;
}

int main() {
    
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    // 시작위치, 방향 설정
    Start();

    // cout << x << " " << y << " " << dir << endl;

    // 레이저 진행
    result = Progress();

    // 튕긴 횟수 출력
    cout << result;
    
    return 0;
}
// 1. 처음 시작 위치에 0 
// 2. 입력이 주어질 때 마다 1칸씩 이동하면서 배열에 숫자 체크
// 3. 0에 도착했을때 시간 출력

#include <iostream>

using namespace std;

int n;
int dir = 0;
int x = 1000;
int y = 1000;

int arr[2000][2000];

// N, E, S, W
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int CheckedDir (char dir) {
    if (dir == 'N')
        return 0;
    else if (dir == 'E')
        return 1;
    else if (dir == 'S')
        return 2;
    else
        return 3;
}

int main() {
    
    cin >> n;

    int time = 1;

    arr[x][y] = 9999;

    for (int i = 0; i < n; ++i) {
        int move;
        char alp;

        cin >> alp >> move;

        dir = CheckedDir(alp);

        while (move--) {
            x = x + dx[dir];
            y = y + dy[dir];

            if (arr[x][y] == 9999) {
                break;
            }

            arr[x][y] = time;

            time++;
        }

        if (arr[x][y] == 9999)
            break;
    }

    if (arr[x][y] == 9999)
        cout << time;
    else
        cout << -1;

    
    return 0;
}
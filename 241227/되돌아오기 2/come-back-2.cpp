// 1. 북쪽을 바라보고 0, 0에서 시작
// 2. L, R이 주어지면 방향 전환하며 1초 소모
// 3. F가 주어지면 1초 전진
// 4. 0, 0에 돌아오면 종료하고 걸린 시간 출력

#include <iostream>
#include <string>

using namespace std;

string word;

int x = 0, y = 0;
int t = 0;
int dir = 0;

// N, E, S, W
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    
    cin >> word;

    for (int i = 0; i < word.length(); ++i) {
        if (word[i] == 'F') {
            x = x + dx[dir];
            y = y + dy[dir];
        }
        else if (word[i] == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (word[i] == 'R') {
            dir = (dir + 1) % 4;
        }

        t++;

        if (x == 0 && y == 0)
            break;
    }

    if (x == 0 && y == 0)
        cout << t;
    else
        cout << -1;

    return 0;
}
// 1. 왼쪽으로 이동하며 흰색으로 뒤집기, 오른쪽으로 이동하며 검은색으로 뒤집기
//      1-1. 현재 위치 타일 부터 뒤집기 시작
//      1-2. 흰색 타일은 1, 검은색 타일은 2
//      1-3. 각 명령 이후에 마지막으로 뒤집은 위치에 서있음
// 2. 흰색, 검은색 타일 수 출력


#include <iostream>
using namespace std;

#define OFFSET 100000                   // 배열의 중간

int n;                                  // 입력 횟수
int white = 0;                          // 흰색 타일
int black = 0;                          // 검은색 타일
int cur = OFFSET;                       // 현재 위치

int tiles[OFFSET * 2 + 1] = {};         // 타일 배열

int main() {
    
    cin >> n;

    // 1. 입력 받을 때 마다 타일 뒤집기
    for (int i = 0; i < n; ++i) {
        
        int distance;       // 거리
        char direction;     // 방향 (L, R)

        cin >> distance >> direction;

        // 1-1. 현재 위치 타일에서 부터 뒤집기
        if (direction == 'L') {
            while (distance--) {     // 주어진 거리 만큼 타일 뒤집기
                tiles[cur] = 1;
                if (distance)
                    cur--;
            }
        }
        else if (direction == 'R') {
            while (distance--) {     // 주어진 거리 만큼 타일 뒤집기
                tiles[cur] = 2;
                if (distance)
                    cur++;
            }                
        }
    }

    // 2. 타일 색 체크
    for (int i = 0;  i < OFFSET * 2 + 1; ++i) {
        if (tiles[i] == 1) {
            white++;
        }
        else if (tiles[i] == 2) {
            black++;
        }
    }

    // 출력
    cout << white << " " << black;

    return 0;
}
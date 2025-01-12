// 1. 특정 방에서 시작
// 2. 각 방에 들어갈 인원수 만큼 거리 체크 해서 결과값에 계속 더해주

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int min_dis = INT_MAX;

int rooms[1004];

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> rooms[i];
    }

    // i번째 방에서 시작
    for (int i = 0; i < n; ++i) {
        int temp_dis = 0;

        for (int j = 0; j < n; ++j) {
            //i에서 j방 까지 이동할 거리
            int move = (n + j - i) % n;

            temp_dis += rooms[j] * move;
        }

        min_dis = min(min_dis, temp_dis);
    }

    cout << min_dis;

    return 0;
}
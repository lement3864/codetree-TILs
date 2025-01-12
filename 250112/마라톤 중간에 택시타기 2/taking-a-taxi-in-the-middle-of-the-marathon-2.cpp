// 1. 완전탐색 하면서 i번째 좌표를 제외하고 거리 체크
// 2. 최솟값이면 result에 넣기

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int result = INT_MAX;

// point = (x, y)
int point[101][2];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> point[i][0] >> point[i][1];
    }

    // 첫번째와 마지막 제외 후, i번째 제외하면서 거리 측정
    // 이전위치 와 현재위치 차 만큼 길이 저장
    for (int i = 1; i < n - 1; ++i) {
        int temp_dis = 0;

        // 이전 위치 설정
        int prev_x = point[0][0];
        int prev_y = point[0][1];

        for (int j = 1; j < n; ++j) {
            // i번째는 제외하고 거리 체크
            if (i == j)
                continue;    
            
            int cur_x = point[j][0];
            int cur_y = point[j][1];

            temp_dis += abs(cur_x - prev_x) + abs(cur_y - prev_y);

            prev_x = cur_x;
            prev_y = cur_y;
        }
        
        result = min(result, temp_dis);
    }

    cout << result;

    return 0;
}
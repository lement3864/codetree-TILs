// 1. 첫번째 직사각형이 주어지면 1로 체크
// 2. 두번째 직사각형이 주어지면 겹치는 부분만 2로 체크
// 3. 1로 체크되어있는 부분에서 xMax, yMax, xMin, yMin 찾기
// 4. 최소 넓이 = xMax - xMin * yMax - yMin 출력

#include <iostream>
#include <algorithm>
using namespace std;

int result = 0;                             // 최소 직사각형 넓이
int arr[2001][2001] = {0};                  // 좌표평면

int main() {
    
    for (int t = 0; t < 2; ++t) {
        
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        // 직사각형 두개 칠하기
        if (t == 0) {
            for (int i = x1 + 1000; i < x2 + 1000; ++i) {
                for (int j = y1 + 1000; j < y2 + 1000; ++j) {
                    arr[i][j] = 1;
                }
            }
        }
        else {
            for (int i = x1 + 1000; i < x2 + 1000; ++i) {
                for (int j = y1 + 1000; j < y2 + 1000; ++j) {
                    if (arr[i][j] == 1) {
                        arr[i][j] = 2;
                    }
                }
            }
        }
    }

    int xMax = 0;
    int xMin = 2001;
    int yMax = 0;
    int yMin = 2001;
    bool check_rect = false;

    // xMax 찾기
    for (int x = 0; x < 2001; ++x) {
        for (int y = 0; y < 2001; ++y) {
            if (arr[x][y] == 1) {
                check_rect = true;
                xMax = max(xMax, x);
                xMin = min(xMin, x);
                yMax = max(yMax, y);
                yMin = min(yMin, y);
            }
        }
    }


    // 최소 직사각형 넓이
    if (!check_rect)
        result = 0;
    else
        result = (xMax - xMin + 1) * (yMax - yMin + 1);


    // 출력
    cout << result;

    return 0;
}
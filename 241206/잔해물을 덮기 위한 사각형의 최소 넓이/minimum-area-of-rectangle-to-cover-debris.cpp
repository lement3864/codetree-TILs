// 1. 첫번째 직사각형이 주어지면 1로 체크
// 2. 두번째 직사각형이 주어지면 겹치는 부분만 2로 체크
// 3. 1로 체크되어있는 부분에서 xMax와 yMax를 찾기
// 4. 최소 넓이 = xMax * yMax 출력

#include <iostream>
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
    int yMax = 0;

    // xMax 찾기
    for (int i = 0; i < 2001; ++i) {
        int temp = 0;

        for (int j = 0; j < 2001; ++j) {
            if (arr[i][j] == 1) {
                temp++;        
            }
        }

        if (xMax <= temp) {
            xMax = temp;
        }
    }

    // yMax 찾기
    for (int j = 0; j < 2001; ++j) {
        int temp = 0;

        for (int i = 0; i < 2001; ++i) {
            if (arr[i][j] == 1) {
                temp++;        
            }
        }

        if (yMax <= temp) {
            yMax = temp;
        }
    }

    // 최소 직사각형 넓이
    result = xMax * yMax;

    // 출력
    cout << result;

    return 0;
}
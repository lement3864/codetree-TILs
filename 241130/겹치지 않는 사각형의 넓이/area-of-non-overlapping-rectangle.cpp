// 1. 직사각형 A,B를 배열에 1로 체크
// 2. 직사각형 M을 배열에 0으로 체크
// 3. 배열에 남아있는 직사각형 넓이 출력

#include <iostream>
using namespace std;

int result = 0;                                 // 최종 직사각형 넓이
int arr[2001][2001] = {0};                      // 좌표평면

int main() {
    
    for (int t = 0; t < 3; ++t) {
        
        int x1, y1, x2, y2;                     // 직사각형 좌표

        cin >> x1 >> y1 >> x2 >> y2;

        // 직사각형 M
        if (t == 2) {
            for (int i = x1 + 1000; i < x2 + 1000; ++i) {
                for (int j = y1 + 1000; j < y2 + 1000; ++j) {
                    arr[i][j] = 0;
                }
            }
        }
        // 직사각형 A, B
        else {
            for (int i = x1 + 1000; i < x2 + 1000; ++i) {
                for (int j = y1 + 1000; j < y2 + 1000; ++j) {
                    arr[i][j] = 1;
                }
            }
        }
    }

    // 최종 직사각형 넓이 체크
    for (int i = 0; i < 2001; ++i) {
        for (int j = 0; j < 2001; ++j) {
            if (arr[i][j] == 1) {
                result++;
            }
        }
    }

    // 직사각형 A, B의 넓이 출력
    cout << result;

    return 0;
}
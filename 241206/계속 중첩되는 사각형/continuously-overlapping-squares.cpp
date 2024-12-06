// 1. 빨간 사각형 = 1, 파란 사각형 = 2 로 체크
// 2. 2인 부분의 넓이 출력

#include <iostream>
using namespace std;

#define OFFSET 100                                      // 좌표 보정 값

int n;                                                  // 입력 사각형 갯수
int arr[OFFSET * 2 + 1][OFFSET * 2 + 1] = {0};          // 좌표평면(201, 201)
int result = 0;                                         // 최종 파란색 영역

int main() {
    
    cin >> n;

    // 짝수는 빨간색(1), 홀수는 파란색(2)로 색칠
    for (int t = 0; t < n; ++t) {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        // 빨간 사각형
        if (t % 2 == 0) {
            for (int i = x1 + OFFSET; i < x2 + OFFSET; ++i) {
                for (int j = y1 + OFFSET; j < y2 + OFFSET; ++j) {
                    arr[i][j] = 1;
                }
            }
        }
        // 파란 사각형
        else {
            for (int i = x1 + OFFSET; i < x2 + OFFSET; ++i) {
                for (int j = y1 + OFFSET; j < y2 + OFFSET; ++j) {
                    arr[i][j] = 2;
                }
            }
        }
    }

    // 파란 영역인 부분 체크
    for (int i = 0; i <= OFFSET * 2; ++i) {
        for (int j = 0; j <= OFFSET * 2; ++j) {
            if (arr[i][j] == 2) {
                result++;
            }
        }
    }

    // 출력
    cout << result;

    return 0;
}
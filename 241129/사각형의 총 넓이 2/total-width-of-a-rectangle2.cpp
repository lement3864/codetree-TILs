// 1. 직사각형이 있는 위치 모두 1로 전환
// 2. 1로 전환된 갯수 출력

#include <iostream>
using namespace std;

int n;                                      // 직사각형 갯수
int count = 0;                              // 직사각형 넓이
int arr[201][201] = {0};                     // 좌표 평면

int main() {
    
    cin >> n;


    // 직사각형 위치 받아서 배열에 체크
    for (int i = 0; i < n; ++i) {
        
        int x1, x2, y1, y2;                 // 직사각형의 양 끝 좌표

        cin >> x1 >> y1 >> x2 >> y2;

        // 배열에 직사각형이 있는 곳에 1로 체크
        for (int j = x1 + 100; j < x2 + 100; ++j) {
            for (int k = y1 + 100; k < y2 + 100; ++k) {
                arr[j][k] = 1;
            }
        }
    }

    // 배열에서 1로 되어 있는 갯수 체크
    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            if (arr[i][j] == 1) {
                count++;
            }
        }
    }

    // 직사각형 넓이 출력
    cout << count;

    return 0;
}